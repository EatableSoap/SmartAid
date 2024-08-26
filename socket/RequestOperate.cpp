#include "RequestOperate.h"
#include "FileOperate.h"

#include <QCryptographicHash>
#include <QPixmap>
#include <QDateTime>

#define TmpPath "./tmp/"

QJsonObject& RequestOperate::UserLogin(int identity, qlonglong UserID, QString& password){
    QJsonObject QueryAtt;
    QString ident = identity ? "DoctorLoginInfo":"PatientLoginInfo";
    QueryAtt["TableName"]=ident;

    QJsonArray SelectColumn;
    QJsonArray QueryConditionColumn;
    QJsonArray QueryConditionValue;

    SelectColumn.append("Password");
    QueryConditionColumn.append(identity? "DoctorID":"PatientID");
    QueryConditionValue.append(UserID);

    QueryAtt.insert("SelectColumn",SelectColumn);
    QueryAtt.insert("QueryConditionColumn",QueryConditionColumn);
    QueryAtt.insert("QueryConditionValue",QueryConditionValue);

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
        int identity,qlonglong UserID,QString& password,QString& UserName,
        int age,QString& sex,QString& PhoneNumber,QString& SelfAddress,
        QString& signature){
    //查询账号ID是否存在，存在则报错，反之则插入数据库
    QJsonObject QueryAtt;
    QString ident = identity ? "DoctorLoginInfo":"PatientLoginInfo";
    QueryAtt["TableName"]=ident;

    QJsonArray SelectColumn;
    QJsonArray QueryConditionColumn;
    QJsonArray QueryConditionValue;

    SelectColumn.append(identity? "DoctorID":"PatientID");
    QueryConditionColumn.append(identity? "DoctorID":"PatientID");
    QueryConditionValue.append(UserID);

    QueryAtt.insert("SelectColumn",SelectColumn);
    QueryAtt.insert("QueryConditionColumn",QueryConditionColumn);
    QueryAtt.insert("QueryConditionValue",QueryConditionValue);

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

        InsertColumn.append(identity? "DoctorID":"PatientID");
        InsertColumn.append("Password");

        InsertValue.append(UserID);
        InsertValue.append(HashPwd);

        InsertAtt.insert("InsertColumn",InsertColumn);
        InsertAtt.insert("InsertValue",InsertValue);

        QString InsertResult=DataBaseInterface::ServerInsert(InsertAtt);
        if(QString("1") == InsertResult){
            result->insert("Result","注册成功！");
            InsertColumn.removeAt(1);
            InsertColumn.append("Name");
            InsertColumn.append("Age");
            InsertColumn.append("Sex");
            InsertColumn.append("PhoneNumber");
            InsertColumn.append("SelfAddress");
            InsertColumn.append("Signature");

            InsertValue.removeAt(1);
            InsertValue.append(UserName);
            InsertValue.append(age);
            InsertValue.append(sex);
            InsertValue.append(PhoneNumber);
            InsertValue.append(SelfAddress);
            InsertValue.append(signature);
            QString InsertResult=DataBaseInterface::ServerInsert(InsertAtt);
            assert(InsertResult == '1');
        }
        else{
            result->insert("Result","注册失败，请重试！");
        }
        result->insert("ReturnValue",ReturnValue);
        return *result;
    }
}

