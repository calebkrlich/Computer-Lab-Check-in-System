#include "databasecontrollersingleton.h"
#include "QDebug"

DatabaseControllerSingleton* DatabaseControllerSingleton::instance = nullptr;

bool DatabaseControllerSingleton::postStudent(StudentInformation student)
{
    QString queryString;
    QSqlQuery queryToExecute;

    //gross representation of a query
    queryString = ("INSERT INTO students (YSU_ID,NAME_FIRST,NAME_LAST) VALUES ('" +
                   student.ID.toLatin1() + "'" + "," + "'" +
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
                   student.ID.toLatin1() + "','" +
                   QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + "');");

    qInfo() << queryString;

    return queryToExecute.exec(queryString.toLatin1());
}

bool DatabaseControllerSingleton::postEvent(EventInformation event)
{
    QSqlQuery query;
    QString queryString;

    int UID = getTableRowCount("events") + 1;

    queryString = ("insert into events (UID,NAME,START_TIME,END_TIME,ROOM_NUM) values(" +
                   QString::number(UID) + "," +
                   "'" + event.name + "'," +
                   "'" + event.startDateTime.toString("yyyy-MM-dd hh:mm:ss") + "'," +
                   "'" + event.endDateTime.toString("yyyy-MM-dd hh:mm:ss") + "'," +
                   "'" + event.room + "');");


    return query.exec(queryString);
}

bool DatabaseControllerSingleton::updateLog(StudentInformation student)
{
    QString queryString;
    QSqlQuery queryToExectue;

    //Set up string for pre processing
    QDateTime studentCheckIn = QDateTime::fromString(student.checkInTime);

    queryString = ("UPDATE logs SET TIME_CHECK_OUT = '" +
                   QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")+
                   "' WHERE YSU_ID = " + student.ID.toLatin1() +
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


QList<StudentInformation> DatabaseControllerSingleton::getStudentsCheckedIn()
{
    QList<StudentInformation> listOfStudents;
    QSqlQuery query;

    query.exec("SELECT students.YSU_ID, students.NAME_FIRST, students.NAME_LAST, logs.TIME_CHECK_IN from students,logs where logs.TIME_CHECK_OUT is null and logs.YSU_ID = students.YSU_ID;");

    while(query.next())
    {
        StudentInformation tempStudent;

        tempStudent.ID = query.value(0).toString();
        tempStudent.firstName = query.value(1).toString();
        tempStudent.lastName = query.value(2).toString();

        QStringList unformattedTime = query.value(3).toString().split("T");
        unformattedTime[1].truncate(8);
        QDateTime timeToFormat = QDateTime::fromString((unformattedTime[0] + " " + unformattedTime[1]),"yyyy-MM-dd hh:mm:ss");

        tempStudent.checkInTime = timeToFormat.toString();
        listOfStudents.append(tempStudent);
    }

    return listOfStudents;
}

QList<EventInformation> DatabaseControllerSingleton::getActiveEvents()
{
    QList<EventInformation> eventsToReturn;

    QSqlQuery query;

    query.exec("select * from events where END_TIME > curtime();");

    while(query.next())
    {
        EventInformation tempEvent;

        QStringList unformattedTime = query.value(2).toString().split("T");
        unformattedTime[1].truncate(8);
        tempEvent.startDateTime = QDateTime::fromString(unformattedTime[0] + " " + unformattedTime[1], "yyyy-MM-dd hh:mm:ss");

        unformattedTime = query.value(3).toString().split("T");
        unformattedTime[1].truncate(8);
        tempEvent.endDateTime = QDateTime::fromString(unformattedTime[0] + " " + unformattedTime[1], "yyyy-MM-dd hh:mm:ss");

        tempEvent.room = query.value(4).toString();
        tempEvent.name = query.value(1).toString();
        eventsToReturn.append(tempEvent);
    }

    return eventsToReturn;
}

int DatabaseControllerSingleton::getTableRowCount(QString table)
{
    QSqlQuery query;

    query.exec("SELECT COUNT(*) FROM " + table);
    query.next();

    return query.value(0).toInt();
}

QList<QString> DatabaseControllerSingleton::getLogs(QString fromTime, QString toTime)
{
    QList<QString> listToReturn;
    QSqlQuery query;

    query.exec("SELECT logs.YSU_ID,students.NAME_FIRST,students.NAME_LAST,logs.TIME_CHECK_IN,logs.TIME_CHECK_OUT FROM lab_check_in.logs,lab_check_in.students where logs.YSU_ID = students.YSU_ID and logs.TIME_CHECK_IN between '" + fromTime + "' and '" + toTime + "';");

    while(query.next())
    {
        QString temp;

        temp += query.value(0).toString() + ",";
        temp += query.value(1).toString() + ",";
        temp += query.value(2).toString() + ",";
        temp += query.value(3).toString();

        listToReturn.append(temp);
    }
    return listToReturn;
}

/*
 * Checks to see if student exists in the database
 */
bool DatabaseControllerSingleton::checkIfStudentExists(QString ID)
{
    QSqlQuery query;

    query.exec("select * from students where YSU_ID = " + ID.toLatin1() + ";");

    if(query.next())
    {
        qInfo() << query.value(0).toString();
        return true;
    }

    return false;
}

bool DatabaseControllerSingleton::checkIfStudentSignedIn(QString ID)
{
    QSqlQuery query;

    query.exec("select * from logs where TIME_CHECK_OUT is null and YSU_ID = '" + ID.toLatin1() + "';");

    if(query.next())    //if we get something back, they are signed in
        return true;
    return false;
}

bool DatabaseControllerSingleton::checkAuthorizer(QString ID, QString PIN)
{
    QSqlQuery query;

    query.exec("select * from faculty where YSU_ID = '" + ID +
               "' and PIN_NUM = '" + PIN + "';");

    qInfo() << ("select * from faculty where YSU_ID = '" + ID +
               "' and PIN_NUM = '" + PIN + "';");

    if(query.next())
        return true;
    return false;
}
