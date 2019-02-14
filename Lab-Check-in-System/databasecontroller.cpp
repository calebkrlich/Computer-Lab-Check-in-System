#include "databasecontroller.h"

DatabaseController::DatabaseController(QString dbName, QString hostName, QString port, QString username, QString password)
{
    database.addDatabase("QMYSQL");
    database.setHostName(hostName);
    database.setPort(port.toShort());
    database.setUserName(username);
    database.setPassword(password);
    database.open();
}
DatabaseController::DatabaseController()
{

}

void DatabaseController::getLog(QString ID)
{
    QString queryString;
    QSqlQuery query;

    queryString = ("SELECT UID FROM LOGS WHERE UID = " + ID.toLatin1());

    query.exec(queryString.toLatin1());


}

void DatabaseController::getStudent(QString ID)
{

}
