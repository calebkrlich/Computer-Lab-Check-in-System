#ifndef CHECKINVIEW_H
#define CHECKINVIEW_H

#include <QDialog>
#include "cardparser.h"
#include "checkimanualview.h"
#include "studentinformation.h"
#include "databasecontrollersingleton.h"

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
    CheckIManualView *checkInManualView;

signals:
    void EventStudentCheckedIn(StudentInformation student);
    bool EventConnectToNewManualView(CheckIManualView* newView);

private slots:
    void on_CheckInButton_clicked();
    void on_CancelButton_clicked();
    void on_ManualCheckInButton_clicked();
};

#endif // CHECKINVIEW_H
