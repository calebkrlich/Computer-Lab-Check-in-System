#include "databasecontroller.h"
#include <QDebug>

DatabaseController::DatabaseController(QString databaseType, QString hostName, QString databaseName, QString userName, QString password)
{
    database = QSqlDatabase::addDatabase(databaseType);
    database.setHostName(hostName);
    database.setDatabaseName(databaseName);
    database.setUserName(userName);
    database.setPassword(password);
    database.open();
}

bool DatabaseController::openDatabase()
{
    return database.open();
}

int DatabaseController::getRowCount(QString table)
{
   QString queryString;
   QSqlQuery queryToReturn;

   queryString = ("SELECT COUNT(*) FROM " + table.toLatin1());

   queryToReturn.exec(queryString.toLatin1());

   queryToReturn.next();    //Must call in order to get query result

   return queryToReturn.value(0).toInt();   //convert the returned string to int
}

//fetches a specific log based off of uid
QSqlQuery DatabaseController::getLog(QString UID)
{
    QString queryString;
    QSqlQuery queryToReturn;

    queryString = ("SELECT UID FROM LOGS WHERE UID = " + UID.toLatin1());

    queryToReturn.exec(queryString.toLatin1());

    return queryToReturn;
}

bool DatabaseController::postStudent(int UID, QString YSUID, QString firstName, QString lastName)
{
    QString queryString;
    QSqlQuery queryToExecute;

    //gross representation of a query
    queryString = ("INSERT INTO students (UID,YSU_ID,NAME_FIRST,NAME_LAST) VALUES (" +
                   QString::number(UID) + "," + "'" +
                   YSUID.toLatin1() + "'" + "," + "'" +
                   firstName.toLatin1() + "'" + "," + "'" +
                   lastName.toLatin1() + "'" + ");");
    qInfo() << queryString;

    return queryToExecute.exec(queryString.toLatin1());
}

QSqlQuery DatabaseController::getStudentFromID(QString ID)
{
    QString queryString;
    QSqlQuery queryToReturn;

    queryString = ("select * from students where YSU_ID = " + ID.toLatin1());

    queryToReturn.exec(queryString.toLatin1());
    return queryToReturn;
}
