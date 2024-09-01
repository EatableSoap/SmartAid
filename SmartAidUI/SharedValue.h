#ifndef SHAREDVALUE_H
#define SHAREDVALUE_H

#include <QtNetwork>

class SharedValue
{
   public:
    QTcpSocket* sharedsocket = new QTcpSocket;
    int         identity = 0;
    QString     SavePath = "./tmp/";
    QString     DataBasePath = "./tmp/DataBase/";
    SharedValue(QTcpSocket* socket, int iden, QString SavePath, QString DBPath);
    SharedValue();
    ~SharedValue();
};

#endif  // SHAREDVALUE_H
