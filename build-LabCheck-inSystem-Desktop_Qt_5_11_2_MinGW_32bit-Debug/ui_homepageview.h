/********************************************************************************
** Form generated from reading UI file 'homepageview.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGEVIEW_H
#define UI_HOMEPAGEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePageView
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *CheckInButton;
    QPushButton *CheckOutButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *StudentsSignedInLabel;
    QMenuBar *menubar;
    QMenu *menuLab_Check_in_System;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomePageView)
    {
        if (HomePageView->objectName().isEmpty())
            HomePageView->setObjectName(QStringLiteral("HomePageView"));
        HomePageView->resize(800, 479);
        HomePageView->setMaximumSize(QSize(800, 16777215));
        centralwidget = new QWidget(HomePageView);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setMaximumSize(QSize(16777215, 507));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 81, 71));
        gridLayout = new QGridLayout(verticalLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        CheckInButton = new QPushButton(verticalLayoutWidget);
        CheckInButton->setObjectName(QStringLiteral("CheckInButton"));

        gridLayout->addWidget(CheckInButton, 0, 0, 1, 1);

        CheckOutButton = new QPushButton(verticalLayoutWidget);
        CheckOutButton->setObjectName(QStringLiteral("CheckOutButton"));

        gridLayout->addWidget(CheckOutButton, 1, 0, 1, 1);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(390, 40, 401, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);

        StudentsSignedInLabel = new QLabel(centralwidget);
        StudentsSignedInLabel->setObjectName(QStringLiteral("StudentsSignedInLabel"));
        StudentsSignedInLabel->setGeometry(QRect(400, 0, 381, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        font.setWeight(50);
        StudentsSignedInLabel->setFont(font);
        HomePageView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomePageView);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuLab_Check_in_System = new QMenu(menubar);
        menuLab_Check_in_System->setObjectName(QStringLiteral("menuLab_Check_in_System"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        HomePageView->setMenuBar(menubar);
        statusbar = new QStatusBar(HomePageView);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        HomePageView->setStatusBar(statusbar);

        menubar->addAction(menuLab_Check_in_System->menuAction());
        menubar->addAction(menuEdit->menuAction());

        retranslateUi(HomePageView);

        QMetaObject::connectSlotsByName(HomePageView);
    } // setupUi

    void retranslateUi(QMainWindow *HomePageView)
    {
        HomePageView->setWindowTitle(QApplication::translate("HomePageView", "Lab Sign-in System", nullptr));
        CheckInButton->setText(QApplication::translate("HomePageView", "Check In", nullptr));
        CheckOutButton->setText(QApplication::translate("HomePageView", "Check Out", nullptr));
        label_2->setText(QApplication::translate("HomePageView", "TextLabel", nullptr));
        label->setText(QApplication::translate("HomePageView", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("HomePageView", "TextLabel", nullptr));
        StudentsSignedInLabel->setText(QApplication::translate("HomePageView", "Students Signed-In", nullptr));
        menuLab_Check_in_System->setTitle(QApplication::translate("HomePageView", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("HomePageView", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePageView: public Ui_HomePageView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGEVIEW_H
