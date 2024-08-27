#include <QCoreApplication>
#include <QDebug>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariantList>
#include <QStringList>

QStringList variantListToStringList(const QVariantList &variantList) {
    QStringList stringList;
    for (const QVariant &var : variantList) {
        stringList.append(var.toString());
    }
    return stringList;
}

QSqlQuery ServerQuery(const QJsonObject& QueryAttribution) {
    QSqlQuery sqlQuery;

    // 从 QueryAttribution 中获取需要的参数
    QString tableName = QueryAttribution["TableName"].toString();
    QStringList selectColumns = variantListToStringList(QueryAttribution["SelectColumn"].toArray().toVariantList());
    QString conditionColumn = QueryAttribution["ConditionColumn"].toString();
    QString conditionValue = QueryAttribution["ConditionValue"].toString();

    // 构建 SQL 查询语句
    QString query = "SELECT ";
    query += selectColumns.join(", ");
    query += " FROM " + tableName + " WHERE " + conditionColumn + " = ?";

    // 执行查询
    sqlQuery.prepare(query);
    sqlQuery.addBindValue(conditionValue);
    if (sqlQuery.exec()) {
        // 查询成功，返回填充后的 QSqlQuery 对象
        return sqlQuery;
    } else {
        // 查询失败，输出错误信息并返回一个空的 QSqlQuery 对象
        qDebug() << "查询失败:" << sqlQuery.lastError().text();
        return QSqlQuery(); // 默认构造的 QSqlQuery 对象
    }
}

QString ServerInsert(const QJsonObject& QueryAttribution) {
    QSqlQuery sqlQuery;

    // 从 QueryAttribution 中获取需要的参数
    QString tableName = QueryAttribution["TableName"].toString();
    QStringList insertColumns = variantListToStringList(QueryAttribution["InsertColumn"].toArray().toVariantList());
    QStringList insertValues = variantListToStringList(QueryAttribution["InsertValue"].toArray().toVariantList());

    // 构建 SQL 插入语句
    QString query = "INSERT INTO " + tableName + " (" + insertColumns.join(", ") + ") VALUES (" + QString("?").repeated(insertValues.size()).replace(0, insertValues.size() - 1, ", ") + ")";

    // 执行插入
    sqlQuery.prepare(query);
    for (const QString& value : insertValues) {
        sqlQuery.addBindValue(value);
    }
    if (sqlQuery.exec()) {
        // 插入成功，返回成功消息
        return "Insertion successful";
    } else {
        // 插入失败，输出错误信息并返回错误消息
        qDebug() << "插入失败:" << sqlQuery.lastError().text();
        return "Insertion failed: " + sqlQuery.lastError().text();
    }
}

QString ServerUpdate(const QJsonObject& UpdateAttribution) {
    QSqlQuery sqlQuery;

    // 从 UpdateAttribution 中获取需要的参数
    QString tableName = UpdateAttribution["TableName"].toString();
    QStringList updateColumns = variantListToStringList(UpdateAttribution["UpdateColumn"].toArray().toVariantList());
    QStringList updateValues = variantListToStringList(UpdateAttribution["UpdateValue"].toArray().toVariantList());
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

    // 执行更新
        sqlQuery.prepare(query);
        for (const QString& value : updateValues) {
            sqlQuery.addBindValue(value);
        }
        sqlQuery.addBindValue(conditionValue);
        if (sqlQuery.exec()) {
            // 更新成功，返回成功消息
            return "Update successful";
        } else {
            // 更新失败，输出错误信息并返回错误消息
            qDebug() << "更新失败:" << sqlQuery.lastError().text();
            return "Update failed: " + sqlQuery.lastError().text();
        }
    }

    int main(int argc, char *argv[]) {
        QCoreApplication app(argc, argv);

        // 初始化 SQLite 数据库连接
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("/home/yhy/Desktop/ServerDB.db");
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

        QSqlQuery queryResult = ServerQuery(queryAttribution);
        if (queryResult.isValid()) {
            QJsonArray resultArray;
            while (queryResult.next()) {
                QJsonObject rowObject;
                for (int i = 0; i < queryAttribution["SelectColumn"].toArray().size(); i++) {
                    rowObject[queryAttribution["SelectColumn"].toArray()[i].toString()] = queryResult.value(i).toString();
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

        QString insertResult = ServerInsert(insertAttribution);
        qDebug() << insertResult;

        // 示例更新
        QJsonObject updateAttribution;
        updateAttribution["TableName"] = "my_table";
        updateAttribution["UpdateColumn"] = QJsonArray::fromStringList(QStringList() << "column1");
        updateAttribution["UpdateValue"] = QJsonArray::fromStringList(QStringList() << "new_value1");
        updateAttribution["ConditionColumn"] = "column2";
        updateAttribution["ConditionValue"] = "value2";

        QString updateResult = ServerUpdate(updateAttribution);
        qDebug() << updateResult;

        // 关闭数据库连接
        db.close();

        return 0;
    }
