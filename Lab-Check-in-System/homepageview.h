#ifndef HOMEPAGEVIEW_H
#define HOMEPAGEVIEW_H

#include <QMainWindow>
#include "checkinview.h"
#include "checkimanualview.h"
#include "checkoutview.h"
#include "addeventview.h"
#include "eventinformation.h"
#include "studentinformation.h"

namespace Ui {
class HomePageView;
}

class HomePageView : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomePageView(QWidget *parent = nullptr);
    ~HomePageView();

signals:
    void StudentListChange();   //A Signal that is called when a new student is added

private slots:
    void on_CheckInButton_clicked();

    void on_CheckOutButton_clicked();

    void on_AddEventButton_clicked();

    void newEventToAdd(EventInformation event);     //Creates a new row in event table when add event is called

    void newStudentToAdd(StudentInformation student);

    void StudentToRemove(unsigned int studentID);

private:
    Ui::HomePageView *ui;
    CheckInView *checkInView;
    CheckOutView *checkOutView;
    AddEventView *addEventView;

    int studentsCheckedIn = 0;
};

#endif // HOMEPAGEVIEW_H
