#ifndef DATABASECONTROLLER_H
#define DATABASECONTROLLER_H
#include <QString>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
class DatabaseController
{
private:
    QSqlDatabase database;

public:
    DatabaseController(QString dbName, QString hostName, QString port, QString username, QString password);
    DatabaseController();

    void getStudent(QString ID);
    void getLog(QString ID);
};

#endif // DATABASECONTROLLER_H
