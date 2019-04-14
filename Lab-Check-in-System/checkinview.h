#ifndef CHECKINVIEW_H
#define CHECKINVIEW_H

#include <QDialog>
#include "cardparser.h"
#include "checkinmanualview.h"
#include "studentinformation.h"
#include "databasecontrollersingleton.h"
#include "authorizationview.h"

namespace Ui {
class CheckInView;
}

class CheckInView : public QDialog
{
    Q_OBJECT

public:
    explicit CheckInView(QWidget *parent = nullptr);
    ~CheckInView();

private:
    Ui::CheckInView *ui;
    CheckInManualView *checkInManualView;
    AuthorizationView *authorizationView;

signals:
    void EventStudentCheckedIn(StudentInformation student);
    bool EventConnectToNewManualView(CheckInManualView* newView);

private slots:
    void on_CheckInButton_clicked();
    void on_CancelButton_clicked();
    void on_ManualCheckInButton_clicked();
};

#endif // CHECKINVIEW_H
