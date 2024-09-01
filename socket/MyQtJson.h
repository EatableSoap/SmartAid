#ifndef MYQTJSON_H
#define MYQTJSON_H

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>

namespace MyQtJson
{
// 接受Qt二进制流数据，输出对应的jsonObject,用完记得delete
QJsonObject* AnalysisByteArray(QByteArray& data);
// 接受字段名，字段数据类型(1表示是Int数据)，字段数据,由于是new在堆里面的，用完记得delete
QJsonObject* DataToJson(QVector<QString> DataName,
                        QVector<int>     DataType,
                        QVector<QString> Data);
}  // namespace MyQtJson
#endif  // MYQTJSON_H
