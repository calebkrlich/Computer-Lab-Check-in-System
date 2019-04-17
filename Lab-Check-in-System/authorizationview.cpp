#include "authorizationview.h"
#include "ui_authorizationview.h"

AuthorizationView::AuthorizationView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AuthorizationView)
{
    ui->setupUi(this);
}

AuthorizationView::~AuthorizationView()
{
    delete ui;
}

void AuthorizationView::setStudent(StudentInformation student)
{
    studentToAuthorize = student;
}

void AuthorizationView::setupUI()
{
    ui->YSUIDLineEdit->setText(studentToAuthorize.ID);
    ui->FirstNameLineEdit->setText(studentToAuthorize.firstName);
    ui->LastNameLineEdit->setText(studentToAuthorize.lastName);
    ui->MiddleInitalLineEdit->setText(studentToAuthorize.middleInitial);
    ui->BirthdayLineEdit->setText(studentToAuthorize.birthday);
    ui->EnrollDateLineEdit->setText(studentToAuthorize.registrationDate);
}

void AuthorizationView::on_AuthorizeButton_clicked()
{
    DatabaseControllerSingleton* db = DatabaseControllerSingleton::getInstance();

    if(!db->checkAuthorizer(ui->IDLineEdit->text(),ui->PinLineEdit->text()))
    {
        QMessageBox invalidMessageBox;
        invalidMessageBox.setText("Invalid ID or PIN");
        invalidMessageBox.setWindowTitle("Warning");
        invalidMessageBox.setIcon(QMessageBox::Warning);
        invalidMessageBox.exec();
    }
    else
    {
        this->done(QDialog::Accepted);
        db->postStudent(studentToAuthorize);
    }
}

void AuthorizationView::on_CancelButton_clicked()
{
    this->done(QDialog::Rejected);
}
