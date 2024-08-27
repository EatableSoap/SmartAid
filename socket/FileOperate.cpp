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

QString pwdHash(QString& password){
    QByteArray passwd;
    passwd.append(password);
    QByteArray hash = QCryptographicHash::hash(passwd,QCryptographicHash::Sha3_384);
    QString SHA = hash.toHex();
}
