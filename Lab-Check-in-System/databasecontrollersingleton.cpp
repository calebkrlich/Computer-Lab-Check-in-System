#include "databasecontrollersingleton.h"
#include "QDebug"

DatabaseControllerSingleton* DatabaseControllerSingleton::instance = nullptr;

bool DatabaseControllerSingleton::postStudent(StudentInformation student)
{
    QString queryString;
    QSqlQuery queryToExecute;

    //gross representation of a query
    queryString = ("INSERT INTO students (YSU_ID,NAME_FIRST,NAME_LAST) VALUES ('" +
                   QString::number(student.ID).toLatin1() + "'" + "," + "'" +
                   student.firstName.toLatin1() + "'" + "," + "'" +
                   student.lastName.toLatin1() + "'" + ");");

    qInfo() << queryString;

    return queryToExecute.exec(queryString.toLatin1());
}

bool DatabaseControllerSingleton::postLog(StudentInformation student)
{
    QString queryString;
    QSqlQuery queryToExecute;

    //create a new uid
    int UID = getTableRowCount("logs") + 1;

    queryString = ("INSERT into logs (UID,YSU_ID,TIME_CHECK_IN) VALUES(" +
                  QString::number(UID) + "," + "'" +
                   QString::number(student.ID).toLatin1() + "','" +
                   QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + "');");

    qInfo() << queryString;

    return queryToExecute.exec(queryString.toLatin1());
}

bool DatabaseControllerSingleton::updateLog(StudentInformation student)
{
    QString queryString;
    QSqlQuery queryToExectue;

    //Set up string for pre processing
    QDateTime studentCheckIn = QDateTime::fromString(student.checkInTime);

    queryString = ("UPDATE logs SET TIME_CHECK_OUT = '" +
                   QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")+
                   "' WHERE YSU_ID = " + QString::number(student.ID).toLatin1() +
                   " and TIME_CHECK_IN = '" +
                   studentCheckIn.toString("yyyy-MM-dd hh:mm:ss") + "';");

    qInfo() << queryString;

    return queryToExectue.exec(queryString.toLatin1());
}

bool DatabaseControllerSingleton::connectToDatabase()
{
    database = QSqlDatabase::addDatabase(DATABASE_TYPE);
    database.setHostName(DATABASE_HOST_NAME);
    database.setDatabaseName(DATABASE_NAME);
    database.setUserName(DATABASE_USER_NAME);
    database.setPassword(DATABASE_PASSWORD);
    return database.open();
}

StudentInformation DatabaseControllerSingleton::getStudent(QString ID)
{
    StudentInformation out;


}

/*
 * Checks to see if student exists in the database
 */
bool DatabaseControllerSingleton::checkIfStudentExists(QString ID)
{
    QSqlQuery query;

    query.exec("select * from students where YSU_ID = " + ID.toLatin1() + ";");

    while(query.next())
    {
        return false;
    }

    return true;
}

int DatabaseControllerSingleton::getTableRowCount(QString table)
{
    QSqlQuery query;

    query.exec("SELECT COUNT(*) FROM " + table);
    query.next();

    return query.value(0).toInt();
}
