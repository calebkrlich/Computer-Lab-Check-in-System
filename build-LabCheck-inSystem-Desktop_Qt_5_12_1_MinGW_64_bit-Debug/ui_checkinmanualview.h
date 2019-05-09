/********************************************************************************
** Form generated from reading UI file 'checkinmanualview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKINMANUALVIEW_H
#define UI_CHECKINMANUALVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckInManualView
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *CheckInButton;
    QPushButton *CancelButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *ySUIDLabel;
    QLineEdit *ySUIDLineEdit;
    QLabel *birthdayLabel;
    QDateEdit *birthdayDateEdit;
    QLabel *lastNameLabel;
    QLineEdit *lastNameLineEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;

    void setupUi(QDialog *CheckInManualView)
    {
        if (CheckInManualView->objectName().isEmpty())
            CheckInManualView->setObjectName(QString::fromUtf8("CheckInManualView"));
        CheckInManualView->resize(400, 209);
        QFont font;
        font.setPointSize(10);
        CheckInManualView->setFont(font);
        horizontalLayoutWidget = new QWidget(CheckInManualView);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 160, 381, 34));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CheckInButton = new QPushButton(horizontalLayoutWidget);
        CheckInButton->setObjectName(QString::fromUtf8("CheckInButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CheckInButton->sizePolicy().hasHeightForWidth());
        CheckInButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(CheckInButton);

        CancelButton = new QPushButton(horizontalLayoutWidget);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));
        sizePolicy.setHeightForWidth(CancelButton->sizePolicy().hasHeightForWidth());
        CancelButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(CancelButton);

        formLayoutWidget = new QWidget(CheckInManualView);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(9, 40, 381, 117));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(formLayoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(formLayoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        ySUIDLabel = new QLabel(formLayoutWidget);
        ySUIDLabel->setObjectName(QString::fromUtf8("ySUIDLabel"));
        ySUIDLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, ySUIDLabel);

        ySUIDLineEdit = new QLineEdit(formLayoutWidget);
        ySUIDLineEdit->setObjectName(QString::fromUtf8("ySUIDLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, ySUIDLineEdit);

        birthdayLabel = new QLabel(formLayoutWidget);
        birthdayLabel->setObjectName(QString::fromUtf8("birthdayLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, birthdayLabel);

        birthdayDateEdit = new QDateEdit(formLayoutWidget);
        birthdayDateEdit->setObjectName(QString::fromUtf8("birthdayDateEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, birthdayDateEdit);

        lastNameLabel = new QLabel(formLayoutWidget);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));
        lastNameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, lastNameLabel);

        lastNameLineEdit = new QLineEdit(formLayoutWidget);
        lastNameLineEdit->setObjectName(QString::fromUtf8("lastNameLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lastNameLineEdit);

        horizontalLayoutWidget_2 = new QWidget(CheckInManualView);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 0, 381, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        QWidget::setTabOrder(nameLineEdit, lastNameLineEdit);
        QWidget::setTabOrder(lastNameLineEdit, ySUIDLineEdit);
        QWidget::setTabOrder(ySUIDLineEdit, birthdayDateEdit);
        QWidget::setTabOrder(birthdayDateEdit, CheckInButton);
        QWidget::setTabOrder(CheckInButton, CancelButton);

        retranslateUi(CheckInManualView);

        QMetaObject::connectSlotsByName(CheckInManualView);
    } // setupUi

    void retranslateUi(QDialog *CheckInManualView)
    {
        CheckInManualView->setWindowTitle(QApplication::translate("CheckInManualView", "Manual Check-in", nullptr));
        CheckInButton->setText(QApplication::translate("CheckInManualView", "Check-In", nullptr));
        CancelButton->setText(QApplication::translate("CheckInManualView", "Cancel", nullptr));
        nameLabel->setText(QApplication::translate("CheckInManualView", "First Name:", nullptr));
        ySUIDLabel->setText(QApplication::translate("CheckInManualView", "YSU ID: ", nullptr));
        birthdayLabel->setText(QApplication::translate("CheckInManualView", "Birthday:", nullptr));
        lastNameLabel->setText(QApplication::translate("CheckInManualView", "Last Name:", nullptr));
        label->setText(QApplication::translate("CheckInManualView", "Check-In Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckInManualView: public Ui_CheckInManualView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKINMANUALVIEW_H
