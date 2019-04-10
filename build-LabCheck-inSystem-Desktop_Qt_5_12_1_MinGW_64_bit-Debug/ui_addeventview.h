/********************************************************************************
** Form generated from reading UI file 'addeventview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEVENTVIEW_H
#define UI_ADDEVENTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddEventView
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddEventButton;
    QPushButton *CancelButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *StartTimeLabel;
    QDateTimeEdit *startTimeDateTimeEdit;
    QLabel *endTimeLabel;
    QDateTimeEdit *endTimeDateTimeEdit;
    QLabel *roomLabel;
    QLineEdit *roomLineEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *AddEventLabel;

    void setupUi(QDialog *AddEventView)
    {
        if (AddEventView->objectName().isEmpty())
            AddEventView->setObjectName(QString::fromUtf8("AddEventView"));
        AddEventView->resize(241, 210);
        horizontalLayoutWidget = new QWidget(AddEventView);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 170, 221, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        AddEventButton = new QPushButton(horizontalLayoutWidget);
        AddEventButton->setObjectName(QString::fromUtf8("AddEventButton"));

        horizontalLayout->addWidget(AddEventButton);

        CancelButton = new QPushButton(horizontalLayoutWidget);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        horizontalLayout->addWidget(CancelButton);

        formLayoutWidget = new QWidget(AddEventView);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 40, 221, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(formLayoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(formLayoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        StartTimeLabel = new QLabel(formLayoutWidget);
        StartTimeLabel->setObjectName(QString::fromUtf8("StartTimeLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, StartTimeLabel);

        startTimeDateTimeEdit = new QDateTimeEdit(formLayoutWidget);
        startTimeDateTimeEdit->setObjectName(QString::fromUtf8("startTimeDateTimeEdit"));
        startTimeDateTimeEdit->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));

        formLayout->setWidget(2, QFormLayout::FieldRole, startTimeDateTimeEdit);

        endTimeLabel = new QLabel(formLayoutWidget);
        endTimeLabel->setObjectName(QString::fromUtf8("endTimeLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, endTimeLabel);

        endTimeDateTimeEdit = new QDateTimeEdit(formLayoutWidget);
        endTimeDateTimeEdit->setObjectName(QString::fromUtf8("endTimeDateTimeEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, endTimeDateTimeEdit);

        roomLabel = new QLabel(formLayoutWidget);
        roomLabel->setObjectName(QString::fromUtf8("roomLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, roomLabel);

        roomLineEdit = new QLineEdit(formLayoutWidget);
        roomLineEdit->setObjectName(QString::fromUtf8("roomLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, roomLineEdit);

        horizontalLayoutWidget_2 = new QWidget(AddEventView);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 221, 21));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        AddEventLabel = new QLabel(horizontalLayoutWidget_2);
        AddEventLabel->setObjectName(QString::fromUtf8("AddEventLabel"));
        AddEventLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(AddEventLabel);

        QWidget::setTabOrder(nameLineEdit, roomLineEdit);
        QWidget::setTabOrder(roomLineEdit, startTimeDateTimeEdit);
        QWidget::setTabOrder(startTimeDateTimeEdit, endTimeDateTimeEdit);
        QWidget::setTabOrder(endTimeDateTimeEdit, AddEventButton);
        QWidget::setTabOrder(AddEventButton, CancelButton);

        retranslateUi(AddEventView);

        QMetaObject::connectSlotsByName(AddEventView);
    } // setupUi

    void retranslateUi(QDialog *AddEventView)
    {
        AddEventView->setWindowTitle(QApplication::translate("AddEventView", "Add Event...", nullptr));
        AddEventButton->setText(QApplication::translate("AddEventView", "Add Event", nullptr));
        CancelButton->setText(QApplication::translate("AddEventView", "Cancel", nullptr));
        nameLabel->setText(QApplication::translate("AddEventView", "Name: ", nullptr));
        StartTimeLabel->setText(QApplication::translate("AddEventView", "Start Time: ", nullptr));
        endTimeLabel->setText(QApplication::translate("AddEventView", "End Time: ", nullptr));
        roomLabel->setText(QApplication::translate("AddEventView", "Room", nullptr));
        AddEventLabel->setText(QApplication::translate("AddEventView", "Event Infomation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEventView: public Ui_AddEventView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEVENTVIEW_H
