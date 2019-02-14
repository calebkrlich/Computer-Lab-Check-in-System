#ifndef HOMEPAGEVIEW_H
#define HOMEPAGEVIEW_H

#include <QMainWindow>
#include "checkinview.h"
#include "checkimanualview.h"
#include "checkoutview.h"

namespace Ui {
class HomePageView;
}

class HomePageView : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomePageView(QWidget *parent = nullptr);
    ~HomePageView();

private slots:
    void on_CheckInButton_clicked();

    void on_CheckOutButton_clicked();

    void on_AddEventButton_clicked();

    void on_AddSignedInButton_clicked();

private:
    Ui::HomePageView *ui;
    CheckInView *checkInView;
    CheckOutView *checkOutView;

    int studentsCheckedIn = 0;
};

#endif // HOMEPAGEVIEW_H
