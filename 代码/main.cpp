#include <QDebug>
#include <QVector>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>




QJsonObject& ServerQuerry(QJsonObject& QueryAttribution) {
    static QJsonObject queryResult;

    // 从 QueryAttribution 中获取需要的参数
    QString tableName = QueryAttribution["TableName"].toString();
    QStringList selectColumns = QueryAttribution["SelectColumn"].toArray().toVariantList().toStdList();
    QString conditionColumn = QueryAttribution["ConditionColumn"].toString();
    QString conditionValue = QueryAttribution["ConditionValue"].toString();

    // 构建 SQL 查询语句
    QString query = "SELECT ";
    for (int i = 0; i < selectColumns.size(); i++) {
        query += selectColumns[i];
        if (i < selectColumns.size() - 1) {
            query += ", ";
        }
    }
    query += " FROM " + tableName + " WHERE " + conditionColumn + " = ?";

    // 执行查询并处理结果
    QSqlQuery sqlQuery;
    sqlQuery.prepare(query);
    sqlQuery.addBindValue(conditionValue);
    if (sqlQuery.exec()) {
        QJsonArray resultArray;
        while (sqlQuery.next()) {
            QJsonObject rowObject;
            for (int i = 0; i < selectColumns.size(); i++) {
                rowObject[selectColumns[i]] = sqlQuery.value(i).toString();
            }
            resultArray.append(rowObject);
        }
        queryResult["Result"] = resultArray;
    } else {
        queryResult["Error"] = sqlQuery.lastError().text();
    }

    return queryResult;
}

QJsonObject& ServerInsert(QJsonObject& QueryAttribution) {
    static QJsonObject insertResult;

    // 从 QueryAttribution 中获取需要的参数
    QString tableName = QueryAttribution["TableName"].toString();
    QStringList insertColumns = QueryAttribution["InsertColumn"].toArray().toVariantList().toStdList();
    QStringList insertValues = QueryAttribution["InsertValue"].toArray().toVariantList().toStdList();

    // 构建 SQL 插入语句
    QString query = "INSERT INTO " + tableName + " (";
    for (int i = 0; i < insertColumns.size(); i++) {
        query += insertColumns[i];
        if (i < insertColumns.size() - 1) {
            query += ", ";
        }
    }
    query += ") VALUES (";
    for (int i = 0; i < insertValues.size(); i++) {
        query += "?";
        if (i < insertValues.size() - 1) {
            query += ", ";
        }
    }
    query += ")";

    // 执行插入并处理结果
    QSqlQuery sqlQuery;
    sqlQuery.prepare(query);
    for (const QString& value : insertValues) {
        sqlQuery.addBindValue(value);
    }
    if (sqlQuery.exec()) {
        insertResult["Result"] = "Insertion successful";
    } else {
        insertResult["Error"] = sqlQuery.lastError().text();
    }

    return insertResult;
}

QJsonObject& ServerUpdate(QJsonObject& UpdateAttribution) {
    static QJsonObject updateResult;

    // 从 UpdateAttribution 中获取需要的参数
    QString tableName = UpdateAttribution["TableName"].toString();
    QStringList updateColumns = UpdateAttribution["UpdateColumn"].toArray().toVariantList().toStdList();
    QStringList updateValues = UpdateAttribution["UpdateValue"].toArray().toVariantList().toStdList();
    QString conditionColumn = UpdateAttribution["ConditionColumn"].toString();
    QString conditionValue = UpdateAttribution["ConditionValue"].toString();

    // 构建 SQL 更新语句
    QString query = "UPDATE " + tableName + " SET ";
    for (int i = 0; i < updateColumns.size(); i++) {
        query += updateColumns[i] + " = ?";
        if (i < updateColumns.size() - 1) {
            query += ", ";
        }
    }
    query += " WHERE " + conditionColumn + " = ?";

    // 执行更新并处理结果
    QSqlQuery sqlQuery;
    sqlQuery.prepare(query);
    for (const QString& value : updateValues) {
        sqlQuery.addBindValue(value);
    }
    sqlQuery.addBindValue(conditionValue);
    if (sqlQuery.exec()) {
        updateResult["Result"] = "Update successful";
    } else {
        updateResult["Error"] = sqlQuery.lastError().text();
    }

    return updateResult;
}

int main() {
    // 初始化 SQLite 数据库连接
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/yhy/Desktop/ServerDB.db");
    if (!db.open()) {
        qDebug() << "Error opening database:" << db.lastError().text();
        return 1;
    }

    // 测试查询
        QJsonObject queryAttribution;
        queryAttribution["TableName"] = "users";
        queryAttribution["SelectColumn"] = QJsonArray::fromVariantList({"id", "name", "email"});
        queryAttribution["ConditionColumn"] = "id";
        queryAttribution["ConditionValue"] = "1";
        QJsonObject queryResult = ServerQuerry(queryAttribution);
        if (queryResult.contains("Error")) {
            qDebug() << "Query error:" << queryResult["Error"].toString();
        } else {
            QJsonArray resultArray = queryResult["Result"].toArray();
            for (const QJsonValue& value : resultArray) {
                QJsonObject row = value.toObject();
                qDebug() << "ID:" << row["id"].toString()
                         << "Name:" << row["name"].toString()
                         << "Email:" << row["email"].toString();
            }
        }

        // 测试插入
        QJsonObject insertAttribution;
        insertAttribution["TableName"] = "users";
        insertAttribution["InsertColumn"] = QJsonArray::fromVariantList({"name", "email"});
        insertAttribution["InsertValue"] = QJsonArray::fromVariantList({"John Doe", "john.doe@example.com"});
        QJsonObject insertResult = ServerInsert(insertAttribution);
        if (insertResult.contains("Error")) {
            qDebug() << "Insert error:" << insertResult["Error"].toString();
        } else {
            qDebug() << "Insertion successful";
        }

        // 测试更新
        QJsonObject updateAttribution;
        updateAttribution["TableName"] = "users";
        updateAttribution["UpdateColumn"] = QJsonArray::fromVariantList({"name", "email"});
        updateAttribution["UpdateValue"] = QJsonArray::fromVariantList({"Jane Doe", "jane.doe@example.com"});
        updateAttribution["ConditionColumn"] = "id";
        updateAttribution["ConditionValue"] = "1";
        QJsonObject updateResult = ServerUpdate(updateAttribution);
        if (updateResult.contains("Error")) {
            qDebug() << "Update error:" << updateResult["Error"].toString();
        } else {
            qDebug() << "Update successful";
        }

        db.close();
        return 0;



}
