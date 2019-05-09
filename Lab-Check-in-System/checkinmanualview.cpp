#include "checkinmanualview.h"
#include "ui_checkinmanualview.h"
#include "checkinview.h"

//TODO:
//Fix case where the logout doesn't remove student from table
//Problem: YSU ID doesn't match the one on student table
//Some how still logs you out

CheckInManualView::CheckInManualView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckInManualView)
{
    ui->setupUi(this);
}

CheckInManualView::~CheckInManualView()
{
    delete ui;
}

void CheckInManualView::on_CheckInButton_clicked()
{
    StudentInformation student;

    //get all the student infomation
    student.ID = ui->ySUIDLineEdit->text();
    student.firstName = ui->nameLineEdit->text().toUpper();
    student.lastName = ui->lastNameLineEdit->text().toUpper();
    student.birthday = ui->birthdayDateEdit->date().toString("yyyy-MM-dd");

    //check to see if the student exists in the file
    if(DatabaseControllerSingleton::getInstance()->
            checkIfStudentExists(student))
    {
        if(!DatabaseControllerSingleton::getInstance()->checkIfStudentSignedIn(student.ID))
        {
            if(DatabaseControllerSingleton::getInstance()->postLog(student))
            {
                student.checkInTime = QDateTime::currentDateTime().toString();
                emit(EventStudentCheckedIn(student));

                QMessageBox conformationBox;
                conformationBox.setText("Student signed-in");
                conformationBox.exec();
                this->close();
            }
            else {
                QMessageBox warningBox;
                warningBox.setText("Database couldn't be accessed");
                warningBox.exec();
            }
         }
        else {
            QMessageBox signedInMsgBox;
            signedInMsgBox.setText("Student already signed-in");
            signedInMsgBox.exec();
        }
    }
    else {
        QMessageBox noStudentWarningBox;
        noStudentWarningBox.setText("No student exists under this name");
        noStudentWarningBox.exec();
    }
}

void CheckInManualView::on_CancelButton_clicked()
{
    this->close();
}

