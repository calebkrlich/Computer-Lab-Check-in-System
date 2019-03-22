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
    for(int i = 0; i < totalRows; i++)
    {
        if(studentCheckBoxSelections[i]->isChecked())
        {
            emit(students[i].ID);
        }
    }
}
