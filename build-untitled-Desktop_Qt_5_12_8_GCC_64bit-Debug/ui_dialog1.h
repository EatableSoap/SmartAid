/********************************************************************************
** Form generated from reading UI file 'dialog1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG1_H
#define UI_DIALOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialog1
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *name;
    QLineEdit *password;
    QRadioButton *Doctor;
    QRadioButton *radioButton_2;
    QTextBrowser *textBrowser_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *age;
    QLineEdit *gender;
    QLineEdit *phone;
    QLineEdit *address;
    QPushButton *enroll;
    QPushButton *out;

    void setupUi(QDialog *Dialog1)
    {
        if (Dialog1->objectName().isEmpty())
            Dialog1->setObjectName(QString::fromUtf8("Dialog1"));
        Dialog1->resize(597, 363);
        textBrowser = new QTextBrowser(Dialog1);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 371, 151));
        label = new QLabel(Dialog1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 111, 17));
        label_2 = new QLabel(Dialog1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 67, 17));
        label_3 = new QLabel(Dialog1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 80, 67, 17));
        label_4 = new QLabel(Dialog1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 130, 67, 17));
        name = new QLineEdit(Dialog1);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(120, 40, 113, 25));
        password = new QLineEdit(Dialog1);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(120, 70, 113, 25));
        Doctor = new QRadioButton(Dialog1);
        Doctor->setObjectName(QString::fromUtf8("Doctor"));
        Doctor->setGeometry(QRect(120, 120, 71, 23));
        radioButton_2 = new QRadioButton(Dialog1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(210, 120, 91, 23));
        textBrowser_2 = new QTextBrowser(Dialog1);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(20, 170, 371, 192));
        label_5 = new QLabel(Dialog1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 180, 221, 17));
        label_6 = new QLabel(Dialog1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 220, 31, 17));
        label_7 = new QLabel(Dialog1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 260, 51, 17));
        label_8 = new QLabel(Dialog1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 300, 51, 17));
        label_9 = new QLabel(Dialog1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 330, 61, 17));
        age = new QLineEdit(Dialog1);
        age->setObjectName(QString::fromUtf8("age"));
        age->setGeometry(QRect(110, 210, 113, 25));
        gender = new QLineEdit(Dialog1);
        gender->setObjectName(QString::fromUtf8("gender"));
        gender->setGeometry(QRect(110, 250, 113, 25));
        phone = new QLineEdit(Dialog1);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(110, 290, 113, 25));
        address = new QLineEdit(Dialog1);
        address->setObjectName(QString::fromUtf8("address"));
        address->setGeometry(QRect(110, 330, 113, 25));
        enroll = new QPushButton(Dialog1);
        enroll->setObjectName(QString::fromUtf8("enroll"));
        enroll->setGeometry(QRect(470, 250, 89, 25));
        out = new QPushButton(Dialog1);
        out->setObjectName(QString::fromUtf8("out"));
        out->setGeometry(QRect(470, 300, 91, 31));

        retranslateUi(Dialog1);
        QObject::connect(out, SIGNAL(clicked()), Dialog1, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QApplication::translate("Dialog1", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog1", "Information", nullptr));
        label_2->setText(QApplication::translate("Dialog1", "Name", nullptr));
        label_3->setText(QApplication::translate("Dialog1", "Password", nullptr));
        label_4->setText(QApplication::translate("Dialog1", "TextLabel", nullptr));
        password->setText(QString());
        Doctor->setText(QApplication::translate("Dialog1", "Doctor", nullptr));
        radioButton_2->setText(QApplication::translate("Dialog1", "people", nullptr));
        label_5->setText(QApplication::translate("Dialog1", "Information(not necessary)", nullptr));
        label_6->setText(QApplication::translate("Dialog1", "Age", nullptr));
        label_7->setText(QApplication::translate("Dialog1", "gender", nullptr));
        label_8->setText(QApplication::translate("Dialog1", "phone", nullptr));
        label_9->setText(QApplication::translate("Dialog1", "address", nullptr));
        enroll->setText(QApplication::translate("Dialog1", "enroll", nullptr));
        out->setText(QApplication::translate("Dialog1", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog1: public Ui_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H