QJsonObject& RequestOperate::UploadAvatar(int identity,qlonglong UserID,QByteArray& AvatarPic){
    QJsonObject *result = new QJsonObject;
    QJsonObject ReturnValue;
    //需要确保avatarpic大小小于10mb
    //获取图片
    QImage avatar;
    avatar.loadFromData(AvatarPic);
    //获取存储地址
    QString identi;
    identi = identity ? "Doctor":"Patient";
    QString SavePath=QString(TmpPath)+QString(identi+'/'+QString::number(UserID)+'/');
    if(FileOperate::isDirExist(SavePath)){
        if(!avatar.isNull()){
            avatar.save(SavePath+"Avatar.jpg");
            QJsonObject UpdateAtt;
            UpdateAtt.insert("TableName",identi+"Profiles");
            QJsonArray UpdateColumn;
            QJsonArray UpdateValue;
            QJsonArray UpdateConditionColumn;
            QJsonArray UpdateConditionValue;

            UpdateConditionColumn.append(identi+"ID");
            UpdateConditionValue.append(UserID);

            UpdateColumn.append("Avatar");
            UpdateValue.append(SavePath+"Avatar.jpg");

            UpdateAtt.insert("UpdateColumn",UpdateColumn);
            UpdateAtt.insert("UpdateValue",UpdateValue);
            UpdateAtt.insert("UpdateConditionColumn",UpdateConditionColumn);
            UpdateAtt.insert("UpdateConditionValue",UpdateConditionValue);

            QString UpdateResult=DataBaseInterface::ServerUpdate(UpdateAtt);
            if(UpdateResult == '1'){
                result->insert("Result","上传成功！");
            }
            else{
                result->insert("Result","上传成功失败，请重试！");
            }
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
    QJsonArray QueryConditionColumn;
    QJsonArray QueryConditionValue;

    SelectColumn.append("DoctorID");
    SelectColumn.append("Avatar");
    SelectColumn.append("Name");
    QueryConditionColumn.append("Apartment");
    QueryConditionValue.append(Apartment);

    QueryAtt.insert("SelectColumn",SelectColumn);
    QueryAtt.insert("QueryConditionColumn",QueryConditionColumn);
    QueryAtt.insert("QueryConditionValue",QueryConditionValue);

    QSqlQuery QueryResult = DataBaseInterface::ServerQuery(QueryAtt);
    QJsonObject *result=new QJsonObject;
    QJsonObject ReturnValue;
    if(!QueryResult.next()){
        result->insert("Result","服务器错误");
    }
    else{
        result->insert("Result","1");
        QJsonArray ReturnValueArr;
        do{
            QJsonObject DocProfiles;
            DocProfiles.insert("DoctorID",QueryResult.value(0).toLongLong());
            DocProfiles.insert("Avatar",QueryResult.value(1).toString());
            DocProfiles.insert("Name",QueryResult.value(2).toString());
            ReturnValueArr.append(DocProfiles);
        }while(QueryResult.next());
        ReturnValue.insert("DocInfoPreview",ReturnValueArr);
    }
    result->insert("ReturnValue",ReturnValue);
    return *result;
}

QVector<int> QueryDoctorFree(qlonglong DoctorID){
    QJsonObject QueryAtt;
    QueryAtt["TableName"]="DoctorFreeTime";

    QJsonArray SelectColumn;
    QJsonArray QueryConditionColumn;
    QJsonArray QueryConditionValue;

    QueryConditionColumn.append("DoctorID");
    QueryConditionValue.append(DoctorID);

    QueryAtt.insert("SelectColumn",SelectColumn);
    QueryAtt.insert("QueryConditionColumn",QueryConditionColumn);
    QueryAtt.insert("QueryConditionValue",QueryConditionValue);

    QSqlQuery QueryResult = DataBaseInterface::ServerQuery(QueryAtt);
    QueryResult.next();
    QVector<int> AllTime = {8,9,10,14,15,16,19,20,21};
    QVector<int> FreeTime;
    for(int i=1;i<10;i++){
        if(QueryResult.value(i).toInt() == 1 )
            FreeTime.append(AllTime[i-1]);
    }
    return FreeTime;
}

QJsonObject& RequestOperate::Registration(int AppointmentID, qlonglong PatientID,qlonglong DoctorID,int CurTime,int duration){
    QJsonObject* result = new QJsonObject;
    QJsonObject ReturnValue;

    //判断时间是否冲突
    //获取原来空闲时间
    QVector<int> FreeTime = QueryDoctorFree(DoctorID);
    QDateTime dataTime = QDateTime::fromSecsSinceEpoch(CurTime);
    int CurHour = dataTime.time().hour();
    QVector<int> DelTime;
    for(int i=0;i<duration;i++){
        if(!FreeTime.contains(CurHour)){
            result->insert("Result","时间段冲突，请选择空闲时间！");
            result->insert("ReturnValue",ReturnValue);
            return *result;
        }
        else{
            DelTime.append(CurHour);
            CurHour++;
        }
    }

    //打包插入数据
    QJsonObject InsertAtt;
    InsertAtt.insert("TableName","AppointmentInfo");
    QJsonArray InsertColumn;
    QJsonArray InsertValue;

    InsertColumn.append("AppointmentID");
    InsertColumn.append("PatientID");
    InsertColumn.append("DoctorID");
    InsertColumn.append("AppointmentTime");
    InsertColumn.append("Duration");
    InsertColumn.append("Completion");

    InsertValue.append(AppointmentID);
    InsertValue.append(PatientID);
    InsertValue.append(DoctorID);
    InsertValue.append(CurTime);
    InsertValue.append(duration);
    InsertValue.append("未完成");

    InsertAtt.insert("InsertColumn",InsertColumn);
    InsertAtt.insert("InsertColumn",InsertColumn);


    QString InsertResult=DataBaseInterface::ServerInsert(InsertAtt);
    if(QString("1") == InsertResult){
        result->insert("Result","挂号成功！");
        //更新医生空闲时间
        QJsonObject UpdateAtt;
        UpdateAtt.insert("TableName","DoctorFreeTime");
        QJsonArray UpdateColumn;
        QJsonArray UpdateValue;
        QJsonArray UpdateConditionColumn;
        QJsonArray UpdateConditionValue;

        UpdateConditionColumn.append("DoctorID");
        UpdateConditionValue.append(DoctorID);

        //更新时间的队列
        for(int num:DelTime){
            UpdateColumn.append('T'+QString(num));
            UpdateValue.append(0);
        }

        UpdateAtt.insert("UpdateColumn",UpdateColumn);
        UpdateAtt.insert("UpdateValue",UpdateValue);
        UpdateAtt.insert("UpdateConditionColumn",UpdateConditionColumn);
        UpdateAtt.insert("UpdateConditionValue",UpdateConditionValue);

        QString UpdateResult=DataBaseInterface::ServerUpdate(UpdateAtt);
        assert(UpdateResult=='1');
    }
    else{
        result->insert("Result","挂号失败，请重试！");
    }
    result->insert("ReturnValue",ReturnValue);
    return *result;
}

QJsonObject& RequestOperate::QueryProfiles(int identity,qlonglong UserID){
    QJsonObject QueryAtt;
    QueryAtt["TableName"] = identity?"DoctorProfiles":"PatientProfiles";

    QJsonArray SelectColumn;
    QJsonArray QueryConditionColumn;
    QJsonArray QueryConditionValue;

    QueryConditionColumn.append(identity? "DoctorID":"PatientID");
    QueryConditionValue.append(UserID);

    QueryAtt.insert("SelectColumn",SelectColumn);
    QueryAtt.insert("QueryConditionColumn",QueryConditionColumn);
    QueryAtt.insert("QueryConditionValue",QueryConditionValue);

    QSqlQuery QueryResult = DataBaseInterface::ServerQuery(QueryAtt);
    QJsonObject *result=new QJsonObject;
    QJsonObject ReturnValue;

    if(!QueryResult.next()){
        result->insert("Result","服务器错误！");
        result->insert("ReturnValue",ReturnValue);
    }
    else {
        result->insert("Result","1");
        do {
            ReturnValue.insert("UserID",QueryResult.value(0).toLongLong());
            ReturnValue.insert("Avatar",QueryResult.value(1).toString());
            ReturnValue.insert("Name",QueryResult.value(2).toString());
            ReturnValue.insert("Sex",QueryResult.value(3).toInt());
            ReturnValue.insert("Age",QueryResult.value(4).toString());
            ReturnValue.insert("SelfAddress",QueryResult.value(5).toString());
            ReturnValue.insert("PhoneNumber",QueryResult.value(6).toString());
            ReturnValue.insert("Signature",QueryResult.value(7).toString());
        } while (QueryResult.next());
    }
    result->insert("ReturnValue",ReturnValue);
    return *result;
}

QJsonObject& RequestOperate::QueryMedicalRecord(qlonglong PatientID){
    QJsonObject QueryAtt;
    QueryAtt["TableName"] = "AppointmentInfo";

    QJsonArray SelectColumn;
    QJsonArray QueryConditionColumn;
    QJsonArray QueryConditionValue;

    SelectColumn.append("AppointmentID");
    SelectColumn.append("DoctorID");
    SelectColumn.append("DoctorApartment");
    SelectColumn.append("AppointmentTime");

    QueryConditionColumn.append("PatientID");
    QueryConditionValue.append(PatientID);

    QueryAtt.insert("SelectColumn",SelectColumn);
    QueryAtt.insert("QueryConditionColumn",QueryConditionColumn);
    QueryAtt.insert("QueryConditionValue",QueryConditionValue);

    QSqlQuery QueryResult = DataBaseInterface::ServerQuery(QueryAtt);
    QJsonObject *result=new QJsonObject;
    QJsonObject ReturnValue;
    if(!QueryResult.next()){
        result->insert("Result","暂无病历！");
        result->insert("ReturnValue",ReturnValue);
    }
    else{
        QJsonObject Profiles = QueryProfiles(0,PatientID);
        QJsonObject Reports;
        int num=0;
        do{
        //根据预约号筛选对应诊断、处方、医嘱
        QJsonObject QueryAtt2;
        QueryAtt2["TableName"] = "DoctorAppointmentInfo";

        QJsonArray SelectColumn2;
        QJsonArray QueryConditionColumn2;
        QJsonArray QueryConditionValue2;

        SelectColumn2.append("DoctorDiagnosis");
        SelectColumn2.append("Prescription");
        SelectColumn2.append("Orders");

        QueryConditionColumn2.append("AppointmentID");
        QueryConditionValue2.append(QueryResult.value(0).toInt());

        QueryAtt2.insert("SelectColumn",SelectColumn2);
        QueryAtt2.insert("QueryConditionColumn",QueryConditionColumn2);
        QueryAtt2.insert("QueryConditionValue",QueryConditionValue2);

        QSqlQuery QueryResult2 = DataBaseInterface::ServerQuery(QueryAtt2);
        if(!QueryResult2.next()){
            result->insert("Result","服务器错误！");
            result->insert("ReturnValue",ReturnValue);
        }
        else{
            //查询成功，将一次的病历插入返回信息中
            QJsonObject docProfile = QueryProfiles(1,QueryResult.value(1).toLongLong());
            QJsonObject aReport;
            QJsonObject DocName = docProfile["ReturnValue"].toObject();
            aReport.insert("AppointmentTime",QueryResult.value(3).toInt());
            aReport.insert("DortorApartment",QueryResult.value(2).toString());
            aReport.insert("DoctorName",DocName["Name"].toString());
            aReport.insert("DoctorDiagnosis",QueryResult2.value(0).toString());
            aReport.insert("Prescription",QueryResult2.value(1).toString());
            aReport.insert("Orders",QueryResult2.value(2).toString());
            Reports.insert(QString(num),aReport);
            num++;
        }
        }while(QueryResult.next());
        ReturnValue.insert("ReportNum",num-1);
        ReturnValue.insert("Reports",Reports);
        result->insert("ReturnValue",ReturnValue);
        result->insert("Result",'1');
    }
    return *result;
}

QJsonObject& RequestOperate::QueryPrescriptionPay(qlonglong PatientID){

}

QJsonObject& RequestOperate::DPCommunication(int identity,qlonglong PatientID);

QJsonObject& RequestOperate::EditProfile(int identity,qlonglong UserID,QString& password,
                                         int age,QString& sex,QString& PhoneNumber,QString& selfaddress,
                                         QString& signature);

QJsonObject& RequestOperate::QueryRegistration(qlonglong DoctorID);

QJsonObject& RequestOperate::EditMedicalRecord(qlonglong DoctorID);

QJsonObject& RequestOperate::SendFiles(int SenderID, int ReceiverID, QString& FileName,int CurTime);

QJsonObject& RequestOperate::QueryFiles(int SenderID,int ReceiverID);

QJsonObject& RequestOperate::SendMes(int SenderId,int ReceiverID,int CurTime,QString& message);

QJsonObject& RequestOperate::VoiceToWord(int SenderId,int ReceiverID,int CurTimem,QString& message);

QJsonObject& RequestOperate::LoadDialog(qlonglong PatientID,qlonglong DoctorID);
