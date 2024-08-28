#include "socketServer.h"
#include "RequestOperate.h"

class FileServer : public QTcpServer {
    Q_OBJECT

public:
    QMap<QString,int>* HeadToInt = FileOperate::CommandHeadToInt();
    QVector<int> HasFile = {1,2,5,8,9,12,99};
    explicit FileServer(QObject *parent = nullptr) : QTcpServer(parent), fileState(0), recvSize(0) {
        connect(this, &QTcpServer::newConnection, this, &FileServer::onNewConnection);
    }

private slots:
    QJsonObject* AnalyzeCommand(QJsonObject& CommandPack,QByteArray FileByte=""){
        QString CommandHead = CommandPack["CMD"].toString();
        QJsonObject CommandArgs = CommandPack["Args"].toObject();
        switch (HeadToInt->value(CommandHead)) {
        case 0:
        {
            int identity = CommandArgs.value("Identity").toInt();
            qlonglong UserID = CommandArgs.value("UserID").toString().toLongLong();
            QString password = CommandArgs.value("Password").toString();
            return RequestOperate::UserLogin(identity,UserID,password);
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
            FilePath += FileName.insert(FileName.lastIndexOf("."),'_' + QString::number(SendTime));
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
            QJsonObject* result = new QJsonObject;
            QJsonObject ReturnValue;
            result->insert("Result","服务器错误");
            result->insert("ReturnValue",ReturnValue);
            return result;
        }
            break;
        }
    }

    void onNewConnection() {
        QTcpSocket *clientSocket = nextPendingConnection();
        connect(clientSocket, &QTcpSocket::readyRead, this, [this, clientSocket]() {
            handleClientRequest(clientSocket);
        });
    }

    void handleClientRequest(QTcpSocket *clientSocket) {
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

    void processCommand(QTcpSocket *clientSocket) {
        QByteArray commandByteArray = clientSocket->readAll();
        QJsonObject *commandPack = MyQtJson::AnalysisByteArray(commandByteArray);
        int mayFile = HeadToInt->value(commandPack->value("CMD").toString());

        if (mayFile == 5) {
            sendFile(clientSocket, commandPack,"Avatar.jpg");
        } else if (HasFile.contains(mayFile)) {
            sendFile(clientSocket, commandPack);
        } else {
            sendResponse(clientSocket, commandPack);
        }
    }

    void sendFile(QTcpSocket *clientSocket, QJsonObject *commandPack, QString FilePath = "FilePath") {
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

    void sendResponse(QTcpSocket *clientSocket, QJsonObject *commandPack) {
        QJsonObject *returnPack = this->AnalyzeCommand(*commandPack);
        QByteArray returnByteArray = QJsonDocument(*returnPack).toJson();
        clientSocket->write(returnByteArray);
        clientSocket->waitForBytesWritten();
        fileState = 0;
    }

    void readFileHeader(QTcpSocket *clientSocket) {
        QString str = QString(clientSocket->readAll());
        QStringList strlist = str.split("&");
        filename = strlist.at(0);
        fileSize = strlist.at(1).toInt();
        qbuff.clear();
        recvSize = 0;
        fileState = 2;
    }

    void receiveFileData(QTcpSocket *clientSocket) {
        qbuff.append(clientSocket->readAll());
        recvSize += qbuff.size();
        if (recvSize >= fileSize) {
            QJsonObject *returnPack = AnalyzeCommand(*commandPack, qbuff);
            QByteArray returnByteArray = QJsonDocument(*returnPack).toJson();
            clientSocket->write(returnByteArray);
            clientSocket->waitForBytesWritten();
            fileState = 0;
        }
    }

private:
    int fileState;
    int recvSize;
    QByteArray qbuff;
    QString filename;
    int fileSize;
    QJsonObject *commandPack;
};
