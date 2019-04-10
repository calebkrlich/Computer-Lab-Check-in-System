#ifndef CHECKINMANUALVIEW_H
#define CHECKINMANUALVIEW_H

#include <QDialog>
#include "studentinformation.h"
#include "databasecontrollersingleton.h"
#include <QMessageBox>

namespace Ui {
class CheckInManualView;
}

class CheckInManualView : public QDialog
{
    Q_OBJECT

public:
    explicit CheckInManualView(QWidget *parent = nullptr);
    ~CheckInManualView();

private slots:
    void on_CheckInButton_clicked();

    void on_CancelButton_clicked();


signals:
    void EventStudentCheckedIn(StudentInformation student);


private:
    Ui::CheckInManualView *ui;
};

#endif // CHECKIMANUALVIEW_H
