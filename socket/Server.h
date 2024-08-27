#ifndef SERVER_H
#define SERVER_H

#include "RequestOperate.h"

#include <QtNetwork/QtNetwork>

namespace AnalysisTool {
//分析收到的数据包
QJsonObject* AnalyzeCommand(QJsonObject& CommandPack,QByteArray FileByte=QByteArray());
}

#endif // SERVER_H
