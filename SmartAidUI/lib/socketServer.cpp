#include "socketServer.h"

FileServer::FileServer(QObject *parent) : QTcpServer(parent), fileState(0), recvSize(0),
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
        qlonglong UserID = CommandArgs.value("UserID").toString().toLongLong();
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
        qlonglong UserID = CommandArgs.value("UserID").toString().toLongLong();
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
        qlonglong UserID = CommandArgs.value("UserID").toString().toLongLong();
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
        qlonglong PatientID = CommandArgs.value("PatientID").toString().toLongLong();
        qlonglong DoctorID = CommandArgs.value("DoctorID").toString().toLongLong();
        int CurTime = CommandArgs.value("CurTime").toString().toInt();
        int duration = CommandArgs.value("Duration").toString().toInt();
        return RequestOperate::Registration(PatientID,DoctorID,CurTime,duration);
    }
        break;
    case 5:
    {
        int identity = CommandArgs.value("Identity").toInt();
        qlonglong UserID = CommandArgs.value("UserID").toString().toLongLong();
        return RequestOperate::QueryProfiles(identity,UserID);
    }
        break;
    case 6:
    {
        qlonglong PatientID = CommandArgs.value("PatientID").toString().toLongLong();
        return RequestOperate::QueryMedicalRecord(PatientID);
    }
        break;
    case 7:
    {
        qlonglong PatientID = CommandArgs.value("PatientID").toString().toLongLong();
        return RequestOperate::QueryPrescriptionPay(PatientID);
    }
        break;
    case 8:
    {
        int identity = CommandArgs.value("Identity").toInt();
        qlonglong UserID = CommandArgs.value("UserID").toString().toLongLong();
        return RequestOperate::DPCommunication(identity,UserID);
    }
        break;
    case 9:
    {
        int identity = CommandArgs.value("Identity").toInt();
        qlonglong UserID = CommandArgs.value("UserID").toString().toLongLong();
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
        qlonglong DoctorID = CommandArgs.value("DoctorID").toString().toLongLong();
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
        qlonglong Sender = CommandArgs.value("Sender").toString().toLongLong();
        qlonglong Recipient = CommandArgs.value("Recipient").toString().toLongLong();
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
        qlonglong Sender = CommandArgs.value("Sender").toString().toLongLong();
        qlonglong Recipient = CommandArgs.value("Recipient").toString().toLongLong();
        int IsFile = CommandArgs.value("IsFile").toInt();
        int SendTime = CommandArgs.value("SendTime").toInt();
        QString FileName = " ";
        if(CommandArgs.contains("FileName"))
            FileName = CommandArgs.value("FileName").toString();
        return RequestOperate::QueryHistory(identity,Sender,Recipient,IsFile,SendTime,FileName);
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
    QTcpSocket *clientSocket = nextPendingConnection();
    connect(clientSocket, &QTcpSocket::readyRead, this, [this, clientSocket]() {
        handleClientRequest(clientSocket);
    });
    connect(clientSocket, &QTcpSocket::disconnected, this, [this, clientSocket]() {
        for(auto it : userList.keys()){
            if(userList[it]==clientSocket)
                userList.remove(it);
        }
    });
}

void FileServer::handleClientRequest(QTcpSocket *clientSocket) {
    switch (fileState) {
    case 0:
        processCommand(clientSocket);
        break;
    case 1:
        readFileHeader(clientSocket);
        break;
    case 2:
        receiveFileData(clientSocket);
        break;
    }
}

void FileServer::processCommand(QTcpSocket *clientSocket) {
    QByteArray commandByteArray = clientSocket->readAll();
    QJsonObject *commandPack = MyQtJson::AnalysisByteArray(commandByteArray);

    int mayFile = HeadToInt->value(commandPack->value("CMD").toString());

    if(mayFile==1){
        qlonglong userid = commandPack->value("Args").toObject().value("UserID").toString().toLongLong();
        userList[userid] = clientSocket;
    }
    else if (mayFile == 5) {
        sendFile(clientSocket, commandPack,"Avatar.jpg");
    } else if (HasFile.contains(mayFile)) {
        if(mayFile==1||mayFile==2||mayFile==9||mayFile==12)
            fileState = 1;
        else
            sendFile(clientSocket, commandPack);
    } else {
        sendResponse(clientSocket, commandPack);
    }
}

void FileServer::sendFile(QTcpSocket *clientSocket, QJsonObject *commandPack, const QString& FilePath) {
    QString filePath = commandPack->value("Args").toObject().value(FilePath).toString();
    QByteArray *fileData = RequestOperate::DownloadFiles(filePath);
    QString sendFileName = filePath.mid(filePath.lastIndexOf("/"));
    int fileSize = fileData->size();
    QString fileInfo = QString("%1&%2").arg(sendFileName).arg(fileSize);
    clientSocket->write(fileInfo.toUtf8());
    clientSocket->waitForBytesWritten();
    clientSocket->write(*fileData);
    clientSocket->waitForBytesWritten();
}

void FileServer::sendResponse(QTcpSocket *clientSocket, QJsonObject *commandPack) {
    QJsonObject returnPack = this->AnalyzeCommand(*commandPack);
    QByteArray returnByteArray = QJsonDocument(returnPack).toJson();
    clientSocket->write(returnByteArray);
    clientSocket->waitForBytesWritten();
    fileState = 0;
}

void FileServer::readFileHeader(QTcpSocket *clientSocket) {
    QString str = QString(clientSocket->readAll());
    QStringList strlist = str.split("&");
    filename = strlist.at(0);
    fileSize = strlist.at(1).toInt();
    qbuff.clear();
    recvSize = 0;
    fileState = 2;
}

void FileServer::receiveFileData(QTcpSocket *clientSocket) {
    qbuff.append(clientSocket->readAll());
    recvSize += qbuff.size();
    if (recvSize >= fileSize) {
        QJsonObject returnPack = AnalyzeCommand(*commandPack, qbuff);
        QByteArray returnByteArray = QJsonDocument(returnPack).toJson();
        clientSocket->write(returnByteArray);
        clientSocket->waitForBytesWritten();
        fileState = 0;
    }
}
