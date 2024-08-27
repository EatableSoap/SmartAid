#ifndef DATA_H
#define DATA_H

#include <QDebug>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariantList>
#include <QStringList>

namespace data{
    QStringList variantListToStringList(const QVariantList &variantList);
    QSqlQuery* ServerQuery(const QJsonObject& QueryAttribution);
    QString ServerInsert(const QJsonObject& QueryAttribution);
    QString ServerUpdate(const QJsonObject& UpdateAttribution);
}

#endif // DATA_H
