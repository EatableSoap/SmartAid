#ifndef SOCKETSERVER_H
#define SOCKETSERVER_H

#include "RequestOperate.h"

#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QTcpServer>
#include <QJsonObject>
#include <QtNetwork/QtNetwork>
#include <QJsonDocument>
#include <QVector>
#include <QMap>
#include <QByteArray>
#include <QFile>

class FileServer : public QTcpServer {
    Q_OBJECT

public:
    explicit FileServer(QObject *parent = nullptr);

private slots:
    void onNewConnection();
    void handleClientRequest(QTcpSocket *clientSocket);
    void processCommand(QTcpSocket *clientSocket);
    void sendFile(QTcpSocket *clientSocket, QJsonObject *commandPack, const QString& FilePath = "FilePath");
    void sendResponse(QTcpSocket *clientSocket, QJsonObject *commandPack);
    void readFileHeader(QTcpSocket *clientSocket);
    void receiveFileData(QTcpSocket *clientSocket);
    //    void incomingConnection(qintptr socketDescriptor);

private:
    int fileState;
    int recvSize;
    QByteArray qbuff;
    QString filename;
    int fileSize;
    QJsonObject *commandPack;
    QVector<int> HasFile = {1,2,5,9,12,13,99};
    QMap<QString,int>* HeadToInt;
    QMap<qlonglong,QTcpSocket*> userList;
    QJsonObject AnalyzeCommand(QJsonObject& CommandPack, QByteArray FileByte = "");
};
#endif // SOCKETSERVER_H
