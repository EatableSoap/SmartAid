#ifndef DATABASEINTERFACE_H
#define DATABASEINTERFACE_H

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QSqlError>
#include <QSqlQuery>
#include <QStringList>
#include <QVariantList>
#include <QtSql/QSqlDatabase>

#include "MyQtJson.h"

namespace DataBaseInterface
{
QStringList variantListToStringList(const QVariantList& variantList);
// 接受表名TableName，选择字段SelectColumn，条件字段QueryConditionColumn，
// 条件字段值QueryConditionValue，返回查询得到的QSqlQuery
QSqlQuery*  ServerQuery(const QJsonObject& QueryAttribution,
                        QString            DBpath = "./tmp/DataBase/ServerDB.db");
// 接受表名TableName，选择字段InsertColumn,条件字段值InsertValue，返回插入结果
QString     ServerInsert(const QJsonObject& InsertAttribution,
                         QString            DBpath = "./tmp/DataBase/ServerDB.db");
// 接受表名TableName，更新字段UpdateColumn,更新字段值UpdateValue，
// 条件字段UpdateConditionColumn,条件字段值UpdateConditionValue,返回更新结果
QString     ServerUpdate(const QJsonObject& UpdateAttribution,
                         QString            DBpath = "./tmp/DataBase/ServerDB.db");
}  // namespace DataBaseInterface
#endif  // DATABASEINTERFACE_H
