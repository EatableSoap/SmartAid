/********************************************************************************
** Form generated from reading UI file 'patientseedoc.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTSEEDOC_H
#define UI_PATIENTSEEDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patientseedoc
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *save;
    QPushButton *exit;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QLineEdit *name;
    QLabel *label_4;
    QLineEdit *sex;
    QLabel *label_3;
    QLineEdit *age;
    QLabel *label_8;
    QLineEdit *address;
    QLabel *label_5;
    QLineEdit *phone;
    QLabel *label_6;
    QLineEdit *room;
    QLabel *label_7;
    QLineEdit *signature;

    void setupUi(QWidget *patientseedoc)
    {
        if (patientseedoc->objectName().isEmpty())
            patientseedoc->setObjectName(QString::fromUtf8("patientseedoc"));
        patientseedoc->resize(854, 635);
        patientseedoc->setStyleSheet(QString::fromUtf8("background-color: #FFFDE7;"));
        horizontalLayoutWidget = new QWidget(patientseedoc);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(120, 530, 611, 69));
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

        formLayoutWidget_2 = new QWidget(patientseedoc);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(120, 91, 621, 391));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(formLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_12);

        name = new QLineEdit(formLayoutWidget_2);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, name);

        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        sex = new QLineEdit(formLayoutWidget_2);
        sex->setObjectName(QString::fromUtf8("sex"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, sex);

        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        age = new QLineEdit(formLayoutWidget_2);
        age->setObjectName(QString::fromUtf8("age"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, age);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        address = new QLineEdit(formLayoutWidget_2);
        address->setObjectName(QString::fromUtf8("address"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, address);

        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_5);

        phone = new QLineEdit(formLayoutWidget_2);
        phone->setObjectName(QString::fromUtf8("phone"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, phone);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_6);

        room = new QLineEdit(formLayoutWidget_2);
        room->setObjectName(QString::fromUtf8("room"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, room);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_7);

        signature = new QLineEdit(formLayoutWidget_2);
        signature->setObjectName(QString::fromUtf8("signature"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, signature);


        retranslateUi(patientseedoc);

        QMetaObject::connectSlotsByName(patientseedoc);
    } // setupUi

    void retranslateUi(QWidget *patientseedoc)
    {
        patientseedoc->setWindowTitle(QApplication::translate("patientseedoc", "Form", nullptr));
        save->setText(QApplication::translate("patientseedoc", "\344\277\235\345\255\230\344\270\216\346\233\264\346\226\260", nullptr));
        exit->setText(QApplication::translate("patientseedoc", "\351\200\200\345\207\272", nullptr));
        label_12->setText(QApplication::translate("patientseedoc", "\345\214\273\347\224\237\345\247\223\345\220\215", nullptr));
        label_4->setText(QApplication::translate("patientseedoc", "\346\200\247\345\210\253", nullptr));
        label_3->setText(QApplication::translate("patientseedoc", "\345\271\264\351\276\204", nullptr));
        label_8->setText(QApplication::translate("patientseedoc", "\344\275\217\345\235\200", nullptr));
        label_5->setText(QApplication::translate("patientseedoc", "\347\224\265\350\257\235", nullptr));
        label_6->setText(QApplication::translate("patientseedoc", "\345\260\261\350\257\212\347\247\221\345\256\244", nullptr));
        label_7->setText(QApplication::translate("patientseedoc", "\344\270\252\346\200\247\347\255\276\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientseedoc: public Ui_patientseedoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTSEEDOC_H
