#include "addeventview.h"
#include "ui_addeventview.h"

AddEventView::AddEventView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEventView)
{
    ui->setupUi(this);
}

AddEventView::~AddEventView()
{
    delete ui;
}

void AddEventView::on_AddEventButton_clicked()
{

}

void AddEventView::on_CancelButton_clicked()
{
    this->close();
}
