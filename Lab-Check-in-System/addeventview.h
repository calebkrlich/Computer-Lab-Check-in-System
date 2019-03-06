#ifndef ADDEVENTVIEW_H
#define ADDEVENTVIEW_H

#include <QDialog>
#include "eventinformation.h"

namespace Ui {
class AddEventView;
}

class AddEventView : public QDialog
{
    Q_OBJECT

public:
    explicit AddEventView(QWidget *parent = nullptr);
    ~AddEventView();

private slots:
    void on_AddEventButton_clicked();

    void on_CancelButton_clicked();

signals:
    void newEventCreated(EventInformation newEvent);

private:
    Ui::AddEventView *ui;
};

#endif // ADDEVENTVIEW_H
