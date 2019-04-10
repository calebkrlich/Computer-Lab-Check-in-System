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


    //NO NEED FOR CARD INFO Stuct, just use the StudentInfomation
    StudentInformation parsedCardInfo;

    CardParser cardParser = CardParser();
    bool validCard = cardParser.Parse(cardText.toLatin1());
    parsedCardInfo = cardParser.getInfo();


    if(validCard)
    {
        //if the student is a first time check in
        if(!DatabaseControllerSingleton::getInstance()->
                checkIfStudentExists(QString::number(parsedCardInfo.ID)))
        {
            //add them to the student database
            DatabaseControllerSingleton::getInstance()->postStudent(parsedCardInfo);
        }

        /*
        DatabaseController db("QMYSQL","localhost","lab_check_in","root","q1w2e3r4");           //This needs to be it's own class
        qInfo() << db.openDatabase();

        //Add student to database if they haven't been added before
        QSqlQuery result = db.getStudentFromID(QString::number(parsedCardInfo.ID));
        bool newStudent = true;

        while(result.next())
        {
            qInfo() << result.value(0);
            newStudent = false;
        }

        if(newStudent)
        {
            qInfo() << "NEW STUDENT";
            db.postStudent(QString::number(parsedCardInfo.ID),
                           parsedCardInfo.firstName,
                           parsedCardInfo.lastName);
        }



        int uid = db.getRowCount("logs") + 1;   //create a unique id from the last row's id
        if(db.postLog(uid, QString::number(parsedCardInfo.ID), QDateTime::currentDateTime()))
        {
            StudentInformation studentInfoToEmit;
            studentInfoToEmit.ID = parsedCardInfo.ID;
            studentInfoToEmit.firstName = parsedCardInfo.firstName;
            studentInfoToEmit.lastName = parsedCardInfo.lastName;
            studentInfoToEmit.birthday = parsedCardInfo.birthday;
            studentInfoToEmit.middleInitial = parsedCardInfo.middleInitial;

            studentInfoToEmit.checkInTime = "HELP ME"; //Testing weird bug
            studentInfoToEmit.checkOutTime = "WEAD";

            emit(EventStudentCheckedIn(studentInfoToEmit)); //emit signal to update homepage UI

            QMessageBox conformationBox;                    //Creates a notification popup for user
            conformationBox.setText("Student signed-in");
            conformationBox.exec();
            this->close();
        }
        */
        if(DatabaseControllerSingleton::getInstance()->postLog(parsedCardInfo))
        {
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

