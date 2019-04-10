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

/*
 * Function: Fetches the lineEdit with the swiped card data,
 *           checks to see if card is valid,
 *              IF VALID CARD: check to see if the student that is being check in is a new student
 *                  IF NEW STUDENT: insert student into the students table
 *
 */
void CheckInView::on_CheckInButton_clicked()
{
    QString cardText = ui->CardInputLineEdit->text();

    StudentInformation parsedCardInfo;

    CardParser cardParser = CardParser();
    bool validCard = cardParser.Parse(cardText.toLatin1());
    parsedCardInfo = cardParser.getInfo();


    if(validCard)
    {
        //if the student is a first time check in
        if(!DatabaseControllerSingleton::getInstance()->
                checkIfStudentExists(parsedCardInfo.ID))
        {
            //add them to the student database
            DatabaseControllerSingleton::getInstance()->postStudent(parsedCardInfo);
        }

        //if the student is not signed in
        if(!DatabaseControllerSingleton::getInstance()->checkIfStudentSignedIn(parsedCardInfo.ID))
        {
            if(DatabaseControllerSingleton::getInstance()->postLog(parsedCardInfo))
            {
                parsedCardInfo.checkInTime = QDateTime::currentDateTime().toString();
                emit(EventStudentCheckedIn(parsedCardInfo));
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
            QMessageBox alreadySignedInMessageBox;
            alreadySignedInMessageBox.setText("Already signed in!");
            alreadySignedInMessageBox.exec();
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
    checkInManualView = new CheckInManualView(this);
    checkInManualView->show();

    //Tell the homepage to connect and listen to new page
    emit(EventConnectToNewManualView(checkInManualView));
}

