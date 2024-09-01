#include <QApplication>

#include "RequestOperate.h"
#include "socketServer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int          port = 1234;
    FileServer  *server = new FileServer;
    if (server->listen(QHostAddress::Any, port))
        {
            qDebug() << "服务器启动成功！";
        }
    else
        {
            qDebug() << "端口号" + QString::number(port) + "已被占用";
            return 0;
        }
    return a.exec();
}
