#include "homepageview.h"
#include "ui_homepageview.h"
#include "checkinview.h"
#include "studentinformation.h"
#include "tablemethods.h"
#include "databasecontrollersingleton.h"

#include <QtSql>
#include <QDateTime>

HomePageView::HomePageView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomePageView)
{
    ui->setupUi(this);

    DatabaseControllerSingleton* db = DatabaseControllerSingleton::getInstance();
    QList<StudentInformation> studentsSignedIn = db->getStudentsCheckedIn();

    for(int i = 0; i < studentsSignedIn.length(); i++)
    {
        newStudentToAdd(studentsSignedIn[i]);
    }
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
    QObject::connect(checkInView, &CheckInView::EventConnectToNewManualView, this, &HomePageView::EventNewWindowToConnect);
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

        StudentInformation tempStudent;
        tempStudent.ID = ui->SignedInTable->item(i,0)->text();
        tempStudent.firstName = ui->SignedInTable->item(i,1)->text();
        tempStudent.lastName = ui->SignedInTable->item(i,2)->text();
        tempStudent.checkInTime = ui->SignedInTable->item(i,3)->text();

        listOfStudents.append(tempStudent);
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

    rowToAdd.append(student.ID);
    rowToAdd.append(student.firstName);
    rowToAdd.append(student.lastName);
    rowToAdd.append(student.checkInTime);

    qInfo() << student.checkInTime;

    TableOperators::addRow(ui->SignedInTable,rowToAdd);
}

/*
 * Function: Removes student from sign-in table with the id specified
 * PARAMS: studentID: id of student to remove
 */
void HomePageView::StudentToRemove(QString studentID)
{
    TableOperators::removeRowWithValue(ui->SignedInTable,studentID);   //Delete the student from the row
}

void HomePageView::EventNewWindowToConnect(CheckInManualView* newView)
{
    QObject::connect(newView,&CheckInManualView::EventStudentCheckedIn,this,&HomePageView::newStudentToAdd);
}
