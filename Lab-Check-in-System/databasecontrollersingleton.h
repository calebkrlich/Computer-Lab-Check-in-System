#ifndef DATABASECONTROLLERSINGLETON_H
#define DATABASECONTROLLERSINGLETON_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include "studentinformation.h"

#define DATABASE_TYPE "MYSQL"
#define DATABASE_HOST_NAME "localhost"
#define DATABASE_NAME "lab_check_in"
#define DATABASE_USER_NAME "root"
#define DATABASE_PASSWORD "q1w2e3r4"


class DatabaseControllerSingleton
{
public:
    static DatabaseControllerSingleton* getInstance()
    {
        if(instance == nullptr)
        {
            instance = new DatabaseControllerSingleton();
            return instance;
        }
        else
            return instance;
    }

    ~DatabaseControllerSingleton()
    {
        database.close();
    }

    //Posters
    bool postStudent(StudentInformation student);
    bool postLog();

    //Updaters
    bool updateLog();

    //Getters
    StudentInformation getStudent(QString ID);
    StudentInformation getStudent(QString firstName, QString lastName);

    int getTableRowCount(QString table);

private:
   QSqlDatabase database;

    DatabaseControllerSingleton()
    {
        database = QSqlDatabase::addDatabase(DATABASE_TYPE);
        database.setHostName(DATABASE_HOST_NAME);
        database.setDatabaseName(DATABASE_NAME);
        database.setUserName(DATABASE_USER_NAME);
        database.setPassword(DATABASE_PASSWORD);
        database.open();
    }
    static DatabaseControllerSingleton* instance;

};

#endif // DATABASECONTROLLERSINGLETON_H
