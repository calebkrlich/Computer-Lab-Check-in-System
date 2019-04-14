/********************************************************************************
** Form generated from reading UI file 'savelogsview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVELOGSVIEW_H
#define UI_SAVELOGSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveLogsView
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QDateTimeEdit *EndTimeEdit;
    QDateTimeEdit *StartTimeEdit;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QCheckBox *StudentsCheckBox;
    QCheckBox *FacultyCheckBox;
    QCheckBox *EventsCheckBox;
    QCheckBox *LogsCheckBox;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *DirectoryButton;
    QLineEdit *FileLocationLineEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *FileNameLineEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *SaveButton;
    QPushButton *CancelButton;

    void setupUi(QDialog *SaveLogsView)
    {
        if (SaveLogsView->objectName().isEmpty())
            SaveLogsView->setObjectName(QString::fromUtf8("SaveLogsView"));
        SaveLogsView->resize(292, 426);
        gridLayoutWidget = new QWidget(SaveLogsView);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 20, 261, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        EndTimeEdit = new QDateTimeEdit(gridLayoutWidget);
        EndTimeEdit->setObjectName(QString::fromUtf8("EndTimeEdit"));

        gridLayout->addWidget(EndTimeEdit, 1, 1, 1, 1);

        StartTimeEdit = new QDateTimeEdit(gridLayoutWidget);
        StartTimeEdit->setObjectName(QString::fromUtf8("StartTimeEdit"));

        gridLayout->addWidget(StartTimeEdit, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(SaveLogsView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 110, 261, 121));
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 30, 241, 80));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        StudentsCheckBox = new QCheckBox(gridLayoutWidget_2);
        StudentsCheckBox->setObjectName(QString::fromUtf8("StudentsCheckBox"));

        gridLayout_2->addWidget(StudentsCheckBox, 1, 0, 1, 1);

        FacultyCheckBox = new QCheckBox(gridLayoutWidget_2);
        FacultyCheckBox->setObjectName(QString::fromUtf8("FacultyCheckBox"));

        gridLayout_2->addWidget(FacultyCheckBox, 0, 0, 1, 1);

        EventsCheckBox = new QCheckBox(gridLayoutWidget_2);
        EventsCheckBox->setObjectName(QString::fromUtf8("EventsCheckBox"));

        gridLayout_2->addWidget(EventsCheckBox, 0, 1, 1, 1);

        LogsCheckBox = new QCheckBox(gridLayoutWidget_2);
        LogsCheckBox->setObjectName(QString::fromUtf8("LogsCheckBox"));

        gridLayout_2->addWidget(LogsCheckBox, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(SaveLogsView);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 240, 261, 131));
        horizontalLayoutWidget = new QWidget(groupBox_2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 241, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        DirectoryButton = new QPushButton(horizontalLayoutWidget);
        DirectoryButton->setObjectName(QString::fromUtf8("DirectoryButton"));

        horizontalLayout->addWidget(DirectoryButton);

        FileLocationLineEdit = new QLineEdit(horizontalLayoutWidget);
        FileLocationLineEdit->setObjectName(QString::fromUtf8("FileLocationLineEdit"));

        horizontalLayout->addWidget(FileLocationLineEdit);

        horizontalLayoutWidget_2 = new QWidget(groupBox_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 80, 241, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        FileNameLineEdit = new QLineEdit(horizontalLayoutWidget_2);
        FileNameLineEdit->setObjectName(QString::fromUtf8("FileNameLineEdit"));

        horizontalLayout_2->addWidget(FileNameLineEdit);

        horizontalLayoutWidget_3 = new QWidget(SaveLogsView);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 380, 261, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        SaveButton = new QPushButton(horizontalLayoutWidget_3);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));

        horizontalLayout_3->addWidget(SaveButton);

        CancelButton = new QPushButton(horizontalLayoutWidget_3);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        horizontalLayout_3->addWidget(CancelButton);


        retranslateUi(SaveLogsView);

        QMetaObject::connectSlotsByName(SaveLogsView);
    } // setupUi

    void retranslateUi(QDialog *SaveLogsView)
    {
        SaveLogsView->setWindowTitle(QApplication::translate("SaveLogsView", "Save Logs", nullptr));
        label->setText(QApplication::translate("SaveLogsView", "From:", nullptr));
        label_2->setText(QApplication::translate("SaveLogsView", "To:", nullptr));
        groupBox->setTitle(QApplication::translate("SaveLogsView", "Options", nullptr));
        StudentsCheckBox->setText(QApplication::translate("SaveLogsView", "Students", nullptr));
        FacultyCheckBox->setText(QApplication::translate("SaveLogsView", "Faculty", nullptr));
        EventsCheckBox->setText(QApplication::translate("SaveLogsView", "Events", nullptr));
        LogsCheckBox->setText(QApplication::translate("SaveLogsView", "Logs", nullptr));
        groupBox_2->setTitle(QApplication::translate("SaveLogsView", "File Location", nullptr));
        DirectoryButton->setText(QApplication::translate("SaveLogsView", "Browse...", nullptr));
        label_3->setText(QApplication::translate("SaveLogsView", "File name:", nullptr));
        SaveButton->setText(QApplication::translate("SaveLogsView", "Export Logs", nullptr));
        CancelButton->setText(QApplication::translate("SaveLogsView", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveLogsView: public Ui_SaveLogsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVELOGSVIEW_H
