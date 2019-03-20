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

void CheckOutView::setStudentsInfomation(QList<QString> info)
{
    students = info;
}

/*
 *TODO:
 * -Add infomation about the student
 * -relay that infomation back to homepage view
 */

void CheckOutView::buildSelectionTable()
{
    for(int i = 0; i < totalRows; i++)
    {
        QCheckBox *newCheckBox = new QCheckBox;                 //create new check boxes for selection
        QLabel *newLabel = new QLabel;
        newLabel->setText(students[i]);
        studentCheckBoxSelections.append(newCheckBox);          //add button to keep track of them
        ui->SelectionGridLayout->addWidget(newCheckBox,i,0);    //add checkbox to grid layout
        ui->SelectionGridLayout->addWidget(newLabel,i,1);
    }
}

void CheckOutView::on_CancelButton_clicked()
{
    this->close();
}

void CheckOutView::on_CheckOutButton_clicked()
{

}
