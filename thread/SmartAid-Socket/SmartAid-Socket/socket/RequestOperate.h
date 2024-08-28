#ifndef REQUESTOPERATE_H
#define REQUESTOPERATE_H
#pragma pack(1)

#include "DataBaseInterface.h"
#include "FileOperate.h"

#include <QPixmap>
#include <QDateTime>
#include <QJsonArray>

namespace RequestOperate {
//身份为1表示是医生,接受身份，账号ID和加密密码，返回查询结果
QJsonObject* UserLogin(int identity, qlonglong UserID, QString& RSA);
//身份为1表示是医生,SelfAddress表示家庭住址/所属科室
QJsonObject* UserRegister(int identity,qlonglong UserID,QByteArray& AvatarPic,QString& password,
                    QString& UserName,int age,QString& sex,QString& PhoneNumber,QString& selfaddress,
                    QString& signature);
//从本地选择一张图片(转成二进制流)，然后上传到服务器
QJsonObject* UploadAvatar(int identity, qlonglong UserID, QByteArray& AvatarPic);
//接受科室，对应医生ID
QJsonObject* RegistrationInfo(QString& Apartment);
//接受医生ID，返回当前空闲时间
QVector<int>* QueryDoctorFree(qlonglong DoctorID);
//接受预约ID，患者ID，医生ID，预约时间戳，预约时长，无返回
QJsonObject* Registration(qlonglong PatientID,qlonglong DoctorID,int SendTime,int duration);
//接受身份和账号ID，返回个人信息
QJsonObject* QueryProfiles(int identity, qlonglong UserID);
//接受患者ID，返回患者基本信息，预约时间，就诊科室，医生ID，医生诊断、处方和医嘱
QJsonObject* QueryMedicalRecord(qlonglong PatientID);
//接受患者ID，返回患者历史处方和缴费信息
QJsonObject* QueryPrescriptionPay(qlonglong PatientID);
//接受账号ID，返回患者头像，患者姓名/医生头像，医生姓名，预约时间
QJsonObject* DPCommunication(int identity,qlonglong UserID);
//身份为1表示是医生,selfaddress表示家庭住址/所属科室
QJsonObject* EditProfile(int identity,qlonglong UserID,QString& OldPassword,
                         QString& NewPassword,QByteArray& Avatar, QString& UserName,
                         QString& sex,int age, QString& SelfAddress,QString& PhoneNumber,
                         QString& signature);
//接受医生ID，返回该医生预约队列
QJsonObject* QueryRegistration(qlonglong DoctorID);
//接受预约号，更新数据库，返回结果
QJsonObject* EditMedicalRecord(int AppointmentID, QString& DoctorDiagnosis,
                               QString& Perscription, QString& Orders);
//接受发送者身份，发送者ID，接受者ID和传输文件名，当前时间戳
QJsonObject* SaveFiles(int identity, qlonglong Sender, qlonglong Recipient, int SendTime, QString& FilePath);
//接收文件路径，返回文件二进制流
QByteArray* DownloadFiles(QString& FilePath);
//接受发送者的身份，发送者ID和接受者ID，返回文件名和本地url地址
QJsonObject* QueryHistory(int identity,qlonglong Sender,qlonglong Recipient,int IsFile,int SenfTime = 0,QString FileName=" ");
//接受发送者身份,发送者ID，接受者ID和发送时间，数据库插入聊天信息
QJsonObject* SaveMes(int identity, qlonglong Sender,qlonglong Recipient,int SendTime,QString& Content);
//接受发送者，接受者和发送时间，数据库插入语音信息
QJsonObject* VoiceToWord(int identity, qlonglong Sender,qlonglong Recipient,int SendTime,QByteArray& Content);
/*接受患者ID和医生ID，返回两者头像发送到两者客户端，
 * 两者姓名分别发送到彼此的客户端*/
//QJsonObject* LoadDialog(qlonglong PatientID,qlonglong DoctorID);
}

#pragma pack()
#endif // REQUESTOPERATE_H
