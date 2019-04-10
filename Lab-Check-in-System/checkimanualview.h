#ifndef CHECKIMANUALVIEW_H
#define CHECKIMANUALVIEW_H

#include <QDialog>
#include "studentinformation.h"
#include "databasecontrollersingleton.h"
#include <QMessageBox>

namespace Ui {
class CheckIManualView;
}

class CheckIManualView : public QDialog
{
    Q_OBJECT

public:
    explicit CheckIManualView(QWidget *parent = nullptr);
    ~CheckIManualView();

private slots:
    void on_CheckInButton_clicked();

signals:
    void EventStudentCheckedIn(StudentInformation student);

private:
    Ui::CheckIManualView *ui;
};

#endif // CHECKIMANUALVIEW_H
