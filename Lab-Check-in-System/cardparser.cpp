#include "cardparser.h"

CardParser::CardParser()
{

}

QString CardParser::getStatus() { return cardInfo.status; }
QString CardParser::getID() { return cardInfo.ID; }
QString CardParser::getFirstname() { return cardInfo.firstName; }
QString CardParser::getLastname() { return cardInfo.lastName; }
QString CardParser::getMiddleInitial() { return cardInfo.middleInitial; }
QString CardParser::getBirthday() { return cardInfo.birthday; }
QString CardParser::getRegistrationDate() { return cardInfo.registrationDate; }

StudentInformation CardParser::getInfo() { return cardInfo; }


//NEEDS A REGULAR EXPRESSTION TO TEST
//FULL MATCH REGEX
//((%S)|(%X)|(%E))(\\)([0-9]*)(\\)([A-Z]*)(\\)([A-Z]*)(\\)([A-Z]*)(\\)(([0-9]*)(\/)([0-9]*)(\/)([0-9]*)?)(((\\)([0-9]+)(\/)([0-9]+)(\/)([0-9]+)(\?))|(\?))(\@)([0-9]+)(\?&Y)([0-9]+)(\?)
bool CardParser::Parse(QString cardData)
{

    QRegularExpression regexCardMatch("((%S)|(%X)|(%E))(\\\\)([0-9]*)(\\\\)([A-Z]*)(\\\\)([A-Z]*)(\\\\)([A-Z]*)(\\\\)(([0-9]*)(\\/)([0-9]*)(/)([0-9]*)?)(((\\\\)([0-9]+)(/)([0-9]+)(/)([0-9]+)(\\?))|(\\?))(\\@)([0-9]+)(\\?&Y)([0-9]+)(\\?)");

    QRegularExpressionMatch regexMatch = regexCardMatch.match(cardData);

    if(!regexMatch.hasMatch())
    {
        return false;
    }

    /*
    //Check if the input is valid card Info
    if(cardData.contains(';') || cardData[0].toLatin1() != '%'
           || !cardData.contains('@'))
    {
        return false;
    }
    */

    QStringList garbageRemovalSplit = cardData.split('?');

    qInfo() << garbageRemovalSplit;

    QStringList splitCardData = garbageRemovalSplit[0].split("\\");

    qInfo() << splitCardData.toStdList();

    //Status
    if(splitCardData[0].toLatin1() == "%S")
        cardInfo.status = "Student";
    else if(splitCardData[0].toLatin1() == "%E")
        cardInfo.status = "Faculty";
    else if(splitCardData[0].toLatin1() == "%X")
        cardInfo.status = "Student Faculty";

    //YSU NUMBER
    cardInfo.ID = garbageRemovalSplit[2].mid(2).toLatin1();

    //Last Name
    cardInfo.lastName = splitCardData[2].toLatin1();

    //First Name
    cardInfo.firstName = splitCardData[3].toLatin1();

    //Middle Initial
    cardInfo.middleInitial = splitCardData[4].toLatin1();

    //Important Dates (Birthday/Registration)
    if(cardInfo.status == "Faculty")
        cardInfo.registrationDate = splitCardData[5].toLatin1();

    else if(cardInfo.status == "Student" ||
            cardInfo.status == "Student Faculty")
    {
        QString cleanedDate;
        QDate birthday = QDate::fromString(splitCardData[5],"MM/dd/yyyy");

        qInfo() << birthday.toString();

        cleanedDate = birthday.toString("yyyy-MM-dd");
        cardInfo.birthday = cleanedDate;
        cardInfo.registrationDate = splitCardData[6].toLatin1();
    }

    return true;

}

void CardParser::printInfo()
{
    qInfo("Parsed Card Data:");
    qInfo(cardInfo.status.toLatin1());
    qInfo() << cardInfo.ID;
    qInfo(cardInfo.firstName.toLatin1());
    qInfo(cardInfo.middleInitial.toLatin1());
    qInfo(cardInfo.lastName.toLatin1());
    qInfo(cardInfo.birthday.toLatin1());
    qInfo(cardInfo.registrationDate.toLatin1());


}

