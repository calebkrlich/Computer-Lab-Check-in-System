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
    bool studentAuthorized = false;

    parsedCardInfo = cardParser.getInfo();


    //TODO: refactor to turn the database calls to one method
    //      so it can be reused on other parts
    if(validCard)
    {
        //if the student is a first time check in
        if(!DatabaseControllerSingleton::getInstance()->
                checkIfStudentExists(parsedCardInfo.ID))
        {
            //Open up view for authorization
            authorizationView = new AuthorizationView;
            authorizationView->setStudent(parsedCardInfo);
            authorizationView->setupUI();
            authorizationView->exec();
            studentAuthorized = authorizationView->result();
            qInfo() << studentAuthorized;

            //add them to the student database
            //DatabaseControllerSingleton::getInstance()->postStudent(parsedCardInfo);
        }
        else {
            studentAuthorized = true;
        }

        //if the student is not signed in
        if(!DatabaseControllerSingleton::getInstance()->
                checkIfStudentSignedIn(parsedCardInfo.ID) &&
                studentAuthorized)
        {
            if(DatabaseControllerSingleton::getInstance()->postLog(parsedCardInfo)) //Student was sucessfully added to database.
            {
                parsedCardInfo.checkInTime = QDateTime::currentDateTime().toString();
                emit(EventStudentCheckedIn(parsedCardInfo));

                QMessageBox conformationBox;                    //Creates a notification popup for user
                conformationBox.setText("Student was sucessfully signed-in");
                conformationBox.setWindowTitle("Sucess!");
                conformationBox.setIcon(QMessageBox::Information);
                conformationBox.exec();
                this->close();
            }
            else    //couldn't access database
            {
                QMessageBox databaseErrorMessageBox;
                databaseErrorMessageBox.setText("There was a problem accessing database.");
                databaseErrorMessageBox.setWindowTitle("Warning!");
                databaseErrorMessageBox.setIcon(QMessageBox::Critical);
                databaseErrorMessageBox.setModal(true);
                QApplication::beep();
                databaseErrorMessageBox.exec();
            }
        }
        else //Student was already signed in
        {
            if(studentAuthorized)
            {
                QMessageBox alreadySignedInMessageBox;
                alreadySignedInMessageBox.setText("Already signed in!");
                alreadySignedInMessageBox.setWindowTitle("Warning!");
                alreadySignedInMessageBox.setIcon(QMessageBox::Warning);
                QApplication::beep();
                alreadySignedInMessageBox.exec();
                ui->CardInputLineEdit->clear();
            }

            else
            {
                QMessageBox notAuthorizedMessageBox;
                notAuthorizedMessageBox.setText("Student was not authorized to sign in");
                notAuthorizedMessageBox.setWindowTitle("Warning!");
                notAuthorizedMessageBox.setIcon(QMessageBox::Warning);
                notAuthorizedMessageBox.exec();
                ui->CardInputLineEdit->clear();
            }
        }
    }
    else    //Problem reading card/ invalid card
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

