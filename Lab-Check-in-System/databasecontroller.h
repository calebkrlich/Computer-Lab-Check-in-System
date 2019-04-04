#ifndef DATABASECONTROLLER_H
#define DATABASECONTROLLER_H
#include <QString>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QDateTime>

class DatabaseController
{
private:
    QSqlDatabase database;

public:
   DatabaseController(QString databaseType,
                      QString hostName,
                      QString databaseName,
                      QString userName,
                      QString password);

   bool openDatabase();
   bool closeDatabase();

   //Fetches all rows in table specified, used for Unique ID creation
   int getRowCount(QString table);

   //Fetches student from the their YSUID
   QSqlQuery getStudentFromID(QString YSUID);

   bool postStudent(QString YSUID,
                    QString firstName,
                    QString lastName);

   /*
    * Creates a new log when every a student first signs in
    * Works under the intention that a new log will be updated
    * when the student signs out
    */
   bool postLog(int UID,
                QString YSUID,
                QDateTime signInTime);

   //Updates the log when the student signs out
   bool updateLog(QString YSUID,
                  QDateTime signInTime,
                  QDateTime signOutTime);

   //Fetchs log based off of UID
   QSqlQuery getLog(QString UID);

};

#endif // DATABASECONTROLLER_H
