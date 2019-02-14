#ifndef STUDENTINFORMATION_H
#define STUDENTINFORMATION_H

#include <QString>

struct StudentInformation
{
    QString status;
    unsigned int ID;
    QString firstName;
    QString lastName;
    QString middleInitial;
    QString birthday;
    QString registrationDate;
};

#endif // STUDENTINFOMATION_H
