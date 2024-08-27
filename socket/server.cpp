#include "server.h"
#include "ui_server.h"

QMap<QString,int>* HeadToInt = FileOperate::CommandHeadToInt();
QVector<int> HasFile = {1,2,5,7,9,12,13};

//解析命令头，调用对应函数
QJsonObject* AnalyzeCommand(QJsonObject& CommandPack,QByteArray FileByte){
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
        QString password = CommandArgs.value("Password").toString();
        QString UserName = CommandArgs.value("UserName").toString();
        QString sex = CommandArgs.value("Sex").toString();
        int age = CommandArgs.value("Age").toInt();
        QString SelfAddress = CommandArgs.value("SelfAddress").toString();
        QString PhoneNumber = CommandArgs.value("PhoneNumber").toString();
        QString signature = CommandArgs.value("Signature").toString();
        return RequestOperate::UserRegister(identity,UserID,password,UserName,
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
        FilePath += FileName+'_' + QString::number(SendTime);
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

Server::Server(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);
}

Server::~Server()
{
    delete ui;
}

void Server::StartServer(){
    QTcpServer *server = new QTcpServer(this);

    if(!server->listen(QHostAddress::Any,8888)){
        qDebug()<<"Server could not start. Error:"<<server->errorString();
    }
    else{
        qDebug()<<"Server listening on port "<<8888;
    }

    connect(server,&QTcpServer::newConnection,[=](){
        //接收到客户端连接，产生对应嵌套字
        QTcpSocket* clientSocket = server->nextPendingConnection();
        connect(clientSocket,&QTcpSocket::readyRead,[=]{
            //客户端发送指令包
            QByteArray CommandByteArray = clientSocket->readAll();
            QJsonObject* CommandPack = MyQtJson::AnalysisByteArray(CommandByteArray);
            int mayFile = HeadToInt->value(CommandPack->value("CMD").toString());
            if(!HasFile.contains(mayFile)){
            QJsonObject* ReturnPack = AnalyzeCommand(*CommandPack);
            QByteArray ReturnByteArray = QJsonDocument(*ReturnPack).toJson();
            clientSocket->write(ReturnByteArray);
            }
            else{

            }
        });
    });
}
