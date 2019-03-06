#include "checkinview.h"
#include "ui_checkinview.h"
#include "databasecontroller.h"

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
    QString cardText = ui->CardInputLineEdit->text();
    CardInfo parsedCardInfo;

    CardParser cardParser = CardParser();
    bool validCard = cardParser.Parse(cardText.toLatin1());
    parsedCardInfo = cardParser.getInfo();

    if(validCard)
    {

        DatabaseController db("QMYSQL","localhost","lab_check_in","root","q1w2e3r4");           //This needs to be it's own class
        db.openDatabase();

        int uid = db.getRowCount("students") + 1;   //create a unique id from the last row's id

        if(db.postStudent(uid,
                          QString::number(parsedCardInfo.ID),
                          parsedCardInfo.firstName,
                          parsedCardInfo.lastName))
        {
            QMessageBox conformationBox;                    //Creates a notification popup for user
            conformationBox.setText("Student signed-in");
            conformationBox.exec();
            this->close();
        }
        else
        {
            qInfo() << "Database error";
        }
    }

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

