#ifndef CHECKOUTVIEW_H
#define CHECKOUTVIEW_H

#include <QDialog>

namespace Ui {
class CheckOutView;
}

class CheckOutView : public QDialog
{
    Q_OBJECT

public:
    explicit CheckOutView(QWidget *parent = nullptr);
    ~CheckOutView();

private slots:
    void on_CancelButton_clicked();

private:
    Ui::CheckOutView *ui;
};

#endif // CHECKOUTVIEW_H
