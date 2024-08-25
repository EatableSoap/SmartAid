#include "RequestOperate.h"

QJsonObject& RequestOperate::UserLogin(int UserID, uchar* RSA){

}

QJsonObject& UserRegister(int identity,int UserID,uchar* password,
                    int age,uchar* sex,int PhoneNumber,uchar* selfaddress,
                    uchar* signature);

QJsonObject& UploadAvatar();

QJsonObject& RegistrationInfo();

QJsonObject& Registration(int PatientID,int DoctorID,int CurTime,int duration);

QJsonObject& QueryMedicalRecord(int PatientID);

QJsonObject& QueryPrescriptionPay(int PatientID);

QJsonObject& QueryDoctorInfo(int DoctorID);

QJsonObject& DPCommunication(int identity,int PatientID);

QJsonObject& EditProfile(int identity,int UserID,uchar* password,
                   int age,uchar* sex,int PhoneNumber,uchar* selfaddress,
                   uchar* signature);

QJsonObject& QueryRegistration(int DoctorID);

QJsonObject& EditMedicalRecord(int DoctorID);

QJsonObject& SendFiles(int SenderID, int ReceiverID, uchar* FileName,int CurTime);

QJsonObject& QueryFiles(int SenderID,int ReceiverID);

QJsonObject& SendMes(int SenderId,int ReceiverID,int CurTime,uchar* message);

QJsonObject& VoiceToWord(int SenderId,int ReceiverID,int CurTimem,uchar* message);

QJsonObject& LoadDialog(int PatientID,int DoctorID);

