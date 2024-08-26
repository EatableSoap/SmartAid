#ifndef DATABASEINTERFACE_H
#define DATABASEINTERFACE_H

#include "MyQtJson.h"

#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
namespace DataBaseInterface {
//接受表名TableName，选择字段SelectColumn，条件字段ConditionColumn，
//条件字段值ConditionValue，返回查询得到的QSqlQuery
QSqlQuery& ServerQuery(QJsonObject& QueryAttribution);
//接受表名TableName，选择字段InsertColumn,条件字段值InsertValue，返回插入结果
QString& ServerInsert(QJsonObject& InsertAttribution);
//接受表名TableName，选择字段UpdateColumn,条件字段值UpdateValue，返回更新结果
QString& ServerUpdate(QJsonObject& UpdateAttribution);
}
#endif // DATABASEINTERFACE_H
