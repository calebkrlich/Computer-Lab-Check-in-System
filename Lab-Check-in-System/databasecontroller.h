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
   DatabaseController(QString databaseType, QString hostName, QString databaseName, QString userName, QString password);

   bool openDatabase();
   bool closeDatabase();


   int getRowCount(QString table);

   QSqlQuery getStudentFromID(QString ID);
   bool postStudent(int UID, QString YSUID, QString firstName,QString lastName);
   QSqlQuery getLog(QString ID);
};

#endif // DATABASECONTROLLER_H
