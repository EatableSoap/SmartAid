#include "MyQtJson.h"

// 接受Qt二进制流数据，输出对应的jsonObject,用完记得delete
QJsonObject* MyQtJson::AnalysisByteArray(QByteArray& data)
{
    QString         datastr = QString::fromLocal8Bit(data);
    // 检验文件完整性
    QJsonParseError json_error;
    QJsonDocument   jsonDoc(
        QJsonDocument::fromJson(datastr.toStdString().data(), &json_error));
    qDebug() << "收到JSON" << jsonDoc;
    if (json_error.error != QJsonParseError::NoError)
        {
            qDebug() << "Json Error!";
            return new QJsonObject;
        }

    QJsonObject* rootObj = new QJsonObject;
    *rootObj = jsonDoc.object();
    return rootObj;
}

// 接受字段名，字段数据类型(1表示是Int数据)，字段数据,由于是new在堆里面的，用完记得delete
QJsonObject* MyQtJson::DataToJson(QVector<QString> DataName,
                                  QVector<int>     DataType,
                                  QVector<QString> Data)
{
    QJsonObject* jsonObject = new QJsonObject();
    int          DataSize = DataName.size();
    if (!DataSize)
        qDebug("NoData!");
    for (int i = 0; i < DataSize; i++)
        {
            if (DataType[i])
                {
                    jsonObject->insert(DataName[i], Data[i].toInt());
                }
            else
                {
                    jsonObject->insert(DataName[i], Data[i]);
                }
        }
    return jsonObject;
}
