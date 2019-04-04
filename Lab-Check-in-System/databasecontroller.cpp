#include "databasecontroller.h"
#include <QDebug>


/*
 * Function: CONSTRUCTOR; sets up all properties of the database connection
 *
 * PARAMS:  databaseType; database systems being used (MYSQL, PostGres, SQLLite, etc), for loading drivers
 *          hostName; the address of database (localhost, 255.255.255, etc.)
 *          databaseName; Schema you are trying to access
 *          userName/password; Credentials to access the database
 */
DatabaseController::DatabaseController(QString databaseType, QString hostName, QString databaseName, QString userName, QString password)
{
    database = QSqlDatabase::addDatabase(databaseType);
    database.setHostName(hostName);
    database.setDatabaseName(databaseName);
    database.setUserName(userName);
    database.setPassword(password);
    database.open();
}

/*
 * Function: Opens the database connection
 */
bool DatabaseController::openDatabase()
{
    return database.open();
}

/*
 * Function: fetchs the total number of rows from the table
 *           specified in the database
 *
 * PARAMS: table; Name of the table in the database
 * RETURNS: total number of rows
 */
int DatabaseController::getRowCount(QString table)
{
   QString queryString;
   QSqlQuery queryToReturn;

   queryString = ("SELECT COUNT(*) FROM " + table.toLatin1());

   queryToReturn.exec(queryString.toLatin1());

   queryToReturn.next();    //Must call in order to get query result

   return queryToReturn.value(0).toInt();   //convert the returned string to int
}


/*
 * Function: fetches row from the student table from the ID specified
 *
 * PARAMS: ID; id of student attempting to be fetched
 *
 * RETURNS: QSQLQUERY; the results from the attempted fetch
 */
QSqlQuery DatabaseController::getStudentFromID(QString ID)
{
    QString queryString;
    QSqlQuery queryToReturn;

    queryString = ("select * from students where YSU_ID = " + ID.toLatin1());

    queryToReturn.exec(queryString.toLatin1());
    return queryToReturn;
}

/*
 * Function: fetches a log with the UID value specified
 * PARAMS: UID; Unique identifier to look for
 * RETURNS: QSqlQuery; the results from the attempted fetch
 */
QSqlQuery DatabaseController::getLog(QString UID)
{
    QString queryString;
    QSqlQuery queryToReturn;

    queryString = ("SELECT UID FROM LOGS WHERE UID = " + UID.toLatin1());

    queryToReturn.exec(queryString.toLatin1());

    return queryToReturn;
}

/*
 * Function: Inserts a new student into the student table with the specifed information
 * PARAMS: YSUID; id of student
 *         firstName; student's firstname
 *         lastName; student's lastname
 *
 * RETURNS: BOOLEAN; if insert was sucessful
 */
bool DatabaseController::postStudent(QString YSUID, QString firstName, QString lastName)
{
    QString queryString;
    QSqlQuery queryToExecute;

    //gross representation of a query
    queryString = ("INSERT INTO students (YSU_ID,NAME_FIRST,NAME_LAST) VALUES ('" +
                   YSUID.toLatin1() + "'" + "," + "'" +
                   firstName.toLatin1() + "'" + "," + "'" +
                   lastName.toLatin1() + "'" + ");");

    qInfo() << queryString;

    return queryToExecute.exec(queryString.toLatin1());
}

/*
 * Function: Inserts a new log in the logs table with specifed values
 *
 * PARAMS: UID; unique identifier for the log
 *         YSUID; student's id number
 *         signInTime; time the student signed in
 *
 * RETURNS: BOOLEAN; if insert was sucessful
 */
bool DatabaseController::postLog(int UID, QString YSUID, QDateTime signInTime)
{
    QString queryString;
    QSqlQuery queryToExecute;

    queryString = ("INSERT into logs (UID,YSU_ID,TIME_CHECK_IN) VALUES(" +
                  QString::number(UID) + "," + "'" +
                   YSUID.toLatin1() + "','" +
                   signInTime.toString("yyyy-MM-dd hh:mm:ss") + "');");

    qInfo() << queryString;

    return queryToExecute.exec(queryString.toLatin1());
}

/*
 * Function: updates the row in the log file where the YSUID and signin-time match
 *           parameters passed
 *
 * PARAMS: YSUID; id of student in log to update
 *         signInTime; time of student signed in
 *
 *         signOutTime; time that student signed out
 *
 * RETURN: if the update was sucessful
 */
bool DatabaseController::updateLog(QString YSUID, QDateTime signInTime, QDateTime signOutTime)
{
    QString queryString;
    QSqlQuery queryToExectue;

    queryString = ("UPDATE logs SET TIME_CHECK_OUT = '" +
                   signOutTime.toString("yyyy-MM-dd hh:mm:ss")+
                   "' WHERE YSU_ID = " + YSUID.toLatin1() +
                   " and TIME_CHECK_IN = '" +
                   signInTime.toString("yyyy-MM-dd hh:mm:ss") + "';");

    qInfo() << queryString;

    return queryToExectue.exec(queryString.toLatin1());
}
