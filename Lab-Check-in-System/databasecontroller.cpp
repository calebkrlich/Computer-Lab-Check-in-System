#include "databasecontroller.h"

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

//fetches a specific log based off of uid
QSqlQuery DatabaseController::getLog(QString UID)
{
    QString queryString;
    QSqlQuery queryToReturn;

    queryString = ("SELECT UID FROM LOGS WHERE UID = " + UID.toLatin1());

    queryToReturn.exec(queryString.toLatin1());

    return queryToReturn;
}

QSqlQuery DatabaseController::getStudent(QString UID)
{
    QString queryString;
    QSqlQuery queryToReturn;

    queryString = ("select * from students where UID = " + UID.toLatin1());

    queryToReturn.exec(queryString.toLatin1());
    return queryToReturn;
}
