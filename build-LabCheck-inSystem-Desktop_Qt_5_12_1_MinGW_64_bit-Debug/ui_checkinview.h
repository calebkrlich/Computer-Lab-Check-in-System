/********************************************************************************
** Form generated from reading UI file 'checkinview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKINVIEW_H
#define UI_CHECKINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckInView
{
public:
    QLabel *SwipeCardLabel;
    QLineEdit *CardInputLineEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *CancelButton;
    QPushButton *CheckInButton;
    QPushButton *ManualCheckInButton;

    void setupUi(QDialog *CheckInView)
    {
        if (CheckInView->objectName().isEmpty())
            CheckInView->setObjectName(QString::fromUtf8("CheckInView"));
        CheckInView->resize(400, 111);
        SwipeCardLabel = new QLabel(CheckInView);
        SwipeCardLabel->setObjectName(QString::fromUtf8("SwipeCardLabel"));
        SwipeCardLabel->setGeometry(QRect(20, 0, 361, 31));
        QFont font;
        font.setPointSize(12);
        SwipeCardLabel->setFont(font);
        SwipeCardLabel->setAlignment(Qt::AlignCenter);
        CardInputLineEdit = new QLineEdit(CheckInView);
        CardInputLineEdit->setObjectName(QString::fromUtf8("CardInputLineEdit"));
        CardInputLineEdit->setGeometry(QRect(10, 40, 371, 20));
        CardInputLineEdit->setEchoMode(QLineEdit::Password);
        horizontalLayoutWidget = new QWidget(CheckInView);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 70, 371, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CancelButton = new QPushButton(horizontalLayoutWidget);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        horizontalLayout->addWidget(CancelButton);

        CheckInButton = new QPushButton(horizontalLayoutWidget);
        CheckInButton->setObjectName(QString::fromUtf8("CheckInButton"));

        horizontalLayout->addWidget(CheckInButton);

        ManualCheckInButton = new QPushButton(horizontalLayoutWidget);
        ManualCheckInButton->setObjectName(QString::fromUtf8("ManualCheckInButton"));

        horizontalLayout->addWidget(ManualCheckInButton);

        QWidget::setTabOrder(CardInputLineEdit, CheckInButton);
        QWidget::setTabOrder(CheckInButton, CancelButton);
        QWidget::setTabOrder(CancelButton, ManualCheckInButton);

        retranslateUi(CheckInView);

        QMetaObject::connectSlotsByName(CheckInView);
    } // setupUi

    void retranslateUi(QDialog *CheckInView)
    {
        CheckInView->setWindowTitle(QApplication::translate("CheckInView", "Dialog", nullptr));
        SwipeCardLabel->setText(QApplication::translate("CheckInView", "Swipe Card", nullptr));
        CancelButton->setText(QApplication::translate("CheckInView", "Cancel", nullptr));
        CheckInButton->setText(QApplication::translate("CheckInView", "Check In", nullptr));
        ManualCheckInButton->setText(QApplication::translate("CheckInView", "Manual Check-in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckInView: public Ui_CheckInView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKINVIEW_H
