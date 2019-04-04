/********************************************************************************
** Form generated from reading UI file 'checkoutview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUTVIEW_H
#define UI_CHECKOUTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckOutView
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *CheckOutButton;
    QPushButton *CancelButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *TitleBarLabel;
    QGroupBox *StudentGroupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *SelectionGridLayout;
    QWidget *gridLayoutWidget_2;
    QGridLayout *HeaderGridLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;

    void setupUi(QDialog *CheckOutView)
    {
        if (CheckOutView->objectName().isEmpty())
            CheckOutView->setObjectName(QString::fromUtf8("CheckOutView"));
        CheckOutView->resize(601, 471);
        horizontalLayoutWidget = new QWidget(CheckOutView);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 430, 601, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CheckOutButton = new QPushButton(horizontalLayoutWidget);
        CheckOutButton->setObjectName(QString::fromUtf8("CheckOutButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CheckOutButton->sizePolicy().hasHeightForWidth());
        CheckOutButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(CheckOutButton);

        CancelButton = new QPushButton(horizontalLayoutWidget);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));
        sizePolicy.setHeightForWidth(CancelButton->sizePolicy().hasHeightForWidth());
        CancelButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(CancelButton);

        verticalLayoutWidget = new QWidget(CheckOutView);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 601, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleBarLabel = new QLabel(verticalLayoutWidget);
        TitleBarLabel->setObjectName(QString::fromUtf8("TitleBarLabel"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        TitleBarLabel->setFont(font);
        TitleBarLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(TitleBarLabel);

        StudentGroupBox = new QGroupBox(CheckOutView);
        StudentGroupBox->setObjectName(QString::fromUtf8("StudentGroupBox"));
        StudentGroupBox->setGeometry(QRect(10, 30, 581, 391));
        gridLayoutWidget = new QWidget(StudentGroupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 70, 561, 311));
        SelectionGridLayout = new QGridLayout(gridLayoutWidget);
        SelectionGridLayout->setSpacing(6);
        SelectionGridLayout->setObjectName(QString::fromUtf8("SelectionGridLayout"));
        SelectionGridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        SelectionGridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_2 = new QWidget(StudentGroupBox);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 561, 41));
        HeaderGridLayout = new QGridLayout(gridLayoutWidget_2);
        HeaderGridLayout->setObjectName(QString::fromUtf8("HeaderGridLayout"));
        HeaderGridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        HeaderGridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        HeaderGridLayout->addWidget(label_4, 0, 3, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        HeaderGridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        HeaderGridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        HeaderGridLayout->addWidget(label_5, 0, 4, 1, 1);


        retranslateUi(CheckOutView);

        QMetaObject::connectSlotsByName(CheckOutView);
    } // setupUi

    void retranslateUi(QDialog *CheckOutView)
    {
        CheckOutView->setWindowTitle(QApplication::translate("CheckOutView", "Check Out Student", nullptr));
        CheckOutButton->setText(QApplication::translate("CheckOutView", "Check out", nullptr));
        CancelButton->setText(QApplication::translate("CheckOutView", "Cancel", nullptr));
        TitleBarLabel->setText(QApplication::translate("CheckOutView", "Check-out Students", nullptr));
        StudentGroupBox->setTitle(QApplication::translate("CheckOutView", "Signed In", nullptr));
        label_2->setText(QApplication::translate("CheckOutView", "YSU ID #", nullptr));
        label_4->setText(QApplication::translate("CheckOutView", "Last Name", nullptr));
        label->setText(QApplication::translate("CheckOutView", "Selection", nullptr));
        label_3->setText(QApplication::translate("CheckOutView", "First Name", nullptr));
        label_5->setText(QApplication::translate("CheckOutView", "Check In Time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckOutView: public Ui_CheckOutView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUTVIEW_H
