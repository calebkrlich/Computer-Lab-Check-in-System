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

/*
 * Function: creates the check in window for the user to swipe their
 *           id card to sign in; connects this window to newly created
 *           checkin window
 */
void HomePageView::on_CheckInButton_clicked()
{
    checkInView = new CheckInView(this);
    checkInView->show();

    QObject::connect(checkInView,&CheckInView::EventStudentCheckedIn,this,&HomePageView::newStudentToAdd);
}

/*
 * Function: Create the checkout view for the user to interact by
 *           passing all student info from the student signed-in table
 *           and then connecting the new window to this page
 */
void HomePageView::on_CheckOutButton_clicked()
{
    checkOutView = new CheckOutView(this);
    QList<StudentInformation> listOfStudents;

    for(int i = 0; i < ui->SignedInTable->rowCount();i++)
    {
        qInfo() << "I'm gonna lose my mind";

        StudentInformation tempStudent;
        tempStudent.ID = ui->SignedInTable->item(i,0)->text().toUInt();
        tempStudent.firstName = ui->SignedInTable->item(i,1)->text();
        tempStudent.lastName = ui->SignedInTable->item(i,2)->text();
        tempStudent.checkInTime = ui->SignedInTable->item(i,3)->text();

        qInfo() << "This bug is moving";
        listOfStudents.append(tempStudent);
        qInfo() << "did it get here";
    }

    checkOutView->setTotalRows(ui->SignedInTable->rowCount());
    checkOutView->setStudentsInfomation(listOfStudents);
    checkOutView->buildSelectionTable();
    checkOutView->show();


    //pass list of students to the checkout view
    QObject::connect(checkOutView, &CheckOutView::EventStudentCheckOut,this, &HomePageView::StudentToRemove);
}

/*
 * Function: Creates the event creation window and connects
 *          this view to the newly created event window
 * PARAMS: NULL
 */
void HomePageView::on_AddEventButton_clicked()
{
    addEventView = new AddEventView();
    addEventView->show();

   QObject::connect(addEventView, &AddEventView::newEventCreated, this, &HomePageView::newEventToAdd);
}

/*
 * Function: Adds a new event to the event table
 * PARAMS: event; an event with valid information
 */
void HomePageView::newEventToAdd(EventInformation event)
{
    QList<QString> rowToAdd;

    rowToAdd.append(event.name);
    rowToAdd.append(event.room);
    rowToAdd.append(event.startDateTime.toString());
    rowToAdd.append(event.endDateTime.toString());

    TableOperators::addRow(ui->EventTable,rowToAdd);
}

/*
 * Function: Adds a new student to the signed in table with
 *           the specified infomation
 * PARAMS: student; Object that contains all valid information about
 *                  the student that needs to be signed in
 */
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

/*
 * Function: Removes student from sign-in table with the id specified
 * PARAMS: studentID: id of student to remove
 */
void HomePageView::StudentToRemove(unsigned int studentID)
{
    TableOperators::removeRowWithValue(ui->SignedInTable,QString::number(studentID));   //Delete the student from the row
}
