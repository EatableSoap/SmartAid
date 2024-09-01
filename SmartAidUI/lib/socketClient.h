#ifndef SOCKETCLIENT_H
#define SOCKETCLIENT_H

#include <QDebug>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>

#include "RequestOperate.h"
#include "SharedValue.h"


class socketClient : public QObject
{
    Q_OBJECT

   public:
    SharedValue* shareValue;
    QJsonObject  RecvJson;
    socketClient(const QString& serverAddress, int serverPort);
    socketClient();
    ~socketClient();

    void sendCommand(const QJsonObject& command,
                     const QByteArray&  fileData = QByteArray(),
                     const QString&     FileName = "");
    void downloadFile(const QString& filePath);
    void tryconnect();

   public slots:
    void onConnected();
    void onReadyRead();

   private:
    QString    serverAddress;
    int        serverPort;
    QByteArray qbuff;
};

#endif  // SOCKETCLIENT_H
