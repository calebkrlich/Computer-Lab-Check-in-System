#ifndef CARDPARSER_H
#define CARDPARSER_H

#include <QString>
#include <QDebug>
#include <QMessageBox>
#include "studentinformation.h"
#include <QDate>

class CardParser
{
private:
    StudentInformation cardInfo;

public:
    CardParser();
    bool Parse(QString cardData);

    QString getStatus();
    QString getID();
    QString getFirstname();
    QString getLastname();
    QString getMiddleInitial();
    QString getBirthday();
    QString getRegistrationDate();

    StudentInformation getInfo();
    void printInfo();
};

#endif // CARDPARSER_H
