#ifndef CHECKINVIEW_H
#define CHECKINVIEW_H

#include <QDialog>
#include "cardparser.h"
#include "checkimanualview.h"



namespace Ui {
class CheckInView;
}

class CheckInView : public QDialog
{
    Q_OBJECT

public:
    explicit CheckInView(QWidget *parent = nullptr);
    ~CheckInView();

private slots:
    void on_CheckInButton_clicked();

    void on_CancelButton_clicked();

    void on_ManualCheckInButton_clicked();

private:
    Ui::CheckInView *ui;
    CheckIManualView *checkInManualView;
};

#endif // CHECKINVIEW_H
