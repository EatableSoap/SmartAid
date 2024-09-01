#include "socketServer.h"

FileServer::FileServer(QObject *parent) : QTcpServer(parent), fileState(0), recvSize(0),fileSize(0),
    HeadToInt(FileOperate::CommandHeadToInt()) {
    connect(this, &QTcpServer::newConnection, this, &FileServer::onNewConnection);
}

QJsonObject FileServer::AnalyzeCommand(QJsonObject& CommandPack,QByteArray FileByte){
    QString CommandHead = CommandPack["CMD"].toString();
    QJsonObject CommandArgs = CommandPack["Args"].toObject();
    switch (HeadToInt->value(CommandHead)) {
    case 0:
    {
        int identity = CommandArgs.value("Identity").toInt();
        qlonglong UserID =  QVariant(CommandArgs.value("UserID")).toLongLong();
        QString password = CommandArgs.value("Password").toString();
        QJsonObject result = RequestOperate::UserLogin(identity,UserID,password);
        if(result.value("Result") != "1"){
            userList.remove(UserID);
        }
        return result;
    }
        break;
    case 1:
    {
        int identity = CommandArgs.value("Identity").toInt();
        qlonglong UserID = QVariant(CommandArgs.value("UserID")).toLongLong();
        QByteArray& AvatarPic = FileByte;
        QString password = CommandArgs.value("Password").toString();
        QString UserName = CommandArgs.value("UserName").toString();
        QString sex = CommandArgs.value("Sex").toString();
        int age = CommandArgs.value("Age").toInt();
        QString SelfAddress = CommandArgs.value("SelfAddress").toString();
        QString PhoneNumber = CommandArgs.value("PhoneNumber").toString();
        QString signature = CommandArgs.value("Signature").toString();
        return RequestOperate::UserRegister(identity,UserID,AvatarPic,password,UserName,
                                            age,sex,PhoneNumber,SelfAddress,signature);
    }
        break;
    case 2:
    {
        int identity = CommandArgs.value("Identity").toInt();
        qlonglong UserID = QVariant(CommandArgs.value("UserID")).toLongLong();
        QByteArray& AvatarPic = FileByte;
        return RequestOperate::UploadAvatar(identity,UserID,AvatarPic);
    }
        break;
    case 3:
    {
        QString Apartment = CommandArgs.value("Apartment").toString();
        return RequestOperate::RegistrationInfo(Apartment);
    }
        break;
    case 4:
    {
        qlonglong PatientID = QVariant(CommandArgs.value("PatientID")).toLongLong();
        qlonglong DoctorID = QVariant(CommandArgs.value("DoctorID")).toLongLong();
        int CurTime = CommandArgs.value("CurTime").toString().toInt();
        int duration = CommandArgs.value("Duration").toString().toInt();
        return RequestOperate::Registration(PatientID,DoctorID,CurTime,duration);
    }
        break;
    case 5:
    {
        int identity = CommandArgs.value("Identity").toInt();
        qlonglong UserID = QVariant(CommandArgs.value("UserID")).toLongLong();
        return RequestOperate::QueryProfiles(identity,UserID);
    }
        break;
    case 6:
    {
        qlonglong PatientID = QVariant(CommandArgs.value("PatientID")).toLongLong();
        return RequestOperate::QueryMedicalRecord(PatientID);
    }
        break;
    case 7:
    {
        qlonglong PatientID = QVariant(CommandArgs.value("PatientID")).toLongLong();
        return RequestOperate::QueryPrescriptionPay(PatientID);
    }
        break;
    case 8:
    {
        int identity = CommandArgs.value("Identity").toInt();
        qlonglong UserID = QVariant(CommandArgs.value("UserID")).toLongLong();
        return RequestOperate::DPCommunication(identity,UserID);
    }
        break;
    case 9:
    {
        int identity = CommandArgs.value("Identity").toInt();
        qlonglong UserID = QVariant(CommandArgs.value("UserID")).toLongLong();
        QString OldPassword = CommandArgs.value("OldPassword").toString();
        QString NewPassword = CommandArgs.value("NewPassword").toString();
        QByteArray& Avatar = FileByte;
        QString UserName = CommandArgs.value("UserName").toString();
        QString sex = CommandArgs.value("Sex").toString();
        int age = CommandArgs.value("Age").toInt();
        QString SelfAddress = CommandArgs.value("SelfAddress").toString();
        QString PhoneNumber = CommandArgs.value("PhoneNumber").toString();
        QString signature = CommandArgs.value("Signature").toString();
        return RequestOperate::EditProfile(identity,UserID,OldPassword,NewPassword,Avatar,
                                           UserName,sex,age,SelfAddress,PhoneNumber,signature);
    }
        break;
    case 10:
    {
        qlonglong DoctorID = QVariant(CommandArgs.value("DoctorID")).toLongLong();
        return RequestOperate::QueryRegistration(DoctorID);
    }
        break;
    case 11:
    {
        int AppointmentID = CommandArgs.value("AppointmentID").toInt();
        QString DoctorDiagnosis = CommandArgs.value("DoctorDiagnosis").toString();
        QString Perscription = CommandArgs.value("Perscription").toString();
        QString Orders = CommandArgs.value("Orders").toString();
        return RequestOperate::EditMedicalRecord(AppointmentID,DoctorDiagnosis,Perscription,Orders);
    }
        break;
    case 12:
    {
        int identity = CommandArgs.value("Identity").toInt();
        qlonglong Sender = QVariant(CommandArgs.value("Sender")).toLongLong();
        qlonglong Recipient = QVariant(CommandArgs.value("Recipient")).toLongLong();
        int SendTime = CommandArgs.value("SendTime").toInt();
        QString FilePath = CommandArgs.value("FilePath").toString();
        QString FileName = CommandArgs.value("FileName").toString();
        QByteArray& fileBytes = FileByte;
        FileOperate::isDirExist(FilePath);
        FilePath += QString::number(SendTime) + FileName;
        //此处应当将文件的二进制流传入QByteArray
        //构造文件
        QFile upFiles(FilePath);
        upFiles.open(QIODevice::WriteOnly);
        upFiles.write(fileBytes);
        upFiles.close();
        return RequestOperate::SaveFiles(identity,Sender,Recipient,SendTime,FilePath);
    }
        break;
    case 13:
    {
        int identity = CommandArgs.value("Identity").toInt();
        qlonglong Sender = QVariant(CommandArgs.value("Sender")).toLongLong();
        qlonglong Recipient = QVariant(CommandArgs.value("Recipient")).toLongLong();
        int IsFile = CommandArgs.value("IsFile").toInt();
        int SendTime = CommandArgs.value("SendTime").toInt();
        QString FileName = " ";
        if(CommandArgs.contains("FileName"))
            FileName = CommandArgs.value("FileName").toString();
        return RequestOperate::QueryHistory(identity,Sender,Recipient,IsFile,SendTime,FileName);
    }
        break;
    case 98:
    {
        qlonglong DoctorID = QVariant(CommandArgs.value("DoctorID")).toLongLong();
        QVector<int> *free = RequestOperate::QueryDoctorFree(DoctorID);
        QJsonObject result;
        QJsonObject ReturnValue;
        QJsonArray freetime;
        for(int t:*free){
            free->append(t);
        }
        result.insert("Result","1");
        ReturnValue.insert("FreeTime",freetime);
        return result;
    }
        break;
    default:
    {
        QJsonObject result;
        QJsonObject ReturnValue;
        result.insert("Result","服务器错误");
        result.insert("ReturnValue",ReturnValue);
        return result;
    }
        break;
    }
}

