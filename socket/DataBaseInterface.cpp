#include "DataBaseInterface.h"

QStringList DataBaseInterface::variantListToStringList(const QVariantList &variantList) {
    QStringList stringList;
    for (const QVariant &var : variantList) {
        stringList.append(var.toString());
    }
    return stringList;
}

QSqlQuery* DataBaseInterface::ServerQuery(const QJsonObject& QueryAttribution, QString DBpath) {
    QSqlDatabase database;
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName(DBpath);
        assert(database.open() == true);
    }

    QSqlQuery* sqlQuery = new QSqlQuery(database);

    // 从 QueryAttribution 中获取需要的参数
    QString tableName = QueryAttribution["TableName"].toString();
    QStringList selectColumns = variantListToStringList(QueryAttribution["SelectColumn"].toArray().toVariantList());
    QStringList conditionColumns = variantListToStringList(QueryAttribution["QueryConditionColumn"].toArray().toVariantList());
    QVariantList conditionValues = QueryAttribution["QueryConditionValue"].toArray().toVariantList();

    // 构建 SQL 查询语句
    QString query = "SELECT ";
    if (selectColumns.isEmpty()) {
        query += "*";  // 如果未指定列，选择所有列
    } else {
        query += selectColumns.join(", ");
    }

    query += " FROM " + tableName;

    QStringList conditionStrings;
    for (int i = 0; i < conditionColumns.size(); ++i) {
        conditionStrings << QString("%1 = ?").arg(conditionColumns[i]);
    }

    if (!conditionStrings.isEmpty()) {
        query += " WHERE " + conditionStrings.join(" AND ");
    }

    // 执行查询
    sqlQuery->prepare(query);
    for (const QVariant& value : conditionValues) {
        sqlQuery->addBindValue(value);
    }

    if (sqlQuery->exec()) {
        database.close();
        return sqlQuery;
    } else {
        qDebug() << "查询失败:" << sqlQuery->lastError().text();
        database.close();
        return new QSqlQuery; // 默认构造的 QSqlQuery 对象
    }
}


QString DataBaseInterface::ServerInsert(const QJsonObject& QueryAttribution, QString DBpath) {
    QSqlDatabase database;
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName(DBpath);
        assert(database.open()==true);
    }

    QSqlQuery sqlQuery(database);

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
    for (int i=0;i<insertValues.size();i++) {
        if(insertColumns[i].contains("ID"))
            sqlQuery.addBindValue(insertValues[i].toLongLong());
        else if(insertColumns[i].contains("PhoneNumber")||insertColumns[i].contains("Age"))
            sqlQuery.addBindValue(insertValues[i].toInt());
        else
            sqlQuery.addBindValue(insertValues[i]);
    }

    if (sqlQuery.exec()) {
        database.close();
        return "1";
    } else {
        qDebug() << "插入失败:" << sqlQuery.lastError().text();
        database.close();
        return "插入失败";
    }
}

QString DataBaseInterface::ServerUpdate(const QJsonObject& UpdateAttribution, QString DBpath) {
    QSqlDatabase database;
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName(DBpath);
        assert(database.open() == true);
    }

    QSqlQuery sqlQuery(database);

    // 从 UpdateAttribution 中获取需要的参数
    QString tableName = UpdateAttribution["TableName"].toString();
    QStringList updateColumns = variantListToStringList(UpdateAttribution["UpdateColumn"].toArray().toVariantList());
    QVariantList updateValues = UpdateAttribution["UpdateValue"].toArray().toVariantList();
    QStringList conditionColumns = variantListToStringList(UpdateAttribution["UpdateConditionColumn"].toArray().toVariantList());
    QVariantList conditionValues = UpdateAttribution["UpdateConditionValue"].toArray().toVariantList();

    // 构建 SQL 更新语句
    QString query = "UPDATE " + tableName + " SET ";
    for (int i = 0; i < updateColumns.size(); ++i) {
        query += updateColumns[i] + " = ?";
        if (i < updateColumns.size() - 1) {
            query += ", ";
        }
    }

    QStringList conditionStrings;
    for (int i = 0; i < conditionColumns.size(); ++i) {
        conditionStrings << QString("%1 = ?").arg(conditionColumns[i]);
    }

    if (!conditionStrings.isEmpty()) {
        query += " WHERE " + conditionStrings.join(" AND ");
    }

    // 准备和绑定值
    sqlQuery.prepare(query);
    for (int i=0;i<updateValues.size();i++) {
        if(updateColumns[i].contains("ID"))
            sqlQuery.addBindValue(updateValues[i].toLongLong());
        else if(updateColumns[i].contains("PhoneNumber")||updateColumns[i].contains("Age"))
            sqlQuery.addBindValue(updateValues[i].toInt());
        else
            sqlQuery.addBindValue(updateValues[i]);
    }

    for (int i=0;i<conditionValues.size();i++) {
        if(conditionColumns[i].contains("ID"))
            sqlQuery.addBindValue(conditionValues[i].toLongLong());
        else if(conditionColumns[i].contains("PhoneNumber")||conditionColumns[i].contains("Age"))
            sqlQuery.addBindValue(conditionValues[i].toInt());
        else
            sqlQuery.addBindValue(conditionValues[i]);
    }

    if (sqlQuery.exec()) {
        database.close();
        return "1"; // 表示成功
    } else {
        qDebug() << "更新失败:" << sqlQuery.lastError().text();
        database.close();
        return "更新失败"; // 返回错误信息
    }
}
