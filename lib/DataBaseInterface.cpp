#include "DataBaseInterface.h"

QStringList DataBaseInterface::variantListToStringList(const QVariantList &variantList) {
    QStringList stringList;
    for (const QVariant &var : variantList) {
        stringList.append(var.toString());
    }
    return stringList;
}

QSqlQuery* DataBaseInterface::ServerQuery(const QJsonObject& QueryAttribution) {
    QSqlQuery* sqlQuery = new QSqlQuery;

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
    sqlQuery->prepare(query);
    sqlQuery->addBindValue(conditionValue);
    if (sqlQuery->exec()) {
        return sqlQuery;
    } else {
        qDebug() << "查询失败:" << sqlQuery->lastError().text();
        return new QSqlQuery; // 默认构造的 QSqlQuery 对象
    }
}

QString DataBaseInterface::ServerInsert(const QJsonObject& QueryAttribution) {
    QSqlQuery sqlQuery;

    // 从 QueryAttribution 中获取需要的参数
    QString tableName = QueryAttribution["TableName"].toString();
    QStringList insertColumns = variantListToStringList(QueryAttribution["InsertColumn"].toArray().toVariantList());
    QStringList insertValues = variantListToStringList(QueryAttribution["InsertValue"].toArray().toVariantList());

    // 构建 SQL 插入语句
    QString query = "INSERT INTO " + tableName + " (" + insertColumns.join(", ") + ") VALUES (";

    QStringList placeholders;
    for (int i = 0; i < insertValues.size(); ++i) {
        placeholders << "?";
    }
    query += placeholders.join(", ") + ")";

    qDebug() << "Generated SQL query:" << query; // 打印生成的 SQL 查询语句用于调试

    sqlQuery.prepare(query);
    for (const QString& value : insertValues) {
        sqlQuery.addBindValue(value);
    }

    if (sqlQuery.exec()) {
        return "1";
    } else {
        qDebug() << "插入失败:" << sqlQuery.lastError().text();
        return "插入失败";
    }
}

QString DataBaseInterface::ServerUpdate(const QJsonObject& UpdateAttribution) {
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

     sqlQuery.prepare(query);
     for (const QString& value : updateValues) {
         sqlQuery.addBindValue(value);
     }
     sqlQuery.addBindValue(conditionValue);
     if (sqlQuery.exec()) {
         return "1";
     } else {
         qDebug() << "更新失败:" << sqlQuery.lastError().text();
         return "更新失败";
     }
}
