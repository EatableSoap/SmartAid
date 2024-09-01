#include "socketClient.h"

socketClient::~socketClient(){
    delete shareValue;
}

socketClient::socketClient(const QString& serverAddress, int serverPort)
    : serverAddress(serverAddress), serverPort(serverPort) {
    shareValue = new SharedValue;
    shareValue->sharedsocket = new QTcpSocket();
    connect(shareValue->sharedsocket, &QTcpSocket::connected, this, &socketClient::onConnected);
    connect(shareValue->sharedsocket, &QTcpSocket::readyRead, this, &socketClient::onReadyRead);
}

void socketClient::tryconnect(){
    shareValue->sharedsocket->connectToHost(serverAddress,serverPort);
    if(shareValue->sharedsocket->waitForConnected(60000)){
        qDebug()<<"成功连接至服务器！";
    }
    else{
        qDebug()<<"服务器连接超时！";
    }
}

void socketClient::sendCommand(const QJsonObject& command, const QByteArray& fileData,const QString& FileName) {
    QByteArray commandByteArray = QJsonDocument(command).toJson();
    shareValue->sharedsocket->write("$$$START$$$");
    shareValue->sharedsocket->flush();
    shareValue->sharedsocket->write(commandByteArray);
    shareValue->sharedsocket->flush();
    //表示如果有文件，则从本地传一个数据流给服务端
    if (!fileData.isEmpty()&&FileName.size()) {
        shareValue->sharedsocket->write("$$$$$$$$");
        shareValue->sharedsocket->flush();
        shareValue->sharedsocket->write(QString("%1&&%2").arg(FileName).arg(fileData.size()).toUtf8());
        shareValue->sharedsocket->flush();
        shareValue->sharedsocket->write("$$$$$$$$");
        shareValue->sharedsocket->flush();
        int sendbyte = 0;
        while(sendbyte < fileData.size()){
            QByteArray buffer = fileData.mid(sendbyte,sendbyte+10239);
            sendbyte +=10240;
            shareValue->sharedsocket->write(buffer,10240);
            shareValue->sharedsocket->flush();
        }
    }
    shareValue->sharedsocket->write("$$$$END$$$$");
    shareValue->sharedsocket->flush();
}

//从服务端地址下载文件
void socketClient::downloadFile(const QString& filePath) {
    QJsonObject command;
    command["CMD"] = "Down";
    command["Args"] = QJsonObject{{"FilePath", filePath}};
    sendCommand(command);
}

void socketClient::onConnected() {
    qDebug() << "Connected to server.";
}

void socketClient::onReadyRead() {
    QByteArray data = shareValue->sharedsocket->readAll();
    qbuff.append(data);


    if(QString(data).contains("$$$START$$$")){
        QByteArray temp = QString("").toUtf8();
        qbuff.swap(temp);
        qbuff.append(data);
    }

    if(QString(data.mid(data.size()-11)).contains("$$$$END$$$$")){
        qbuff = qbuff.mid(11);
        qbuff = qbuff.mid(0,qbuff.size()-11);

        if (QString(qbuff).contains("$$$$$$$$")) {
            // Handling file info header
            QStringList acceptinfo = QString(data).split("$$$$$$$$");
            QStringList fileInfo = acceptinfo[1].split("&&");
            QString fileName = fileInfo[0];

            QFile file(shareValue->SavePath+fileName);
            if (file.open(QIODevice::WriteOnly)) {
                file.write(qbuff.mid(acceptinfo[0].size()+acceptinfo[1].size()+16));
                file.close();
                qDebug() << "File received and saved as" << fileName;
            }
            qbuff = qbuff.mid(0,acceptinfo[0].size()-1);
        }

        QJsonObject jsonObj = QJsonDocument::fromJson(qbuff).object();
        RecvJson = jsonObj;
        qDebug() << "Received response:" << jsonObj;
    }
}
