/********************************************************************************
** Form generated from reading UI file 'dinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DINFORMATION_H
#define UI_DINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dinformation
{
public:
    QPushButton *Out;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QWidget *dinformation)
    {
        if (dinformation->objectName().isEmpty())
            dinformation->setObjectName(QString::fromUtf8("dinformation"));
        dinformation->resize(1265, 967);
        Out = new QPushButton(dinformation);
        Out->setObjectName(QString::fromUtf8("Out"));
        Out->setGeometry(QRect(1040, 860, 161, 71));
        label = new QLabel(dinformation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 151, 61));
        lineEdit = new QLineEdit(dinformation);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(260, 20, 421, 61));
        label_2 = new QLabel(dinformation);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 100, 141, 51));

        retranslateUi(dinformation);

        QMetaObject::connectSlotsByName(dinformation);
    } // setupUi

    void retranslateUi(QWidget *dinformation)
    {
        dinformation->setWindowTitle(QApplication::translate("dinformation", "Form", nullptr));
        Out->setText(QApplication::translate("dinformation", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("dinformation", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("dinformation", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dinformation: public Ui_dinformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DINFORMATION_H
