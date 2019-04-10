#ifndef STUDENTINFORMATION_H
#define STUDENTINFORMATION_H

#include <QString>
#include <QDateTime>

struct StudentInformation
{
    QString status;
    QString ID;
    QString firstName;
    QString lastName;
    QString middleInitial;
    QString birthday;
    QString registrationDate;

    QString checkInTime;    //This may want to be changed to QDateTime when I can figure out how to parse the string right :)
    QString checkOutTime;
};

#endif // STUDENTINFOMATION_H
