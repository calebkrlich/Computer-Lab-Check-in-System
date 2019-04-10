#include "checkimanualview.h"
#include "ui_checkimanualview.h"

CheckIManualView::CheckIManualView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckIManualView)
{
    ui->setupUi(this);
}

CheckIManualView::~CheckIManualView()
{
    delete ui;
}

void CheckIManualView::on_CheckInButton_clicked()
{
    StudentInformation student;

    //get all the student infomation
    student.ID = ui->ySUIDLineEdit->text().toInt();
    student.firstName = ui->nameLineEdit->text().toUpper();
    student.lastName = ui->lastNameLineEdit->text().toUpper();
    student.birthday = ui->birthdayDateEdit->date().toString("MM/dd/yyyy");

    //check to see if the student exists in the file
    if(DatabaseControllerSingleton::getInstance()->
            checkIfStudentExists(QString::number(student.ID)))
    {
        if(DatabaseControllerSingleton::getInstance()->postLog(student))
        {
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
        QMessageBox noStudentWarningBox;
        noStudentWarningBox.setText("No student exists under this name");
        noStudentWarningBox.exec();
    }


}
