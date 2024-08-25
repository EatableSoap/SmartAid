#ifndef DATABASEINTERFACE_H
#define DATABASEINTERFACE_H

#include "MyQtJson.h"

#include <QtSql/QSqlDatabase>

//接受表名TableName，选择字段SelectColumn，条件字段ConditionColumn，
//条件字段值ConditionValue，返回查询结果
QJsonObject& ServerQuerry(QJsonObject& QueryAttribution);
//接受表名TableName，选择字段InsertColumn,条件字段值InsertValue，返回插入结果
QJsonObject& ServerInsert(QJsonObject& QueryAttribution);
//接受表名TableName，选择字段UpdateColumn,条件字段值UpdateValue，返回插入结果
QJsonObject& ServerUpdate(QJsonObject& UpdateAttribution);

#endif // DATABASEINTERFACE_H
