#ifndef SOCKETSERVER_H
#define SOCKETSERVER_H

#include <QByteArray>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMap>
#include <QVector>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QtNetwork>

#include "RequestOperate.h"


class FileServer : public QTcpServer
{
    Q_OBJECT

   public:
    explicit FileServer(QObject *parent = nullptr);

   private slots:
    void onNewConnection();
    void processCommand(QTcpSocket *clientSocket);
    void sendFile(QTcpSocket    *clientSocket,
                  QJsonObject   *commandPack,
                  const QString &FilePath = "FilePath");
    void sendResponse(QTcpSocket *clientSocket, QJsonObject *commandPack);
    void receiveFileData(QTcpSocket *clientSocket);
    //    void incomingConnection(qintptr socketDescriptor);

   private:
    int                           fileState = 0;
    int                           recvSize = 0;
    QByteArray                    qbuff;
    QString                       filename;
    int                           fileSize = 0;
    QJsonObject                  *commandPack;
    QVector<int>                  HasFile = {1, 2, 5, 9, 12, 13, 99};
    QMap<QString, int>           *HeadToInt;
    QMap<qlonglong, QTcpSocket *> userList;
    QJsonObject                   AnalyzeCommand(QJsonObject &CommandPack,
                                                 QByteArray   FileByte = "");
};
#endif  // SOCKETSERVER_H
