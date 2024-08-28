#ifndef SERVER_H
#define SERVER_H

#include "RequestOperate.h"

#include <QtNetwork/QtNetwork>
#include <QDialog>

namespace Ui {
class Server;
}

class Server : public QDialog
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = nullptr);
    //分析收到的数据包
    QJsonObject* AnalyzeCommand(QJsonObject& CommandPack,QByteArray FileByte=QByteArray());
    ~Server();
    void StartServer();

private:
    Ui::Server *ui;
};

#endif // SERVER_H
