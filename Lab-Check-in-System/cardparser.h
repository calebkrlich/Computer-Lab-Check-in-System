#ifndef CARDPARSER_H
#define CARDPARSER_H

#include <QString>
#include <QDebug>
#include <QMessageBox>

struct CardInfo
{
    QString status;
    unsigned int ID;
    QString firstName;
    QString lastName;
    QString middleInitial;
    QString birthday;
    QString registrationDate;

};

class CardParser
{
private:
    CardInfo cardInfo;

public:
    CardParser();
    bool Parse(QString cardData);

    QString getStatus();
    unsigned int getID();
    QString getFirstname();
    QString getLastname();
    QString getMiddleInitial();
    QString getBirthday();
    QString getRegistrationDate();

    CardInfo getInfo();
    void printInfo();
};

#endif // CARDPARSER_H
