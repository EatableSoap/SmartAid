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
        return sqlQuery;
    } else {
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
        return "Insertion successful";
    } else {
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

     sqlQuery.prepare(query);
     for (const QString& value : updateValues) {
         sqlQuery.addBindValue(value);
     }
     sqlQuery.addBindValue(conditionValue);
     if (sqlQuery.exec()) {
         return "Update successful";
     } else {
         qDebug() << "更新失败:" << sqlQuery.lastError().text();
         return "Update failed: " + sqlQuery.lastError().text();
     }
 }

 int main(int argc, char *argv[]) {
     QCoreApplication app(argc, argv);

     // 初始化 SQLite 数据库连接
     QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
     db.setDatabaseName("/home/yhy/Desktop/ceshi.db"); // 使用实际的数据库文件路径
     if (!db.open()) {
         qDebug() << "Error opening database:" << db.lastError().text();
         return 1;
     }

     // 创建示例表（如果不存在）
     QSqlQuery query;
     if (!query.exec("CREATE TABLE IF NOT EXISTS my_table (column1 TEXT, column2 TEXT)")) {
         qDebug() << "Table creation failed:" << query.lastError().text();
         return 1;
     }

     // 示例插入
     QJsonObject insertAttribution;
     insertAttribution["TableName"] = "my_table";
     insertAttribution["InsertColumn"] = QJsonArray::fromStringList(QStringList() << "column1" << "column2");
     insertAttribution["InsertValue"] = QJsonArray::fromStringList(QStringList() << "55555" << "444444");

     QString insertResult = ServerInsert(insertAttribution);
     qDebug() << insertResult;

     // 示例更新
     QJsonObject updateAttribution;
     updateAttribution["TableName"] = "my_table";
     updateAttribution["UpdateColumn"] = QJsonArray::fromStringList(QStringList() << "column1");
     updateAttribution["UpdateValue"] = QJsonArray::fromStringList(QStringList() << "new_value1");
     updateAttribution["ConditionColumn"] = "column2";
     updateAttribution["ConditionValue"] = "value3";

     QString updateResult = ServerUpdate(updateAttribution);
     qDebug() << updateResult;

     // 关闭数据库连接
     db.close();

     return 0;
 }
