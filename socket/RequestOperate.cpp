#include "RequestOperate.h"

#define TmpPath "./tmp/"

QJsonObject* RequestOperate::UserLogin(int identity, qlonglong UserID, QString& password){
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
        QString SHA = FileOperate::pwdHash(password);
        //匹配密码
        if(QueryResult.value(0).toString() == SHA)
            result->insert("Result","登录成功！");
        else{
            result->insert("Result","账号或密码错误");
        }
    }
    result->insert("ReturnValue",ReturnValue);
    return result;
}

QJsonObject* RequestOperate::UserRegister(
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
        return result;
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
        return result;
    }
}

QJsonObject* RequestOperate::UploadAvatar(int identity,qlonglong UserID,QByteArray& AvatarPic){
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
                result->insert("Result","上传失败，请重试！");
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
    return result;
}

QJsonObject* RequestOperate::RegistrationInfo(QString& Apartment){
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
    return result;
}

QVector<int>* RequestOperate::QueryDoctorFree(qlonglong DoctorID){
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
    QVector<int> *FreeTime=new QVector<int>;
    for(int i=1;i<10;i++){
        if(QueryResult.value(i).toInt() == 1 )
            FreeTime->append(AllTime[i-1]);
    }
    return FreeTime;
}

QJsonObject* RequestOperate::Registration(int AppointmentID, qlonglong PatientID,qlonglong DoctorID,int CurTime,int duration){
    QJsonObject* result = new QJsonObject;
    QJsonObject ReturnValue;

    //判断时间是否冲突
    //获取原来空闲时间
    QVector<int>* FreeTime = QueryDoctorFree(DoctorID);
    QDateTime dataTime = QDateTime::fromSecsSinceEpoch(CurTime);
    int CurHour = dataTime.time().hour();
    QVector<int> DelTime;
    for(int i=0;i<duration;i++){
        if(!FreeTime->contains(CurHour)){
            result->insert("Result","时间段冲突，请选择空闲时间！");
            result->insert("ReturnValue",ReturnValue);
            return result;
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
    InsertAtt.insert("InsertValue",InsertValue);


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

        assert(UpdateResult=="1");

        //在诊断表中插入预约号
        QJsonObject InsertAtt2;
        InsertAtt2.insert("TableName","DoctorAppointmentInfo");
        QJsonArray InsertColumn2;
        QJsonArray InsertValue2;

        InsertColumn.append("AppointmentID");
        InsertValue.append(AppointmentID);

        InsertAtt2.insert("InsertColumn",InsertColumn2);
        InsertAtt2.insert("InsertValue",InsertValue2);
        QString InsertResult2=DataBaseInterface::ServerInsert(InsertAtt);

        assert(InsertResult2 == "1");
    }
    else{
        result->insert("Result","挂号失败，请重试！");
    }
    result->insert("ReturnValue",ReturnValue);
    return result;
}

QJsonObject* RequestOperate::QueryProfiles(int identity,qlonglong UserID){
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
    return result;
}

QJsonObject* RequestOperate::QueryMedicalRecord(qlonglong PatientID){
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
        QJsonObject *Profiles = QueryProfiles(0,PatientID);
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
                QJsonObject* docProfile = QueryProfiles(1,QueryResult.value(1).toLongLong());
                QJsonObject aReport;
                QJsonObject DocName = docProfile->value("ReturnValue").toObject();
                aReport.insert("AppointmentTime",QueryResult.value(3).toInt());
                aReport.insert("DortorApartment",QueryResult.value(2).toString());
                aReport.insert("DoctorName",DocName["Name"].toString());
                aReport.insert("DoctorDiagnosis",QueryResult2.value(0).toString());
                aReport.insert("Prescription",QueryResult2.value(1).toString());
                aReport.insert("Orders",QueryResult2.value(2).toString());
                Reports.insert(QString(num),aReport);
                num++;
                delete docProfile;
            }
        }while(QueryResult.next());
        result->insert("Result",'1');
        ReturnValue.insert("PatientProfils",*Profiles);
        delete Profiles;
        ReturnValue.insert("ReportNum",num-1);
        ReturnValue.insert("Reports",Reports);
        result->insert("ReturnValue",ReturnValue);
    }
    return result;
}

