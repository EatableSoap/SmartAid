/********************************************************************************
** Form generated from reading UI file 'pinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINFORMATION_H
#define UI_PINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pinformation
{
public:

    void setupUi(QWidget *pinformation)
    {
        if (pinformation->objectName().isEmpty())
            pinformation->setObjectName(QString::fromUtf8("pinformation"));
        pinformation->resize(1276, 923);

        retranslateUi(pinformation);

        QMetaObject::connectSlotsByName(pinformation);
    } // setupUi

    void retranslateUi(QWidget *pinformation)
    {
        pinformation->setWindowTitle(QApplication::translate("pinformation", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pinformation: public Ui_pinformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINFORMATION_H
