/********************************************************************************
** Form generated from reading UI file 'people.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLE_H
#define UI_PEOPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_people
{
public:
    QPushButton *OUT;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QDialog *people)
    {
        if (people->objectName().isEmpty())
            people->setObjectName(QString::fromUtf8("people"));
        people->resize(854, 649);
        OUT = new QPushButton(people);
        OUT->setObjectName(QString::fromUtf8("OUT"));
        OUT->setGeometry(QRect(10, 580, 211, 51));
        pushButton_2 = new QPushButton(people);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 20, 211, 61));
        pushButton_3 = new QPushButton(people);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 100, 211, 71));
        pushButton_4 = new QPushButton(people);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 190, 211, 61));
        pushButton_5 = new QPushButton(people);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 270, 211, 51));
        pushButton_6 = new QPushButton(people);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 340, 211, 61));
        pushButton_7 = new QPushButton(people);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 420, 211, 61));
        pushButton_8 = new QPushButton(people);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 500, 211, 61));

        retranslateUi(people);
        QObject::connect(OUT, SIGNAL(clicked()), people, SLOT(close()));

        QMetaObject::connectSlotsByName(people);
    } // setupUi

    void retranslateUi(QDialog *people)
    {
        people->setWindowTitle(QApplication::translate("people", "Dialog", nullptr));
        OUT->setText(QApplication::translate("people", "\351\200\200\345\207\272", nullptr));
        pushButton_2->setText(QApplication::translate("people", "\346\214\202\345\217\267", nullptr));
        pushButton_3->setText(QApplication::translate("people", "\346\237\245\347\234\213\347\227\205\344\276\213", nullptr));
        pushButton_4->setText(QApplication::translate("people", "\346\237\245\347\234\213\345\244\204\346\226\271\345\222\214\347\274\264\350\264\271", nullptr));
        pushButton_5->setText(QApplication::translate("people", "\347\274\226\350\276\221\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_6->setText(QApplication::translate("people", "\346\237\245\347\234\213\345\214\273\347\224\237\344\277\241\346\201\257", nullptr));
        pushButton_7->setText(QApplication::translate("people", "\345\201\245\345\272\267\350\257\204\344\274\260", nullptr));
        pushButton_8->setText(QApplication::translate("people", "\345\214\273\346\202\243\346\262\237\351\200\232\345\271\263\345\217\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class people: public Ui_people {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLE_H
