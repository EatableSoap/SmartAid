#include "socketClient.h"

class Client : public QObject {
    Q_OBJECT

public:
    Client(const QString& serverAddress, quint16 serverPort, QObject* parent = nullptr)
        : QObject(parent), socket(new QTcpSocket(this)), serverAddress(serverAddress), serverPort(serverPort) {
        connect(socket, &QTcpSocket::connected, this, &Client::onConnected);
        connect(socket, &QTcpSocket::readyRead, this, &Client::onReadyRead);
        socket->connectToHost(serverAddress, serverPort);
    }

    void sendCommand(const QJsonObject& command, const QByteArray& fileData = QByteArray(),const QString& FileName = "") {
        QByteArray commandByteArray = QJsonDocument(command).toJson();
        socket->write(commandByteArray);
        socket->waitForBytesWritten();
        if (!fileData.isEmpty()) {
            socket->write(QString("%1&%2").arg(FileName).arg(fileData.size()).toUtf8());
            socket->waitForBytesWritten();
            socket->write(fileData);
            socket->waitForBytesWritten();
        }
    }

    void downloadFile(const QString& filePath) {
        QJsonObject command;
        command["CMD"] = "Down";
        command["Args"] = QJsonObject{{"FilePath", filePath}};
        sendCommand(command);
    }

private slots:
    void onConnected() {
        qDebug() << "Connected to server.";
    }

    void onReadyRead() {
        QByteArray data = socket->readAll();
        if (data.contains('&')) {
            // Handling file info header
            QStringList fileInfo = QString(data).split("&");
            QString fileName = fileInfo[0];
            int fileSize = fileInfo[1].toInt();

            QFile file(fileName);
            if (file.open(QIODevice::WriteOnly)) {
                int receivedSize = 0;
                while (receivedSize < fileSize) {
                    data = socket->read(fileSize - receivedSize);
                    file.write(data);
                    receivedSize += data.size();
                }
                file.close();
                qDebug() << "File received and saved as" << fileName;
            }
        } else {
            // Handle JSON response
            QJsonDocument jsonDoc = QJsonDocument::fromJson(data);
            QJsonObject jsonObj = jsonDoc.object();
            qDebug() << "Received response:" << jsonObj;
        }
    }

    void onError(QTcpSocket::SocketError socketError) {
        qDebug() << "Socket error:" << socketError;
    }

private:
    QTcpSocket* socket;
    QString serverAddress;
    quint16 serverPort;
};
