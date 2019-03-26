#include "checkoutview.h"
#include "ui_checkoutview.h"

CheckOutView::CheckOutView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckOutView)
{
    ui->setupUi(this);
}

CheckOutView::~CheckOutView()
{
    delete ui;
}

void CheckOutView::setTotalRows(int amount)
{
    totalRows = amount;
}

void CheckOutView::setStudentsInfomation(QList<StudentInformation> studentsToAdd)
{
    students = studentsToAdd;
}

/*
 *TODO:
 * -Add infomation about the student (ID,FirstName,LastName)
 * -relay that infomation back to homepage view
 */

void CheckOutView::buildSelectionTable()
{

    for(int i = 0; i < totalRows; i++)
    {
        QCheckBox *newCheckBox = new QCheckBox;                 //create new check boxes for selection
        QLabel *newIDLabel = new QLabel;
        QLabel *newFirstnameLabel = new QLabel;
        QLabel *newLastnameLabel = new QLabel;


        newIDLabel->setText(QString::number(students[i].ID));
        newFirstnameLabel->setText(students[i].firstName);
        newLastnameLabel->setText(students[i].lastName);

        studentCheckBoxSelections.append(newCheckBox);          //add button to keep track of them
        ui->SelectionGridLayout->addWidget(newCheckBox,i,0);    //add checkbox to grid layout
        ui->SelectionGridLayout->addWidget(newIDLabel,i,1);
        ui->SelectionGridLayout->addWidget(newFirstnameLabel,i,2);
        ui->SelectionGridLayout->addWidget(newLastnameLabel,i,3);
    }
}

void CheckOutView::on_CancelButton_clicked()
{
    this->close();
}

void CheckOutView::on_CheckOutButton_clicked()
{
    QList<StudentInformation> studentsSignedOut;

    for(int i = 0; i < totalRows; i++)
    {
        if(studentCheckBoxSelections[i]->isChecked())
        {
            studentsSignedOut.append(students[i]);

            qInfo() << students[i].ID;
            emit(EventStudentCheckOut(students[i].ID));
        }
    }

    QString messageBoxString = "Students Signed Out: \n";

    for(int i = 0; i < studentsSignedOut.count(); i++)
    {
        messageBoxString.append(QString::number(studentsSignedOut[i].ID).toLatin1() + ": ");
        messageBoxString.append(studentsSignedOut[i].firstName + ",");
        messageBoxString.append(studentsSignedOut[i].lastName + ": ");
        messageBoxString.append("TIME_SIGNED_OUT \n");
    }


    QMessageBox comformationBox;
    comformationBox.setText(messageBoxString);
    comformationBox.setWindowTitle("");
    comformationBox.exec();
    this->close();
}
