#include "databasecontrollersingleton.h"
#include "QDebug"

DatabaseControllerSingleton* DatabaseControllerSingleton::instance = nullptr;

bool DatabaseControllerSingleton::postStudent(StudentInformation student)
{
    qInfo() << "Posting student";
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