QJsonObject* RequestOperate::QueryPrescriptionPay(qlonglong PatientID){
    QJsonObject QueryAtt;
    QueryAtt["TableName"] = "AppointmentInfo";

    QJsonArray SelectColumn;
    QJsonArray QueryConditionColumn;
    QJsonArray QueryConditionValue;

    SelectColumn.append("AppointmentID");

    QueryConditionColumn.append("PatientID");
    QueryConditionValue.append(PatientID);

    QueryAtt.insert("SelectColumn",SelectColumn);
    QueryAtt.insert("QueryConditionColumn",QueryConditionColumn);
    QueryAtt.insert("QueryConditionValue",QueryConditionValue);

    QSqlQuery QueryResult = DataBaseInterface::ServerQuery(QueryAtt);
    QJsonObject *result=new QJsonObject;
    QJsonObject ReturnValue;
    if(!QueryResult.next()){
        result->insert("Result","暂无处方！");
        result->insert("ReturnValue",ReturnValue);
    }
    else{
        QJsonObject Reports;
        int num=0;
        do{
            //根据预约号筛选对应诊断、处方、医嘱
            QJsonObject QueryAtt2;
            QueryAtt2["TableName"] = "DoctorAppointmentInfo";

            QJsonArray SelectColumn2;
            QJsonArray QueryConditionColumn2;
            QJsonArray QueryConditionValue2;

            SelectColumn2.append("Prescription");

            QueryConditionColumn2.append("AppointmentID");
            QueryConditionValue2.append(QueryResult.value(0).toLongLong());

            QueryAtt2.insert("SelectColumn",SelectColumn2);
            QueryAtt2.insert("QueryConditionColumn",QueryConditionColumn2);
            QueryAtt2.insert("QueryConditionValue",QueryConditionValue2);

            QSqlQuery QueryResult2 = DataBaseInterface::ServerQuery(QueryAtt2);
            if(!QueryResult2.next()){
                result->insert("Result","服务器错误！");
                result->insert("ReturnValue",ReturnValue);
                return result;
            }
            else{
                //查询成功，将一次的病历插入返回信息中
                QJsonObject aReport;
                aReport.insert("Prescription",QueryResult2.value(0).toString());
                Reports.insert(QString(num),aReport);
                num++;
            }
        }while(QueryResult.next());
        ReturnValue.insert("ReportNum",num-1);
        ReturnValue.insert("Reports",Reports);
        result->insert("Result",'1');
        result->insert("ReturnValue",ReturnValue);

    }
    return result;
}

QJsonObject* RequestOperate::DPCommunication(int identity,qlonglong UserID){
    QJsonObject QueryAtt;
    QString identi = identity?"Doctor":"patient";
    QueryAtt["TableName"] = "AppointmentInfo";

    QJsonArray SelectColumn;
    QJsonArray QueryConditionColumn;
    QJsonArray QueryConditionValue;

    SelectColumn.append("PatientID");
    SelectColumn.append("DoctorID");
    SelectColumn.append("AppointmentTime");

    QueryConditionColumn.append(identity?"DoctorID":"PatientID");
    QueryConditionValue.append(UserID);

    QueryAtt.insert("SelectColumn",SelectColumn);
    QueryAtt.insert("QueryConditionColumn",QueryConditionColumn);
    QueryAtt.insert("QueryConditionValue",QueryConditionValue);

    QSqlQuery QueryResult = DataBaseInterface::ServerQuery(QueryAtt);
    QJsonObject *result=new QJsonObject;
    QJsonObject ReturnValue;
    if(!QueryResult.next()){
        result->insert("Result","暂无预约！");
        result->insert("ReturnValue",ReturnValue);
    }
    else{
        result->insert("Result","加载成功，欢迎进入医患交流平台！");
        //若有历史记录或未完成订单则借此筛选用户
        QJsonObject Users;
        int num=0;
        do {
            QJsonObject aUser;
            //获取历史记录的姓名和头像
            QJsonObject* user=QueryProfiles(!identity,QueryResult.value(!identity).toLongLong());
            QString Name = user->value("ReturnValue").toObject().value("Name").toString();
            QString Avatar = user->value("ReturnValue").toObject().value("Avatar").toString();
            //获取缓存图片地址
            aUser.insert("Name",Name);
            aUser.insert("Avatar",Avatar);
            delete user;
            Users.insert(QString::number(num),aUser);
            num++;
        } while (QueryResult.next());
        ReturnValue.insert("UserNum",num-1);
        ReturnValue.insert("AllUsers",Users);
    }
    return result;
}

