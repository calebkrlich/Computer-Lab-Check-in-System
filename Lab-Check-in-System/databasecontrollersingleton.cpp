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

StudentInformation DatabaseControllerSingleton::getStudent(QString ID)
{
    StudentInformation out;


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

int DatabaseControllerSingleton::getTableRowCount(QString table)
{
    QSqlQuery query;

    query.exec("SELECT COUNT(*) FROM " + table);
    query.next();

    return query.value(0).toInt();
}
