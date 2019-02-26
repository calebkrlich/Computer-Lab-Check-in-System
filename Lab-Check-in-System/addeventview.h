#ifndef ADDEVENTVIEW_H
#define ADDEVENTVIEW_H

#include <QDialog>

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

private:
    Ui::AddEventView *ui;
};

#endif // ADDEVENTVIEW_H