QJsonObject* RequestOperate::EditProfile(int identity,qlonglong UserID,QString& OldPassword,
                                         QString& NewPassword,QByteArray& Avatar,QString& sex,
                                         int age,QString& SelfAddress,QString& PhoneNumber,
                                         QString& signature){
    QString identi = identity? "Doctor":"Patient";
    bool isRight = false;

    QJsonObject *result=new QJsonObject;
    QJsonObject ReturnValue;

    QJsonObject UpdateAtt;
    QJsonArray UpdateColumn;
    QJsonArray UpdateValue;
    QJsonArray UpdateConditionColumn;
    QJsonArray UpdateConditionValue;

    if(NewPassword.size()&&OldPassword.size()){
        QJsonObject* pwd = UserLogin(identity,UserID,OldPassword);
        isRight = pwd->value("Result") == "登录成功！";
        if(isRight){
            UpdateAtt.insert("TableName",identi+"LoginInfo");

            UpdateConditionColumn.append(identi+"ID");
            UpdateConditionValue.append(UserID);

            //获取新密码的Hash QString
            UpdateColumn.append("Password");
            UpdateValue.append(FileOperate::pwdHash(NewPassword));

            UpdateAtt.insert("UpdateColumn",UpdateColumn);
            UpdateAtt.insert("UpdateValue",UpdateValue);
            UpdateAtt.insert("UpdateConditionColumn",UpdateConditionColumn);
            UpdateAtt.insert("UpdateConditionValue",UpdateConditionValue);

            QString UpdateResult=DataBaseInterface::ServerUpdate(UpdateAtt);
            if(UpdateResult != '1'){
                result->insert("Result","更新失败，请重试！");
                result->insert("ResultValue",ReturnValue);
                return result;
            }
            //清空旧查询包
            UpdateAtt.remove("TableName");
            UpdateAtt.remove("UpdateColumn");
            UpdateAtt.remove("UpdateValue");
            UpdateAtt.remove("UpdateConditionColumn");
            UpdateAtt.remove("UpdateConditionValue");
            UpdateColumn.removeAt(0);
            UpdateValue.removeAt(0);
            UpdateConditionColumn.removeAt(0);
            UpdateConditionValue.removeAt(0);
        }
        else{
            result->insert("Result","旧密码错误，请重试！");
            result->insert("ResultValue",ReturnValue);
            return result;
        }
    }
    // TODO 这里直接更新全部字段
    UpdateAtt.insert("TableName",identi+"Profiles");

    UpdateConditionColumn.append(identi+"ID");
    UpdateConditionValue.append(UserID);

    //判断那些字段需要更新
    if(Avatar.size()){
        UploadAvatar(identity,UserID,Avatar);
    }

    if(sex != "-1"){
        UpdateColumn.append("Sex");
        UpdateValue.append(sex);
    }
    if(age != -1){
        UpdateColumn.append("Age");
        UpdateValue.append(age);
    }
    if(SelfAddress != "-1"){
        UpdateColumn.append("SelfAdress");
        UpdateValue.append(SelfAddress);
    }
    if(PhoneNumber != "-1"){
        UpdateColumn.append("PhoneNumber");
        UpdateValue.append(PhoneNumber);
    }
    if(signature.size()){
        UpdateColumn.append("Signature");
        UpdateValue.append(signature);
    }

    UpdateAtt.insert("UpdateColumn",UpdateColumn);
    UpdateAtt.insert("UpdateValue",UpdateValue);
    UpdateAtt.insert("UpdateConditionColumn",UpdateConditionColumn);
    UpdateAtt.insert("UpdateConditionValue",UpdateConditionValue);

    //执行查询
    QString UpdateResult=DataBaseInterface::ServerUpdate(UpdateAtt);
    if(UpdateResult != "1"){
        result->insert("Result","更新失败，请重试！");
        result->insert("ResultValue",ReturnValue);
    }
    else{
        result->insert("Result","更新信息成功！");
        result->insert("ReturnValue",ReturnValue);
    }
    return result;
}
QJsonObject* RequestOperate::QueryRegistration(qlonglong DoctorID){
    QJsonObject QueryAtt;
    QueryAtt["TableName"] = "AppointmentInfo";

    QJsonArray SelectColumn;
    QJsonArray QueryConditionColumn;
    QJsonArray QueryConditionValue;

    SelectColumn.append("AppointmentID");
    SelectColumn.append("PatientID");
    SelectColumn.append("AppointmentTime");

    QueryConditionColumn.append("DoctorID");
    QueryConditionValue.append(DoctorID);
    QueryConditionColumn.append("Completion");
    QueryConditionValue.append("未完成");

    QueryAtt.insert("SelectColumn",SelectColumn);
    QueryAtt.insert("QueryConditionColumn",QueryConditionColumn);
    QueryAtt.insert("QueryConditionValue",QueryConditionValue);

    //结果按时间排序，没有则按ID排序
    QSqlQuery QueryResult = DataBaseInterface::ServerQuery(QueryAtt);
    QJsonObject *result=new QJsonObject;
    QJsonObject ReturnValue;
    if(!QueryResult.next()){
        result->insert("Result","查询失败，请重试！");
        result->insert("ReturnValue",ReturnValue);
        return result;
    }
    else{
        result->insert("Result","1");
        QJsonObject Regs;
        int num=0;
        do {
            QJsonObject aReg;
            QJsonObject* aPatient = QueryProfiles(0,QueryResult.value("PatientID").toLongLong());
            QString Name = aPatient->value("ReturnValue").toObject().value("Name").toString();
            aReg.insert("AppointmentID",QueryResult.value("AppointmentID").toInt());
            aReg.insert("Name",Name);
            QDateTime AppointmentTime;
            AppointmentTime.fromSecsSinceEpoch(QueryResult.value("AppointmentTime").toInt());
            aReg.insert("Appointment",AppointmentTime.toString());
            Regs.insert(QString::number(num),aReg);
            num++;
            delete aPatient;
        } while (QueryResult.next());
        ReturnValue.insert("RegNum",num-1);
        ReturnValue.insert("Regs",Regs);
        result->insert("ReturnValue",ReturnValue);
        return result;
    }
}

