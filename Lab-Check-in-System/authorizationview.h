#ifndef AUTHORIZATIONVIEW_H
#define AUTHORIZATIONVIEW_H

#include <QDialog>
#include "databasecontrollersingleton.h"
#include "studentinformation.h"
#include <QMessageBox>

namespace Ui {
class AuthorizationView;
}

class AuthorizationView : public QDialog
{
    Q_OBJECT

public:
    explicit AuthorizationView(QWidget *parent = nullptr);
    ~AuthorizationView();
    void setStudent(StudentInformation student);
    void setupUI();


private slots:
    void on_AuthorizeButton_clicked();

    void on_CancelButton_clicked();

private:
    Ui::AuthorizationView *ui;
    StudentInformation studentToAuthorize;
};

#endif // AUTHORIZATIONVIEW_H
