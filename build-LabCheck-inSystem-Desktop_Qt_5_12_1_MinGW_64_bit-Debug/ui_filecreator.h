/********************************************************************************
** Form generated from reading UI file 'filecreator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECREATOR_H
#define UI_FILECREATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileCreator
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *FilePathButton;

    void setupUi(QDialog *FileCreator)
    {
        if (FileCreator->objectName().isEmpty())
            FileCreator->setObjectName(QString::fromUtf8("FileCreator"));
        FileCreator->resize(400, 300);
        FileCreator->setModal(true);
        horizontalLayoutWidget = new QWidget(FileCreator);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 249, 361, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(FileCreator);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 20, 271, 21));
        lineEdit->setReadOnly(true);
        FilePathButton = new QPushButton(FileCreator);
        FilePathButton->setObjectName(QString::fromUtf8("FilePathButton"));
        FilePathButton->setGeometry(QRect(10, 20, 80, 21));

        retranslateUi(FileCreator);

        QMetaObject::connectSlotsByName(FileCreator);
    } // setupUi

    void retranslateUi(QDialog *FileCreator)
    {
        FileCreator->setWindowTitle(QApplication::translate("FileCreator", "Log File Creator", nullptr));
        FilePathButton->setText(QApplication::translate("FileCreator", "Save To", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileCreator: public Ui_FileCreator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECREATOR_H
