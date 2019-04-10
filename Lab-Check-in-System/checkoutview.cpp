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


/*
 * Function: Sets the number of rows that need to be displayed
 * PARAMS: amount; number of rows
 */
void CheckOutView::setTotalRows(int amount)
{
    qInfo()<<"WFK";

    totalRows = amount;
}
/*
 * Function: sets the students that are going to be displayed for signing out
 *
 * PARAMS: studentsToAdd; list of students and their corresponding information that are
 *                          elegiable for signing out
 */
void CheckOutView::setStudentsInfomation(QList<StudentInformation> studentsToAdd)
{
    qInfo()<<"IDK";
    students = studentsToAdd;
}


/*
 * Function: Builds and inserts the UI elements for users to select to signout students
 *
 */
void CheckOutView::buildSelectionTable()
{
    for(int i = 0; i < totalRows; i++)
    {
        qInfo() << "Reached Start Of table build";
        QCheckBox *newCheckBox = new QCheckBox;                 //create new check boxes for selection

        QLabel *newIDLabel = new QLabel;
        QLabel *newFirstnameLabel = new QLabel;
        QLabel *newLastnameLabel = new QLabel;
        QLabel *newCheckInTimeLabel = new QLabel;

        qInfo() << "created Labels";

        newIDLabel->setText(QString::number(students[i].ID));
        newFirstnameLabel->setText(students[i].firstName);
        newLastnameLabel->setText(students[i].lastName);

        qInfo() << students[i].checkInTime;

        newCheckInTimeLabel->setText(students[i].checkInTime);

        qInfo() << "Assigned Values";

        studentCheckBoxSelections.append(newCheckBox);          //add button to keep track of them
        ui->SelectionGridLayout->addWidget(newCheckBox,i,0);    //add checkbox to grid layout
        ui->SelectionGridLayout->addWidget(newIDLabel,i,1);
        ui->SelectionGridLayout->addWidget(newFirstnameLabel,i,2);
        ui->SelectionGridLayout->addWidget(newLastnameLabel,i,3);
        ui->SelectionGridLayout->addWidget(newCheckInTimeLabel,i,4);

        qInfo() << "Spawned UI Elements";

    }
}

/*
 * Function: Closes the window
 */
void CheckOutView::on_CancelButton_clicked()
{
    this->close();
}

/*
 * Function: Signs out the students with their corresponding checkbox selected and
 *           updates the log file that matches the selected ID and Time they signed in,
 *           opens a message box, showing students that were signed out,
 *           and then closes the window
 */
void CheckOutView::on_CheckOutButton_clicked()
{
    QList<StudentInformation> studentsSignedOut;
    //DatabaseController db("QMYSQL","localhost","lab_check_in","root","q1w2e3r4");           //This needs to be it's own class
    //db.openDatabase();

    for(int i = 0; i < totalRows; i++)
    {
        if(studentCheckBoxSelections[i]->isChecked())
        {
            studentsSignedOut.append(students[i]);

            DatabaseControllerSingleton::getInstance()->updateLog(students[i]);
            /*
            db.updateLog(QString::number(students[i].ID),
                         QDateTime::fromString(students[i].checkInTime),
                         QDateTime::currentDateTime()); //This is going to need changed
            */
            qInfo() << QDateTime::fromString(students[i].checkInTime).toString("yyyy-MM-dd hh:mm:ss");
            emit(EventStudentCheckOut(students[i].ID));
        }
    }

    QString messageBoxString = "Students signed out: \n \n";

    for(int i = 0; i < studentsSignedOut.count(); i++)
    {
        messageBoxString.append(QString::number(studentsSignedOut[i].ID).toLatin1() + ": ");
        messageBoxString.append(studentsSignedOut[i].firstName + ",");
        messageBoxString.append(studentsSignedOut[i].lastName + ": ");
        messageBoxString.append(QDateTime::currentDateTime().toString());
    }

    QMessageBox comformationBox;
    comformationBox.setText(messageBoxString);
    comformationBox.setWindowTitle("");
    comformationBox.exec();
    this->close();
}
