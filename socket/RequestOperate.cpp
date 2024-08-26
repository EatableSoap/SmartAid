#include "RequestOperate.h"
#include "FileOperate.h"

#include <QCryptographicHash>
#include <QPixmap>

#define TmpPath "./tmp/"

QJsonObject& RequestOperate::UserLogin(int identity, int UserID, QString& password){
    QJsonObject QueryAtt;
    QString ident = identity ? "DoctorTable":"PatientTable";
    QueryAtt["TableName"]=ident;

    QJsonArray SelectColumn;
    QJsonArray ConditionColumn;
    QJsonArray ConditionValue;

    SelectColumn.append("Password");
    ConditionColumn.append("UserID");
    ConditionValue.append(UserID);

    QueryAtt.insert("SelectColumn",SelectColumn);
    QueryAtt.insert("ConditionColumn",ConditionColumn);
    QueryAtt.insert("ConditionValue",ConditionValue);

    QSqlQuery QueryResult = DataBaseInterface::ServerQuery(QueryAtt);
    QJsonObject *result=new QJsonObject;
    QJsonObject ReturnValue;
    if(!QueryResult.next()){
        result->insert("Result","账号或密码错误");
    }
    else{
        //加密密码
        QByteArray passwd;
        passwd.append(password);
        QByteArray hash = QCryptographicHash::hash(passwd,QCryptographicHash::Sha3_384);
        QString SHA = hash.toHex();
        //匹配密码
        if(QueryResult.value(0).toString() == SHA)
            result->insert("Result","1");
        else{
            result->insert("Result","账号或密码错误");
        }
    }
    result->insert("ReturnValue",ReturnValue);
    return *result;
}

QJsonObject& RequestOperate::UserRegister(
        int identity,int UserID,QString& password,
        int age,QString& sex,int PhoneNumber,QString& SelfAddress,
        QString& signature){
    //查询账号ID是否存在，存在则报错，反之则插入数据库
    QJsonObject QueryAtt;
    QString ident = identity ? "DoctorTable":"PatientTable";
    QueryAtt["TableName"]=ident;

    QJsonArray SelectColumn;
    QJsonArray ConditionColumn;
    QJsonArray ConditionValue;

    SelectColumn.append("UserID");
    ConditionColumn.append("UserID");
    ConditionValue.append(UserID);

    QueryAtt.insert("SelectColumn",SelectColumn);
    QueryAtt.insert("ConditionColumn",ConditionColumn);
    QueryAtt.insert("ConditionValue",ConditionValue);

    QSqlQuery QueryResult = DataBaseInterface::ServerQuery(QueryAtt);
    QJsonObject *result=new QJsonObject;
    QJsonObject ReturnValue;
    if(QueryResult.next()){
        result->insert("Result","账号已存在，请重新输入！");
        result->insert("ReturnValue",ReturnValue);
        return *result;
    }
    else{
        //SHA加密密码
        QByteArray passwd;
        passwd.append(password);
        QByteArray hash = QCryptographicHash::hash(passwd,QCryptographicHash::Sha3_384);
        QString HashPwd = hash.toHex();

        //打包插入数据
        QJsonObject InsertAtt;
        InsertAtt.insert("TableName",ident);
        QJsonArray InsertColumn;
        QJsonArray InsertValue;

        InsertColumn.append("UserID");
        InsertColumn.append("Password");
        InsertColumn.append("Age");
        InsertColumn.append("Sex");
        InsertColumn.append("PhoneNumber");
        InsertColumn.append("SelfAddress");
        InsertColumn.append("Signature");

        InsertValue.append(UserID);
        InsertValue.append(HashPwd);
        InsertValue.append(age);
        InsertValue.append(sex);
        InsertValue.append(PhoneNumber);
        InsertValue.append(SelfAddress);
        InsertValue.append(signature);

        InsertAtt.insert("InsertColumn",InsertColumn);
        InsertAtt.insert("InsertColumn",InsertColumn);

        QString InsertResult=DataBaseInterface::ServerInsert(InsertAtt);
        if(QString("1") == InsertResult){
        result->insert("Result","注册成功！");
        }
        else{
            result->insert("Result","注册失败，请重试！");
        }
        result->insert("ReturnValue",ReturnValue);
        return *result;
    }
}

QJsonObject& RequestOperate::UploadAvatar(int identity,int UserID,QByteArray& AvatarPic){
    QJsonObject *result = new QJsonObject;
    QJsonObject ReturnValue;
    //需要确保avatarpic大小小于10mb
    //获取图片
    QImage avatar;
    avatar.loadFromData(AvatarPic);
    //获取存储地址
    QString identi;
    identi = identity ? "Doctor":"Patient";
    QString SavePath=QString(TmpPath)+QString(identi+'/'+QString(UserID)+'/');
    if(FileOperate::isDirExist(SavePath)){
        if(!avatar.isNull()){
            avatar.save(SavePath+"Avatar.jpg");
        }
        else{
            result->insert("Result","文件为空，请重新上传！");
        }
    }
    else{
        result->insert("Result","无法找到对应目录");
    }
    result->insert("ReturnValue",ReturnValue);
    return *result;

}

QJsonObject& RequestOperate::RegistrationInfo(QString& Apartment){
    QJsonObject QueryAtt;
    QueryAtt["TableName"] = "DoctorProfiles";

    QJsonArray SelectColumn;
    QJsonArray ConditionColumn;
    QJsonArray ConditionValue;

    SelectColumn.append("DoctorID");
    SelectColumn.append("Name");
    SelectColumn.append("Avatar");
    ConditionColumn.append("Apartment");
    ConditionValue.append(Apartment);

    QueryAtt.insert("SelectColumn",SelectColumn);
    QueryAtt.insert("ConditionColumn",ConditionColumn);
    QueryAtt.insert("ConditionValue",ConditionValue);

    QSqlQuery QueryResult = DataBaseInterface::ServerQuery(QueryAtt);
    QJsonObject *result=new QJsonObject;
    QJsonObject ReturnValue;
    if(!QueryResult.next()){
        result->insert("Result","服务器错误");
    }
    else{
        result->insert("Result","1");
        while(QueryResult.next()){
            QJsonObject DocProfiles;
            DocProfiles.insert("DoctorID",QueryResult.value(0).toLongLong());
        }
    }
}

QJsonObject& RequestOperate::Registration(int PatientID,int DoctorID,int CurTime,int duration){

}

QJsonObject& RequestOperate::QueryMedicalRecord(int PatientID);

QJsonObject& RequestOperate::QueryPrescriptionPay(int PatientID);

QJsonObject& RequestOperate::QueryDoctorInfo(int DoctorID);

QJsonObject& RequestOperate::DPCommunication(int identity,int PatientID);

QJsonObject& RequestOperate::EditProfile(int identity,int UserID,QString& password,
                   int age,QString& sex,int PhoneNumber,QString& selfaddress,
                   QString& signature);

QJsonObject& RequestOperate::QueryRegistration(int DoctorID);

QJsonObject& RequestOperate::EditMedicalRecord(int DoctorID);

QJsonObject& RequestOperate::SendFiles(int SenderID, int ReceiverID, QString& FileName,int CurTime);

QJsonObject& RequestOperate::QueryFiles(int SenderID,int ReceiverID);

QJsonObject& RequestOperate::SendMes(int SenderId,int ReceiverID,int CurTime,QString& message);

QJsonObject& RequestOperate::VoiceToWord(int SenderId,int ReceiverID,int CurTimem,QString& message);

QJsonObject& RequestOperate::LoadDialog(int PatientID,int DoctorID);
