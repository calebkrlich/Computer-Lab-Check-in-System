/********************************************************************************
** Form generated from reading UI file 'authorizationview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATIONVIEW_H
#define UI_AUTHORIZATIONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthorizationView
{
public:
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *YSUIDLineEdit;
    QLineEdit *FirstNameLineEdit;
    QLineEdit *LastNameLineEdit;
    QLineEdit *MiddleInitalLineEdit;
    QLineEdit *BirthdayLineEdit;
    QLineEdit *EnrollDateLineEdit;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *IDLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *PinLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *AuthorizeButton;
    QPushButton *CancelButton;
    QLabel *label_9;

    void setupUi(QDialog *AuthorizationView)
    {
        if (AuthorizationView->objectName().isEmpty())
            AuthorizationView->setObjectName(QString::fromUtf8("AuthorizationView"));
        AuthorizationView->resize(453, 231);
        AuthorizationView->setModal(true);
        groupBox = new QGroupBox(AuthorizationView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(190, 10, 251, 211));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 231, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        YSUIDLineEdit = new QLineEdit(gridLayoutWidget);
        YSUIDLineEdit->setObjectName(QString::fromUtf8("YSUIDLineEdit"));
        YSUIDLineEdit->setReadOnly(true);

        gridLayout->addWidget(YSUIDLineEdit, 0, 1, 1, 1);

        FirstNameLineEdit = new QLineEdit(gridLayoutWidget);
        FirstNameLineEdit->setObjectName(QString::fromUtf8("FirstNameLineEdit"));
        FirstNameLineEdit->setReadOnly(true);

        gridLayout->addWidget(FirstNameLineEdit, 1, 1, 1, 1);

        LastNameLineEdit = new QLineEdit(gridLayoutWidget);
        LastNameLineEdit->setObjectName(QString::fromUtf8("LastNameLineEdit"));
        LastNameLineEdit->setReadOnly(true);

        gridLayout->addWidget(LastNameLineEdit, 2, 1, 1, 1);

        MiddleInitalLineEdit = new QLineEdit(gridLayoutWidget);
        MiddleInitalLineEdit->setObjectName(QString::fromUtf8("MiddleInitalLineEdit"));
        MiddleInitalLineEdit->setReadOnly(true);

        gridLayout->addWidget(MiddleInitalLineEdit, 3, 1, 1, 1);

        BirthdayLineEdit = new QLineEdit(gridLayoutWidget);
        BirthdayLineEdit->setObjectName(QString::fromUtf8("BirthdayLineEdit"));
        BirthdayLineEdit->setReadOnly(true);

        gridLayout->addWidget(BirthdayLineEdit, 4, 1, 1, 1);

        EnrollDateLineEdit = new QLineEdit(gridLayoutWidget);
        EnrollDateLineEdit->setObjectName(QString::fromUtf8("EnrollDateLineEdit"));
        EnrollDateLineEdit->setReadOnly(true);

        gridLayout->addWidget(EnrollDateLineEdit, 5, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(AuthorizationView);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 170, 211));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        IDLineEdit = new QLineEdit(gridLayoutWidget_2);
        IDLineEdit->setObjectName(QString::fromUtf8("IDLineEdit"));

        horizontalLayout->addWidget(IDLineEdit);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        PinLineEdit = new QLineEdit(gridLayoutWidget_2);
        PinLineEdit->setObjectName(QString::fromUtf8("PinLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PinLineEdit->sizePolicy().hasHeightForWidth());
        PinLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(PinLineEdit);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        AuthorizeButton = new QPushButton(gridLayoutWidget_2);
        AuthorizeButton->setObjectName(QString::fromUtf8("AuthorizeButton"));

        horizontalLayout_3->addWidget(AuthorizeButton);

        CancelButton = new QPushButton(gridLayoutWidget_2);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        horizontalLayout_3->addWidget(CancelButton);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);


        retranslateUi(AuthorizationView);

        QMetaObject::connectSlotsByName(AuthorizationView);
    } // setupUi

    void retranslateUi(QDialog *AuthorizationView)
    {
        AuthorizationView->setWindowTitle(QApplication::translate("AuthorizationView", "Authorization Required ", nullptr));
        groupBox->setTitle(QApplication::translate("AuthorizationView", "Student Information:", nullptr));
        label_5->setText(QApplication::translate("AuthorizationView", "Last Name:", nullptr));
        label_8->setText(QApplication::translate("AuthorizationView", "Birthday:", nullptr));
        label_4->setText(QApplication::translate("AuthorizationView", "First Name:", nullptr));
        label_3->setText(QApplication::translate("AuthorizationView", "YSU ID:", nullptr));
        label_6->setText(QApplication::translate("AuthorizationView", "Middle Initial:", nullptr));
        label_7->setText(QApplication::translate("AuthorizationView", "Enroll Date:", nullptr));
        label->setText(QApplication::translate("AuthorizationView", "YSU ID:", nullptr));
        label_2->setText(QApplication::translate("AuthorizationView", "PIN:", nullptr));
        AuthorizeButton->setText(QApplication::translate("AuthorizationView", "Authorize", nullptr));
        CancelButton->setText(QApplication::translate("AuthorizationView", "Cancel", nullptr));
        label_9->setText(QApplication::translate("AuthorizationView", "Authorizer Information:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthorizationView: public Ui_AuthorizationView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATIONVIEW_H
