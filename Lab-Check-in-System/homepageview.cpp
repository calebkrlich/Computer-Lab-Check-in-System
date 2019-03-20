#include "homepageview.h"
#include "ui_homepageview.h"
#include "checkinview.h"
#include "databasecontroller.h"
#include "studentinformation.h"
#include "tablemethods.h"

#include <QtSql>
#include <QDateTime>

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

    QObject::connect(checkInView,&CheckInView::EventStudentCheckedIn,this,&HomePageView::newStudentToAdd);
}

void HomePageView::on_CheckOutButton_clicked()
{
    checkOutView = new CheckOutView(this);
    QList<QString> fakeList = {"Joe","Doe","Frank"};

    checkOutView->setTotalRows(ui->SignedInTable->rowCount());
    checkOutView->setStudentsInfomation(fakeList);
    checkOutView->buildSelectionTable();
    checkOutView->show();


}

void HomePageView::on_AddEventButton_clicked()
{
    addEventView = new AddEventView();
    addEventView->show();

   QObject::connect(addEventView, &AddEventView::newEventCreated, this, &HomePageView::newEventToAdd);
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

void HomePageView::newStudentToAdd(StudentInformation student)
{
    QList<QString> rowToAdd;
    QDateTime timeCheckedIn;

    rowToAdd.append(QString::number(student.ID));
    rowToAdd.append(student.firstName);
    rowToAdd.append(student.lastName);
    rowToAdd.append(timeCheckedIn.currentDateTime().toString());

    TableOperators::addRow(ui->SignedInTable,rowToAdd);
}
