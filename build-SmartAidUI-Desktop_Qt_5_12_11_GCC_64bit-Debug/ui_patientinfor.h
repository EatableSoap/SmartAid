/********************************************************************************
** Form generated from reading UI file 'patientinfor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTINFOR_H
#define UI_PATIENTINFOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patientinfor
{
public:
    QLabel *label_12;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLineEdit *IDname;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *sex;
    QLabel *label_3;
    QLineEdit *age;
    QLabel *label_6;
    QLineEdit *adress;
    QLabel *label_7;
    QLineEdit *Signature;
    QLineEdit *phone;
    QLabel *label_4;
    QLineEdit *oldpassword;
    QLabel *label_9;
    QLineEdit *newpassword;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *save;
    QPushButton *exit;

    void setupUi(QWidget *patientinfor)
    {
        if (patientinfor->objectName().isEmpty())
            patientinfor->setObjectName(QString::fromUtf8("patientinfor"));
        patientinfor->resize(675, 690);
        patientinfor->setStyleSheet(QString::fromUtf8("background-color: #F5F5F5;"));
        label_12 = new QLabel(patientinfor);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 690, 129, 34));
        formLayoutWidget = new QWidget(patientinfor);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 60, 601, 485));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        IDname = new QLineEdit(formLayoutWidget);
        IDname->setObjectName(QString::fromUtf8("IDname"));

        formLayout->setWidget(0, QFormLayout::FieldRole, IDname);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        name = new QLineEdit(formLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        sex = new QLineEdit(formLayoutWidget);
        sex->setObjectName(QString::fromUtf8("sex"));

        formLayout->setWidget(3, QFormLayout::FieldRole, sex);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        age = new QLineEdit(formLayoutWidget);
        age->setObjectName(QString::fromUtf8("age"));

        formLayout->setWidget(4, QFormLayout::FieldRole, age);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        adress = new QLineEdit(formLayoutWidget);
        adress->setObjectName(QString::fromUtf8("adress"));

        formLayout->setWidget(5, QFormLayout::FieldRole, adress);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        Signature = new QLineEdit(formLayoutWidget);
        Signature->setObjectName(QString::fromUtf8("Signature"));

        formLayout->setWidget(6, QFormLayout::FieldRole, Signature);

        phone = new QLineEdit(formLayoutWidget);
        phone->setObjectName(QString::fromUtf8("phone"));

        formLayout->setWidget(2, QFormLayout::FieldRole, phone);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_4);

        oldpassword = new QLineEdit(formLayoutWidget);
        oldpassword->setObjectName(QString::fromUtf8("oldpassword"));

        formLayout->setWidget(7, QFormLayout::FieldRole, oldpassword);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        newpassword = new QLineEdit(formLayoutWidget);
        newpassword->setObjectName(QString::fromUtf8("newpassword"));

        formLayout->setWidget(8, QFormLayout::FieldRole, newpassword);

        horizontalLayoutWidget = new QWidget(patientinfor);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(80, 600, 498, 69));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        save = new QPushButton(horizontalLayoutWidget);
        save->setObjectName(QString::fromUtf8("save"));
        save->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout->addWidget(save);

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

        horizontalLayout->addWidget(exit);


        retranslateUi(patientinfor);

        QMetaObject::connectSlotsByName(patientinfor);
    } // setupUi

    void retranslateUi(QWidget *patientinfor)
    {
        patientinfor->setWindowTitle(QApplication::translate("patientinfor", "Form", nullptr));
        label_12->setText(QString());
        label_8->setText(QApplication::translate("patientinfor", "\350\264\246\345\217\267ID", nullptr));
        label->setText(QApplication::translate("patientinfor", "\345\247\223\345\220\215", nullptr));
        label_5->setText(QApplication::translate("patientinfor", "\347\224\265\350\257\235", nullptr));
        label_2->setText(QApplication::translate("patientinfor", "\346\200\247\345\210\253", nullptr));
        label_3->setText(QApplication::translate("patientinfor", "\345\271\264\351\276\204", nullptr));
        label_6->setText(QApplication::translate("patientinfor", "\345\256\266\345\272\255\344\275\217\345\235\200", nullptr));
        adress->setText(QString());
        label_7->setText(QApplication::translate("patientinfor", "\344\270\252\346\200\247\347\255\276\345\220\215", nullptr));
        label_4->setText(QApplication::translate("patientinfor", "\346\227\247\345\257\206\347\240\201", nullptr));
        label_9->setText(QApplication::translate("patientinfor", "\346\226\260\345\257\206\347\240\201", nullptr));
        save->setText(QApplication::translate("patientinfor", "\344\277\235\345\255\230\344\270\216\346\233\264\346\226\260", nullptr));
        exit->setText(QApplication::translate("patientinfor", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientinfor: public Ui_patientinfor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTINFOR_H
