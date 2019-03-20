#ifndef CHECKOUTVIEW_H
#define CHECKOUTVIEW_H

#include <QDialog>
#include <QList>
#include <QString>
#include <QCheckBox>
#include <QDebug>

namespace Ui {
class CheckOutView;
}

class CheckOutView : public QDialog
{
    Q_OBJECT

public:
    explicit CheckOutView(QWidget *parent = nullptr);

    void setTotalRows(int amount);
    void setStudentsInfomation(QList<QString> info);
    void buildSelectionTable();

    ~CheckOutView();

private slots:
    void on_CancelButton_clicked();

    void on_CheckOutButton_clicked();

private:
    Ui::CheckOutView *ui;

    int totalRows;
    QList<QString> students;
    QList<QCheckBox*> studentCheckBoxSelections;
};

#endif // CHECKOUTVIEW_H
