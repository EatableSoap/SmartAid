#include "RequestOperate.h"
#include "socketServer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FileServer *server = new FileServer;
    server->listen(QHostAddress::Any,1234);
    return a.exec();
}
