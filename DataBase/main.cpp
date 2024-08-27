#include "data.h"

int main() {
    // 初始化 SQLite 数据库连接
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("ServerDB.db");
    if (!db.open()) {
        qDebug() << "Error opening database:" << db.lastError().text();
        return 1;
    }

    // 示例查询
    QJsonObject queryAttribution;
    queryAttribution["TableName"] = "my_table";
    queryAttribution["SelectColumn"] = QJsonArray::fromStringList(QStringList() << "column1" << "column2");
    queryAttribution["ConditionColumn"] = "column1";
    queryAttribution["ConditionValue"] = "value1";

    QSqlQuery* queryResult = data::ServerQuery(queryAttribution);
    if (queryResult->isValid()) {
        QJsonArray resultArray;
        while (queryResult->next()) {
            QJsonObject rowObject;
            for (int i = 0; i < queryAttribution["SelectColumn"].toArray().size(); i++) {
                rowObject[queryAttribution["SelectColumn"].toArray()[i].toString()] = queryResult->value(i).toString();
            }
            resultArray.append(rowObject);
        }
        QJsonObject resultJson;
        resultJson["Result"] = resultArray;
        qDebug() << "Query Result:" << QJsonDocument(resultJson).toJson();
    } else {
        qDebug() << "No valid result returned.";
    }

    // 示例插入
    QJsonObject insertAttribution;
    insertAttribution["TableName"] = "my_table";
    insertAttribution["InsertColumn"] = QJsonArray::fromStringList(QStringList() << "column1" << "column2");
    insertAttribution["InsertValue"] = QJsonArray::fromStringList(QStringList() << "value1" << "value2");

    QString insertResult = data::ServerInsert(insertAttribution);
    qDebug() << insertResult;

    // 示例更新
    QJsonObject updateAttribution;
    updateAttribution["TableName"] = "my_table";
    updateAttribution["UpdateColumn"] = QJsonArray::fromStringList(QStringList() << "column1");
    updateAttribution["UpdateValue"] = QJsonArray::fromStringList(QStringList() << "new_value1");
    updateAttribution["ConditionColumn"] = "column2";
    updateAttribution["ConditionValue"] = "value2";

    QString updateResult = data::ServerUpdate(updateAttribution);
    qDebug() << updateResult;

    // 关闭数据库连接
    db.close();

    return 0;
}
