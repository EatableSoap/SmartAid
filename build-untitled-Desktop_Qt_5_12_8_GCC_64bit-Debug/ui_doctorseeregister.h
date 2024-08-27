/********************************************************************************
** Form generated from reading UI file 'doctorseeregister.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORSEEREGISTER_H
#define UI_DOCTORSEEREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctorseeregister
{
public:
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QLineEdit *name;
    QLabel *label_6;
    QLineEdit *sex;
    QLabel *label_3;
    QLineEdit *age;
    QLabel *label_11;
    QLineEdit *address;
    QLabel *label_7;
    QLineEdit *phone;
    QLabel *label_8;
    QLineEdit *room;
    QLabel *label_9;
    QLineEdit *Name;
    QLabel *label_10;
    QLineEdit *signature;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *save_2;
    QPushButton *exit;

    void setupUi(QWidget *doctorseeregister)
    {
        if (doctorseeregister->objectName().isEmpty())
            doctorseeregister->setObjectName(QString::fromUtf8("doctorseeregister"));
        doctorseeregister->resize(1060, 690);
        formLayoutWidget_2 = new QWidget(doctorseeregister);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(80, 100, 891, 451));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(formLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_12);

        name = new QLineEdit(formLayoutWidget_2);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, name);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        sex = new QLineEdit(formLayoutWidget_2);
        sex->setObjectName(QString::fromUtf8("sex"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, sex);

        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        age = new QLineEdit(formLayoutWidget_2);
        age->setObjectName(QString::fromUtf8("age"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, age);

        label_11 = new QLabel(formLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_11);

        address = new QLineEdit(formLayoutWidget_2);
        address->setObjectName(QString::fromUtf8("address"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, address);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_7);

        phone = new QLineEdit(formLayoutWidget_2);
        phone->setObjectName(QString::fromUtf8("phone"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, phone);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_8);

        room = new QLineEdit(formLayoutWidget_2);
        room->setObjectName(QString::fromUtf8("room"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, room);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_9);

        Name = new QLineEdit(formLayoutWidget_2);
        Name->setObjectName(QString::fromUtf8("Name"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, Name);

        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_10);

        signature = new QLineEdit(formLayoutWidget_2);
        signature->setObjectName(QString::fromUtf8("signature"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, signature);

        horizontalLayoutWidget = new QWidget(doctorseeregister);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 590, 831, 69));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        save_2 = new QPushButton(horizontalLayoutWidget);
        save_2->setObjectName(QString::fromUtf8("save_2"));
        save_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #473C8B; /*\350\203\214\346\231\257\350\211\262*/ \n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius:5px; /*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
"	border-color: #8B7355;\n"
"	font: bold 36px;\n"
"	min-width:2em;\n"
"	color:white; /*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"	font-family:\345\215\216\346\226\207\346\226\260\351\255\217;\n"
"	padding: 5px;\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(0, 150, 0);\n"
"}\n"
" \n"
"QPushButton:pressed\n"
"{\n"
"	background-color: #1E90FF; /*\344\274\252\347\212\266\346\200\201\347\273\217\350\277\207\346\227\266\350\203\214\346\231\257\350\211\262*/ \n"
"	border-style: inset;\n"
"}\n"
"QPushButton:!enabled{\n"
"	background-color: rgb(100, 100, 100);\n"
"	border-style: inset;\n"
"}"));

        horizontalLayout_5->addWidget(save_2);

        exit = new QPushButton(horizontalLayoutWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #473C8B; /*\350\203\214\346\231\257\350\211\262*/ \n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius:5px; /*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
"	border-color: #8B7355;\n"
"	font: bold 36px;\n"
"	min-width:2em;\n"
"	color:white; /*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"	font-family:\345\215\216\346\226\207\346\226\260\351\255\217;\n"
"	padding: 5px;\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(0, 150, 0);\n"
"}\n"
" \n"
"QPushButton:pressed\n"
"{\n"
"	background-color: #1E90FF; /*\344\274\252\347\212\266\346\200\201\347\273\217\350\277\207\346\227\266\350\203\214\346\231\257\350\211\262*/ \n"
"	border-style: inset;\n"
"}\n"
"QPushButton:!enabled{\n"
"	background-color: rgb(100, 100, 100);\n"
"	border-style: inset;\n"
"}"));

        horizontalLayout_5->addWidget(exit);


        retranslateUi(doctorseeregister);
        QObject::connect(exit, SIGNAL(clicked()), doctorseeregister, SLOT(close()));

        QMetaObject::connectSlotsByName(doctorseeregister);
    } // setupUi

    void retranslateUi(QWidget *doctorseeregister)
    {
        doctorseeregister->setWindowTitle(QApplication::translate("doctorseeregister", "Form", nullptr));
        label_12->setText(QApplication::translate("doctorseeregister", "\346\202\243\350\200\205\345\247\223\345\220\215", nullptr));
        label_6->setText(QApplication::translate("doctorseeregister", "\346\200\247\345\210\253", nullptr));
        label_3->setText(QApplication::translate("doctorseeregister", "\345\271\264\351\276\204", nullptr));
        label_11->setText(QApplication::translate("doctorseeregister", "\344\275\217\345\235\200", nullptr));
        label_7->setText(QApplication::translate("doctorseeregister", "\347\224\265\350\257\235", nullptr));
        label_8->setText(QApplication::translate("doctorseeregister", "\346\211\200\345\261\236\347\247\221\345\256\244", nullptr));
        label_9->setText(QApplication::translate("doctorseeregister", "\347\224\250\346\210\267\345\220\215\347\247\260", nullptr));
        label_10->setText(QApplication::translate("doctorseeregister", "\344\270\252\346\200\247\347\255\276\345\220\215", nullptr));
        save_2->setText(QApplication::translate("doctorseeregister", "\344\277\235\345\255\230\344\270\216\346\233\264\346\226\260", nullptr));
        exit->setText(QApplication::translate("doctorseeregister", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctorseeregister: public Ui_doctorseeregister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORSEEREGISTER_H
