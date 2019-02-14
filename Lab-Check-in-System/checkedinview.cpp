#include "checkedinview.h"
#include "ui_checkedinview.h"

CheckedInView::CheckedInView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckedInView)
{
    ui->setupUi(this);
}

CheckedInView::~CheckedInView()
{
    delete ui;
}
