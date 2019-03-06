#ifndef EVENTINFORMATION_H
#define EVENTINFORMATION_H

#include <QString>
#include <QDateTime>

struct EventInformation
{
    QString name;
    QString room;
    QDateTime startDateTime;
    QDateTime endDateTime;
};


#endif // EVENTINFORMATION_H