void FileServer::onNewConnection() {
    qDebug()<<"新连接！";
    QTcpSocket *clientSocket = nextPendingConnection();
    connect(clientSocket, &QTcpSocket::readyRead, this, [this, clientSocket]() {
        processCommand(clientSocket);
    });
    connect(clientSocket, &QTcpSocket::disconnected, this, [this, clientSocket]() {

        for(qlonglong it : userList.keys()){
            if(userList[it]==clientSocket)
            {
                qDebug()<<"用户"+QString::number(it)+"已断开连接";
                userList.remove(it);
            }
        }
    });
}

void FileServer::processCommand(QTcpSocket *clientSocket) {
    QByteArray commandByteArray = clientSocket->readAll();
    qbuff.append(commandByteArray);

    if(QString(commandByteArray).contains("$$$START$$$")){
        QByteArray temp = QString("").toUtf8();
        qbuff.swap(temp);
        qbuff.append(commandByteArray);
    }
    if(QString(commandByteArray.mid(commandByteArray.size()-11)).contains("$$$$END$$$$")){
        qbuff = qbuff.mid(11,qbuff.size()-22);
        if (QString(qbuff).contains("$$$$$$$$")) {
            // Handling file info header
            QStringList acceptinfo = QString(qbuff).split("$$$$$$$$");
            QStringList fileInfo = acceptinfo[1].split("&&");
            QString fileName = fileInfo[0];
            fileSize = fileInfo[1].toInt();

            qbuff = qbuff.mid(acceptinfo[0].size()+acceptinfo[1].size()+16);

            QJsonObject jsonObj = QJsonDocument::fromJson(acceptinfo[0].toUtf8()).object();

            QJsonObject returnPack = this->AnalyzeCommand(jsonObj,qbuff);
            QByteArray returnByteArray = QJsonDocument(returnPack).toJson();
            clientSocket->write("$$$START$$$");
            clientSocket->flush();
            clientSocket->write(returnByteArray);
            clientSocket->flush();
            if(HeadToInt->value(jsonObj.value("CMD").toString()) == 5)
            {
                QString filePath = jsonObj.value("Args").toObject().value("Avatar").toString();
                QByteArray *fileData = RequestOperate::DownloadFiles(filePath);
                QString sendFileName = fileName;
                int fileSize = fileData->size();
                QString fileInfo = QString("%1&%2").arg(sendFileName).arg(fileSize);
                clientSocket->write("$$$$$$$$");
                clientSocket->flush();
                clientSocket->write(fileInfo.toUtf8());
                clientSocket->flush();
                clientSocket->write("$$$$$$$$");
                clientSocket->flush();
                int sendbyte = 0;
                while(sendbyte < fileSize){
                    QByteArray buffer = fileData->mid(sendbyte,sendbyte+10239);
                    sendbyte += clientSocket->write(buffer,10240);
                    clientSocket->flush();
                }
            }
            clientSocket->write("$$$$END$$$$");
            clientSocket->flush();
        }
        else {
            // Handle JSON response
            commandPack = MyQtJson::AnalysisByteArray(qbuff);
            int mayFile = HeadToInt->value(commandPack->value("CMD").toString());
            if(mayFile==0){
                qlonglong userid = commandPack->value("Args").toObject().value("UserID").toString().toLongLong();
                userList[userid] = clientSocket;
            }
            sendResponse(clientSocket,commandPack);
        }
    }
}
//TODO 一次性接收所有数据，以$$$$$$$$分割处理
void FileServer::sendFile(QTcpSocket *clientSocket, QJsonObject *commandPack, const QString& FilePath) {
    QString filePath = commandPack->value("Args").toObject().value(FilePath).toString();
    QByteArray *fileData = RequestOperate::DownloadFiles(filePath);
    QString sendFileName = filePath.mid(filePath.lastIndexOf("/"));
    int fileSize = fileData->size();
    QString fileInfo = QString("%1&%2").arg(sendFileName).arg(fileSize);
    clientSocket->write("$$$$$$$$");
    clientSocket->flush();
    clientSocket->write(fileInfo.toUtf8());
    clientSocket->flush();
    clientSocket->write("$$$$$$$$");
    clientSocket->flush();
    int sendbyte = 0;
    while(sendbyte < fileSize){
        QByteArray buffer = fileData->mid(sendbyte,sendbyte+10239);
        sendbyte += clientSocket->write(buffer,10240);
        clientSocket->flush();
    }
}

void FileServer::sendResponse(QTcpSocket *clientSocket, QJsonObject *commandPack) {
    QJsonObject returnPack = this->AnalyzeCommand(*commandPack);
    QByteArray returnByteArray = QJsonDocument(returnPack).toJson();
    qDebug()<<returnByteArray;
    clientSocket->write("$$$START$$$");
    clientSocket->flush();
    clientSocket->write(returnByteArray);
    clientSocket->flush();
    clientSocket->write("$$$$END$$$$");
    clientSocket->flush();
}


void FileServer::receiveFileData(QTcpSocket *clientSocket) {
    qbuff.append(clientSocket->readAll());
    recvSize += qbuff.size();
    if (recvSize >= fileSize) {
        QJsonObject returnPack = AnalyzeCommand(*commandPack, qbuff);
        QByteArray returnByteArray = QJsonDocument(returnPack).toJson();
        clientSocket->write(returnByteArray);
        clientSocket->flush();
        fileState = 0;
    }
}
