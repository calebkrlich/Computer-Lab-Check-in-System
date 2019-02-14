#include "checkinview.h"
#include "ui_checkinview.h"


CheckInView::CheckInView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckInView)
{
    ui->setupUi(this);
}

CheckInView::~CheckInView()
{
    delete ui;
}

void CheckInView::on_CheckInButton_clicked()
{
    QString cardInfoText = ui->CardInputLineEdit->text();

    CardParser cardParser = CardParser();
    bool validCard = cardParser.Parse(cardInfoText.toLatin1());

    if(validCard)
        cardParser.printInfo();
    else
    {
        ui->SwipeCardLabel->setText("Invalid Card, Swipe Again");
        ui->CardInputLineEdit->clear();
    }
}

void CheckInView::on_CancelButton_clicked()
{
    this->close();
}

void CheckInView::on_ManualCheckInButton_clicked()
{
    this->close();
    checkInManualView = new CheckIManualView(this);
    checkInManualView->show();
}
