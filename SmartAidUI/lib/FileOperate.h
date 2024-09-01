#ifndef FILEOPERATE_H
#define FILEOPERATE_H

#include <QBuffer>
#include <QCryptographicHash>
#include <QDir>
#include <QImage>
#include <QMap>


namespace FileOperate
{
// 判断路径是否存在，不存在则创建
bool                isDirExist(QString);
// 将图片转为二进制流
QByteArray*         PicToQByte(QString& PicPath);
// 密码转Hash
QString             pwdHash(QString& password);
// 初始化命令头map
QMap<QString, int>* CommandHeadToInt();
}  // namespace FileOperate

#endif  // FILEOPERATE_H
