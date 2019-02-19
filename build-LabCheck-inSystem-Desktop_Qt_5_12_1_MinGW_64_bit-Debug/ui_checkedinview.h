/********************************************************************************
** Form generated from reading UI file 'checkedinview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKEDINVIEW_H
#define UI_CHECKEDINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CheckedInView
{
public:

    void setupUi(QDialog *CheckedInView)
    {
        if (CheckedInView->objectName().isEmpty())
            CheckedInView->setObjectName(QString::fromUtf8("CheckedInView"));
        CheckedInView->resize(613, 466);

        retranslateUi(CheckedInView);

        QMetaObject::connectSlotsByName(CheckedInView);
    } // setupUi

    void retranslateUi(QDialog *CheckedInView)
    {
        CheckedInView->setWindowTitle(QApplication::translate("CheckedInView", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckedInView: public Ui_CheckedInView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKEDINVIEW_H
