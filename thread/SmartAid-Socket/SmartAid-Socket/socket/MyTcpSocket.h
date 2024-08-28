#ifndef MYTCPSOCKET_H
#define MYTCPSOCKET_H

#include <QObject.h>

#include <QTcpSocket>

class MyTcpSocket : public QTcpSocket
{
	Q_OBJECT
   public:
	explicit MyTcpSocket(qintptr socketDescriptor, QObject *parent = 0);

   signals:
	void readData(const int,
				  const QString &,
				  const quint16,
				  const QByteArray &);	// 发送获得用户发过来的数据
	void sockDisConnect(const int,
						const QString &,
						const quint16);	 // 断开连接的用户信息
   public slots:
	void thisReadData();						   // 处理接收到的数据
	void sentData(const QByteArray &, const int);  // 发送信号的槽
   private:
	qintptr socketID;  // 保存id
};

MyTcpSocket::MyTcpSocket(qintptr socketDescriptor, QObject *parent)
	: QTcpSocket(parent), socketID(socketDescriptor)
{
	this->setSocketDescriptor(socketDescriptor);  // 转换系统信号
	connect(this,
			&myTcpSocket::readyRead,
			this,
			&myTcpSocket::thisReadData);  // 连接到收到数据的处理函数
	connect(this,
			&myTcpSocket::readyRead,  // 转换收到的信息，发送信号
			[this]() {
				qDebug() << "myTcpSocket::myTcpSocket lambda readData thread is:"
						 << QThread::currentThreadId();
				emit readData(socketID,
							  this->peerAddress().toString(),
							  this->peerPort(),
							  this->readAll());	 // 发送用户发过来的数据
			});
	connect(
		this,
		&myTcpSocket::disconnected,	 // 断开连接的信号转换
		[this]() {
			qDebug()
				<< "myTcpSocket::myTcpSocket lambda sockDisConnect thread is:"
				<< QThread::currentThreadId();
			emit sockDisConnect(socketID,
								this->peerAddress().toString(),
								this->peerPort());	// 发送断开连接的用户信息
		});

	qDebug() << this->socketDescriptor() << " " << this->peerAddress().toString()
			 << " " << this->peerPort() << "myTcpSocket::myTcpSocket thread is "
			 << QThread::currentThreadId();
}

void MyTcpSocket::sentData(const QByteArray &data, const int id)
{
	// 每个连接判断是否是自己要发送的信息。
	if (id == socketID)
		{
			qDebug() << "myTcpSocket::sentData" << QThread::currentThreadId();
			write(data);
		}
}

#endif	// MYTCPSOCKET_H