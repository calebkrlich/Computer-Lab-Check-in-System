#include "homepageview.h"
#include "ui_homepageview.h"
#include "checkinview.h"
#include "databasecontroller.h"
#include "studentinformation.h"

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
    qInfo("Run Check-In Routine");

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
    //This needs to change when i get the database working
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("My DB");
    db.setUserName("root");
    db.setPassword("q1w2e3r4");

    if(db.open())
    {
        QSqlQuery query(db);
        query.exec("SELECT UID FROM LOGS WHERE UID = 1");
    }

}

//Testing function for show functionally of signed in student layout
void HomePageView::on_AddSignedInButton_clicked()
{
    StudentInformation newStudent;
    newStudent.status = "Student";
    newStudent.firstName = "John";
    newStudent.lastName = "Doe";

    QLabel *studentFirstName = new QLabel("FirstName");
    QLabel *studentLastName = new QLabel("LastName");
    QLabel *studentYID = new QLabel("YSU ID");

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    //ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,9);
}
