#include "addeventview.h"
#include "ui_addeventview.h"
#include "eventinformation.h"
#include "databasecontrollersingleton.h"

AddEventView::AddEventView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEventView)
{
    ui->setupUi(this);
    ui->startTimeDateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->endTimeDateTimeEdit->setDateTime(QDateTime::currentDateTime());
}

AddEventView::~AddEventView()
{
    delete ui;
}

void AddEventView::on_AddEventButton_clicked()
{
    EventInformation eventToSignal;                                         //Create an event info object to signal

    eventToSignal.name = ui->nameLineEdit->text();                          //Fetch the string of the event
    eventToSignal.room = ui->roomLineEdit->text();
    eventToSignal.startDateTime = ui->startTimeDateTimeEdit->dateTime();    //fetch the start time
    eventToSignal.endDateTime = ui->endTimeDateTimeEdit->dateTime();        //fetch the end time

    DatabaseControllerSingleton::getInstance()->postEvent(eventToSignal);
    emit(newEventCreated(eventToSignal));                                   //Emit to the homepage object

    this->close();                                                          //close the window after event added
}

void AddEventView::on_CancelButton_clicked()
{
    this->close();
}
