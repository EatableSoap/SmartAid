#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QTcpServer>

// 继承QTcpServer实现多线程
class MyTcpServer : public QTcpServer
{
	Q_OBJECT
   public:
	explicit MyTcpServer(QObject *parent = 0);
	~MyTcpServer();
   signals:
	void connectClient(const int,
					   const QString &,
					   const quint16);	// 发送新用户连接信息
	void readData(const int,
				  const QString &,
				  quint16,
				  const QByteArray &);	// 发送获得用户发过来的数据
	void sockDisConnect(const int,
						const QString &,
						const quint16);			   // 断开连接的用户信息
	void sentData(const QByteArray &, const int);  // 向scoket发送消息
   public slots:
	void setData(const QByteArray &data, const int handle);	 // 想用户发送消息
	void readDataSlot(const int,
					  const QString &,
					  const quint16,
					  const QByteArray &);	// 发送获得用户发过来的数据
	void sockDisConnectSlot(int		handle,
							QString ip,
							quint16 prot);	// 断开连接的用户信息

   protected:
	void incomingConnection(qintptr socketDescriptor);	// 覆盖已获取多线程
   private:
	QMap<int, QTcpSocket *> *tcpClient;
};

void MyTcpServer::incomingConnection(qintptr socketDescriptor)
{
	QTcpSocket *tcpTemp = new QTcpSocket(socketDescriptor);
	QThread	   *thread = new QThread(tcpTemp);	// 防止内存泄漏
	connect(tcpTemp,
			&QTcpSocket::readData,
			this,
			&MyTcpServer::readDataSlot);  // 接受到数据
	connect(tcpTemp,
			&QTcpSocket::sockDisConnect,
			this,
			&MyTcpServer::sockDisConnectSlot);	// 断开连接并释放断开的Tcpsocket
	connect(this,
			&MyTcpServer::sentData,
			tcpTemp,
			&QTcpSocket::sentData);	 // 发送数据
	connect(tcpTemp,
			&QTcpSocket::disconnected,
			thread,
			&QThread::quit);		// 断开连接时线程退出
	tcpTemp->moveToThread(thread);	// 把tcp类移动到新的线程
	thread->start();				// 线程开始运行

	tcpClient->insert(socketDescriptor, tcpTemp);  // 插入到连接信息中
	qDebug() << "incoming connection THREAD is: " << QThread::currentThreadId();
	// 发送连接信号
	emit connectClient(tcpTemp->socketDescriptor(),
					   tcpTemp->peerAddress().toString(),
					   tcpTemp->peerPort());
}

void MyTcpServer::setData(const QByteArray &data, const int handle)
{
	emit sentData(data, handle);
}

void MyTcpServer::sockDisConnectSlot(int handle, QString ip, quint16 prot)
{
	qDebug() << "MyTcpServer::sockDisConnectSlot thread is:"
			 << QThread::currentThreadId();

	QTcpSocket *tcp = tcpClient->value(handle);
	tcpClient->remove(handle);	// 连接管理中移除断开连接的socket
	delete tcp;					// 释放断开连接的资源
	emit sockDisConnect(handle, ip, prot);
}

#endif	// MYTCPSERVER_H