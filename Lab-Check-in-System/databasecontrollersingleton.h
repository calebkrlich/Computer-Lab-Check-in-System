#ifndef DATABASECONTROLLERSINGLETON_H
#define DATABASECONTROLLERSINGLETON_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include "studentinformation.h"

#define DATABASE_TYPE "QMYSQL"
#define DATABASE_HOST_NAME "localhost"
#define DATABASE_NAME "lab_check_in"
#define DATABASE_USER_NAME "root"
#define DATABASE_PASSWORD "q1w2e3r4"


class DatabaseControllerSingleton
{
public:
    static DatabaseControllerSingleton* getInstance()
    {
        if(!instance)
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

    //Database Connection
    bool connectToDatabase();

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
   static DatabaseControllerSingleton* instance;

    DatabaseControllerSingleton()
    {
        //Anything that needs setup
    }


};

#endif // DATABASECONTROLLERSINGLETON_H
