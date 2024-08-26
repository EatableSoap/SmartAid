#ifndef REQUESTOPERATE_H
#define REQUESTOPERATE_H
#pragma pack(1)

#include "DataBaseInterface.h"

#include <QtNetwork/QtNetwork>
namespace RequestOperate {
//身份为1表示是医生,接受身份，账号ID和加密密码，返回查询结构
QJsonObject& UserLogin(int identity, int UserID, QString& RSA);
//身份为1表示是医生,selfaddress表示家庭住址/所属科室
QJsonObject& UserRegister(int identity,int UserID,QString& password,
                    int age,QString& sex,int PhoneNumber,QString& selfaddress,
                    QString& signature);
//从本地选择一张图片，然后上传到服务器
QJsonObject& UploadAvatar(int identity, int UserID, QByteArray& AvatarPic);
//接受科室，对应医生ID
QJsonObject& RegistrationInfo(QString& Apartment);
//接受患者ID，医生ID，预约时间戳，预约时长，无返回
QJsonObject& Registration(int PatientID,int DoctorID,int CurTime,int duration);
//接受患者ID，返回患者基本信息，预约时间，就诊科室，医生ID，医生诊断、处方和医嘱
QJsonObject& QueryMedicalRecord(int PatientID);
//接受患者ID，返回患者历史处方和缴费信息
QJsonObject& QueryPrescriptionPay(int PatientID);
//接受医生ID，返回医生信息
QJsonObject& QueryDoctorInfo(int DoctorID);
//接受账号ID，返回患者头像，医生头像，医生姓名，患者姓名
QJsonObject& DPCommunication(int identity,int PatientID);
//身份为1表示是医生,selfaddress表示家庭住址/所属科室
QJsonObject& EditProfile(int identity,int UserID,QString& password,
                   int age,QString& sex,int PhoneNumber,QString& selfaddress,
                   QString& signature);
//接受医生ID，返回该医生预约队列
QJsonObject& QueryRegistration(int DoctorID);
//接受医生ID，返回该医生对应患者历史病历
QJsonObject& EditMedicalRecord(int DoctorID);
//接受发送者ID和接受者ID，传输文件名，当前时间戳
QJsonObject& SendFiles(int SenderID, int ReceiverID, QString& FileName,int CurTime);
//接受发送者ID和接受者ID，返回文件名和本地url地址
QJsonObject& QueryFiles(int SenderID,int ReceiverID);
//接受发送者，接受者ID和发送时间，数据库插入聊天信息
QJsonObject& SendMes(int SenderId,int ReceiverID,int CurTime,QString& message);
//接受发送者，接受者和发送时间，数据库插入语音信息
QJsonObject& VoiceToWord(int SenderId,int ReceiverID,int CurTimem,QString& message);
/*接受患者ID和医生ID，返回两者头像发送到两者客户端，
 * 两者姓名分别发送到彼此的客户端*/
QJsonObject& LoadDialog(int PatientID,int DoctorID);
}

#pragma pack()
#endif // REQUESTOPERATE_H