QJsonObject* RequestOperate::EditMedicalRecord(int AppointmentID, QString& DoctorDiagnosis,
                                               QString& Perscription, QString& Orders){
    QJsonObject UpdateAtt;
    UpdateAtt.insert("TableName","DoctorAppointmentInfo");
    QJsonArray UpdateColumn;
    QJsonArray UpdateValue;
    QJsonArray UpdateConditionColumn;
    QJsonArray UpdateConditionValue;

    UpdateConditionColumn.append("AppointmentInfo");
    UpdateConditionValue.append(AppointmentID);

    //更新时间的队列
    UpdateColumn.append("DoctorDiagnosis");
    UpdateValue.append(DoctorDiagnosis);
    UpdateColumn.append("Perscription");
    UpdateValue.append(Perscription);
    UpdateColumn.append("Orders");
    UpdateValue.append(Orders);

    UpdateAtt.insert("UpdateColumn",UpdateColumn);
    UpdateAtt.insert("UpdateValue",UpdateValue);
    UpdateAtt.insert("UpdateConditionColumn",UpdateConditionColumn);
    UpdateAtt.insert("UpdateConditionValue",UpdateConditionValue);

    QString UpdateResult=DataBaseInterface::ServerUpdate(UpdateAtt);
    QJsonObject *result = new QJsonObject;
    QJsonObject ReturnValue;

    if(UpdateResult == "1")
        result->insert("Result","更新成功！");
    else
        result->insert("Result","更新失败，请重试！");
    result->insert("ReturnValue",ReturnValue);
    return result;
}

QJsonObject* RequestOperate::SendFiles(int SenderID, int ReceiverID, QString& FileName,int CurTime){

}

QJsonObject* RequestOperate::QueryFiles(int SenderID,int ReceiverID);

QJsonObject* RequestOperate::SendMes(int SenderId,int ReceiverID,int CurTime,QString& message);

QJsonObject* RequestOperate::VoiceToWord(int SenderId,int ReceiverID,int CurTimem,QString& message);

//QJsonObject* RequestOperate::LoadDialog(qlonglong PatientID,qlonglong DoctorID);
