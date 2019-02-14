/********************************************************************************
** Form generated from reading UI file 'checkinview.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKINVIEW_H
#define UI_CHECKINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckInView
{
public:
    QPushButton *CheckInButton;
    QPushButton *CancelButton;
    QLabel *SwipeCardLabel;
    QLineEdit *CardInputLineEdit;

    void setupUi(QDialog *CheckInView)
    {
        if (CheckInView->objectName().isEmpty())
            CheckInView->setObjectName(QStringLiteral("CheckInView"));
        CheckInView->resize(400, 111);
        CheckInButton = new QPushButton(CheckInView);
        CheckInButton->setObjectName(QStringLiteral("CheckInButton"));
        CheckInButton->setGeometry(QRect(100, 70, 75, 23));
        CancelButton = new QPushButton(CheckInView);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setGeometry(QRect(210, 70, 75, 23));
        SwipeCardLabel = new QLabel(CheckInView);
        SwipeCardLabel->setObjectName(QStringLiteral("SwipeCardLabel"));
        SwipeCardLabel->setGeometry(QRect(20, 0, 361, 31));
        QFont font;
        font.setPointSize(12);
        SwipeCardLabel->setFont(font);
        SwipeCardLabel->setAlignment(Qt::AlignCenter);
        CardInputLineEdit = new QLineEdit(CheckInView);
        CardInputLineEdit->setObjectName(QStringLiteral("CardInputLineEdit"));
        CardInputLineEdit->setGeometry(QRect(40, 40, 311, 20));
        CardInputLineEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(CheckInView);

        QMetaObject::connectSlotsByName(CheckInView);
    } // setupUi

    void retranslateUi(QDialog *CheckInView)
    {
        CheckInView->setWindowTitle(QApplication::translate("CheckInView", "Dialog", nullptr));
        CheckInButton->setText(QApplication::translate("CheckInView", "Check In", nullptr));
        CancelButton->setText(QApplication::translate("CheckInView", "Cancel", nullptr));
        SwipeCardLabel->setText(QApplication::translate("CheckInView", "Swipe Card", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckInView: public Ui_CheckInView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKINVIEW_H
