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
