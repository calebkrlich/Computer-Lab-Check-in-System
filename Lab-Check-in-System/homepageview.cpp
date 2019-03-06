#include "homepageview.h"
#include "ui_homepageview.h"
#include "checkinview.h"
#include "databasecontroller.h"
#include "studentinformation.h"
#include "tablemethods.h"

#include <QtSql>

HomePageView::HomePageView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomePageView)
{
    ui->setupUi(this);
}

HomePageView::~HomePageView()
{
    delete ui;
}

void HomePageView::on_CheckInButton_clicked()
{
    checkInView = new CheckInView(this);
    checkInView->show();
}

void HomePageView::on_CheckOutButton_clicked()
{
    checkOutView = new CheckOutView(this);
    checkOutView->show();
}

void HomePageView::on_AddEventButton_clicked()
{

    /*
    //create a new database connection
    DatabaseController db("QMYSQL","localhost","lab_check_in","root","q1w2e3r4");

    //open the database
    db.openDatabase();

    //fetch rows from the database
    QSqlQuery query = db.getStudentFromID("000001");

    //cycle through the rows
    while(query.next())
    {
        /*
        int uid = query.value(0).toInt();
        QString YSU_ID = query.value(1).toString();
        qDebug() << uid << YSU_ID;

        QList<QString> rowToAdd;

        rowToAdd.append(query.value(0).toString());
        rowToAdd.append(query.value(1).toString());

        TableOperators::addRow(ui->tableWidget,rowToAdd);
    }

    */

    addEventView = new AddEventView();
    addEventView->show();

   QObject::connect(addEventView, &AddEventView::newEventCreated, this, &HomePageView::newEventToAdd);

}

//Testing function for show functionally of signed in student layout
void HomePageView::on_AddSignedInButton_clicked()
{
    StudentInformation newStudent;
    newStudent.status = "Student";
    newStudent.firstName = "John";
    newStudent.lastName = "Doe";

    QList<QString> valuesToAdd;

    valuesToAdd.append(newStudent.firstName);
    valuesToAdd.append(newStudent.lastName);

    TableOperators::addRow(ui->SignedInTable,valuesToAdd);

    studentsCheckedIn = ui->SignedInTable->rowCount();      //Fetch the row count for signaling
}

void HomePageView::newEventToAdd(EventInformation event)
{
    QList<QString> rowToAdd;

    rowToAdd.append(event.name);
    rowToAdd.append(event.room);
    rowToAdd.append(event.startDateTime.toString());
    rowToAdd.append(event.endDateTime.toString());

    TableOperators::addRow(ui->EventTable,rowToAdd);
}
