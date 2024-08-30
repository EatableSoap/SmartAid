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
    if(shareValue->sharedsocket->waitForConnected()){
        qDebug()<<"成功连接至服务器！";
    }
    else{
        qDebug()<<"服务器连接超时！";
    }
}

void socketClient::sendCommand(const QJsonObject& command, const QByteArray& fileData,const QString& FileName) {
    QByteArray commandByteArray = QJsonDocument(command).toJson();
    shareValue->sharedsocket->write(commandByteArray);
    shareValue->sharedsocket->waitForBytesWritten();
    //表示如果有文件，则从本地传一个数据流给服务端
    if (!fileData.isEmpty()&&!FileName.size()) {
        shareValue->sharedsocket->write(QString("%1&%2").arg(FileName).arg(fileData.size()).toUtf8());
        shareValue->sharedsocket->waitForBytesWritten();
        shareValue->sharedsocket->write(fileData);
        shareValue->sharedsocket->waitForBytesWritten();
    }
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
    if (QString(data).contains('&')) {
        // Handling file info header
        QStringList fileInfo = QString(data).split("&");
        QString fileName = fileInfo[0];
        int fileSize = fileInfo[1].toInt();

        QFile file(shareValue->SavePath+fileName);
        if (file.open(QIODevice::WriteOnly)) {
            int receivedSize = 0;
            while (receivedSize < fileSize) {
                data = shareValue->sharedsocket->read(fileSize - receivedSize);
                file.write(data);
                receivedSize += data.size();
            }
            file.close();
            qDebug() << "File received and saved as" << fileName;
        }
    } else {
        // Handle JSON response
        QJsonDocument jsonDoc = QJsonDocument::fromJson(data);
        QJsonObject jsonObj = jsonDoc.object();
        RecvJson = jsonObj;
        qDebug() << "Received response:" << jsonObj;
    }
}
