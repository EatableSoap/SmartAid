#include "FileOperate.h"

//判断路径是否存在，不存在则创建
bool FileOperate::isDirExist(QString FullPath){
    QDir dir(FullPath);

    if(dir.exists()){
        return true;
    }
    else{
        bool result = dir.mkpath(FullPath);
        return result;
    }
}

QByteArray* FileOperate::PicToQByte(QString& PicPath){
    QImage Pic;
    Pic.load(PicPath);
    QByteArray *imageArray=new QByteArray;
    QBuffer buffer;
    buffer.open(QIODevice::WriteOnly);
    Pic.save(&buffer,"JPG");
    imageArray->append(buffer.data());
    return imageArray;
}

QString FileOperate::pwdHash(QString& password){
    QByteArray passwd;
    passwd.append(password);
    QByteArray hash = QCryptographicHash::hash(passwd,QCryptographicHash::Sha3_384);
    return hash.toHex();
}

QMap<QString,int>* FileOperate::CommandHeadToInt(){
    QMap<QString,int>* map = new QMap<QString,int>();
    map->insert(QString("A00000"),0);
    map->insert(QString("B00000"),1);
    map->insert(QString("B00001"),2);
    map->insert(QString("C00000"),3);
    map->insert(QString("C00001"),4);
    map->insert(QString("C00010"),5);
    map->insert(QString("C00011"),6);
    map->insert(QString("C00100"),7);
    map->insert(QString("C00101"),8);
    map->insert(QString("C00110"),9);
    map->insert(QString("D00000"),10);
    map->insert(QString("D00001"),11);
    map->insert(QString("E00000"),12);
    map->insert(QString("E00001"),13);
    return map;
}
