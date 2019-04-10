/********************************************************************************
** Form generated from reading UI file 'homepageview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGEVIEW_H
#define UI_HOMEPAGEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePageView
{
public:
    QAction *actionClass_Schedule;
    QAction *actionChecked_In_Students;
    QAction *actionAdd_New_Class;
    QAction *actionRemove_Class;
    QWidget *centralwidget;
    QLabel *CheckInOptionsLabel;
    QGroupBox *groupBox;
    QTableWidget *SignedInTable;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *AddEventButton;
    QPushButton *RemoveEventButton;
    QPushButton *CheckOutButton;
    QPushButton *CheckInButton;
    QGroupBox *EventsGroupBox;
    QTableWidget *EventTable;
    QMenuBar *menubar;
    QMenu *menuLab_Check_in_System;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomePageView)
    {
        if (HomePageView->objectName().isEmpty())
            HomePageView->setObjectName(QString::fromUtf8("HomePageView"));
        HomePageView->resize(1142, 570);
        HomePageView->setMaximumSize(QSize(16777215, 16777215));
        HomePageView->setAnimated(true);
        actionClass_Schedule = new QAction(HomePageView);
        actionClass_Schedule->setObjectName(QString::fromUtf8("actionClass_Schedule"));
        actionChecked_In_Students = new QAction(HomePageView);
        actionChecked_In_Students->setObjectName(QString::fromUtf8("actionChecked_In_Students"));
        actionAdd_New_Class = new QAction(HomePageView);
        actionAdd_New_Class->setObjectName(QString::fromUtf8("actionAdd_New_Class"));
        actionRemove_Class = new QAction(HomePageView);
        actionRemove_Class->setObjectName(QString::fromUtf8("actionRemove_Class"));
        centralwidget = new QWidget(HomePageView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(16777215, 507));
        CheckInOptionsLabel = new QLabel(centralwidget);
        CheckInOptionsLabel->setObjectName(QString::fromUtf8("CheckInOptionsLabel"));
        CheckInOptionsLabel->setGeometry(QRect(10, 10, 261, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        font.setUnderline(true);
        font.setWeight(50);
        CheckInOptionsLabel->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 100, 441, 371));
        SignedInTable = new QTableWidget(groupBox);
        if (SignedInTable->columnCount() < 4)
            SignedInTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        SignedInTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        SignedInTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        SignedInTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        SignedInTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        SignedInTable->setObjectName(QString::fromUtf8("SignedInTable"));
        SignedInTable->setGeometry(QRect(10, 30, 421, 331));
        SignedInTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        SignedInTable->setTabKeyNavigation(true);
        SignedInTable->setProperty("showDropIndicator", QVariant(true));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 90, 191, 231));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 180, 141));
        gridLayout = new QGridLayout(verticalLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        AddEventButton = new QPushButton(verticalLayoutWidget);
        AddEventButton->setObjectName(QString::fromUtf8("AddEventButton"));

        gridLayout->addWidget(AddEventButton, 1, 0, 1, 1);

        RemoveEventButton = new QPushButton(verticalLayoutWidget);
        RemoveEventButton->setObjectName(QString::fromUtf8("RemoveEventButton"));

        gridLayout->addWidget(RemoveEventButton, 1, 1, 1, 1);

        CheckOutButton = new QPushButton(verticalLayoutWidget);
        CheckOutButton->setObjectName(QString::fromUtf8("CheckOutButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CheckOutButton->sizePolicy().hasHeightForWidth());
        CheckOutButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(CheckOutButton, 0, 1, 1, 1);

        CheckInButton = new QPushButton(verticalLayoutWidget);
        CheckInButton->setObjectName(QString::fromUtf8("CheckInButton"));
        sizePolicy.setHeightForWidth(CheckInButton->sizePolicy().hasHeightForWidth());
        CheckInButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(CheckInButton, 0, 0, 1, 1);

        EventsGroupBox = new QGroupBox(centralwidget);
        EventsGroupBox->setObjectName(QString::fromUtf8("EventsGroupBox"));
        EventsGroupBox->setGeometry(QRect(650, 100, 471, 371));
        EventTable = new QTableWidget(EventsGroupBox);
        if (EventTable->columnCount() < 4)
            EventTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        EventTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        EventTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        EventTable->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        EventTable->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        EventTable->setObjectName(QString::fromUtf8("EventTable"));
        EventTable->setGeometry(QRect(10, 30, 451, 331));
        EventTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        HomePageView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomePageView);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1142, 20));
        menuLab_Check_in_System = new QMenu(menubar);
        menuLab_Check_in_System->setObjectName(QString::fromUtf8("menuLab_Check_in_System"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        HomePageView->setMenuBar(menubar);
        statusbar = new QStatusBar(HomePageView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HomePageView->setStatusBar(statusbar);

        menubar->addAction(menuLab_Check_in_System->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuEdit->addSeparator();

        retranslateUi(HomePageView);

        QMetaObject::connectSlotsByName(HomePageView);
    } // setupUi

    void retranslateUi(QMainWindow *HomePageView)
    {
        HomePageView->setWindowTitle(QApplication::translate("HomePageView", "Lab Sign-in System", nullptr));
        actionClass_Schedule->setText(QApplication::translate("HomePageView", "Class Schedule", nullptr));
        actionChecked_In_Students->setText(QApplication::translate("HomePageView", "Checked In Students", nullptr));
        actionAdd_New_Class->setText(QApplication::translate("HomePageView", "Add New Class", nullptr));
        actionRemove_Class->setText(QApplication::translate("HomePageView", "Remove Class", nullptr));
        CheckInOptionsLabel->setText(QApplication::translate("HomePageView", "Lab Check-in System", nullptr));
        groupBox->setTitle(QApplication::translate("HomePageView", "Signed-in Students", nullptr));
        QTableWidgetItem *___qtablewidgetitem = SignedInTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("HomePageView", "YSU ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = SignedInTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("HomePageView", "First Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = SignedInTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("HomePageView", "Last Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = SignedInTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("HomePageView", "Signed-in", nullptr));
        groupBox_2->setTitle(QApplication::translate("HomePageView", "Options", nullptr));
        AddEventButton->setText(QApplication::translate("HomePageView", "Add Event", nullptr));
        RemoveEventButton->setText(QApplication::translate("HomePageView", "Remove Event", nullptr));
        CheckOutButton->setText(QApplication::translate("HomePageView", "Check Out", nullptr));
        CheckInButton->setText(QApplication::translate("HomePageView", "Check In", nullptr));
        EventsGroupBox->setTitle(QApplication::translate("HomePageView", "Events", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = EventTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("HomePageView", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = EventTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("HomePageView", "Room", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = EventTable->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("HomePageView", "Start Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = EventTable->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("HomePageView", "End Time", nullptr));
        menuLab_Check_in_System->setTitle(QApplication::translate("HomePageView", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("HomePageView", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePageView: public Ui_HomePageView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGEVIEW_H
