#ifndef FILEOPERATE_H
#define FILEOPERATE_H

#include <QDir>
#include <QBuffer>
#include <QImage>
#include <QCryptographicHash>

namespace FileOperate {
//判断路径是否存在，不存在则创建
bool isDirExist(QString);
//将图片转为二进制流
QByteArray* PicToQByte(QString& PicPath);
QString pwdHash(QString& password);
}


#endif // FILEOPERATE_H
