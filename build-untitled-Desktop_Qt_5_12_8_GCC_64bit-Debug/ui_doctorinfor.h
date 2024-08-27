/********************************************************************************
** Form generated from reading UI file 'doctorinfor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORINFOR_H
#define UI_DOCTORINFOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctorinfor
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_12;
    QLineEdit *name;
    QLabel *label_4;
    QLineEdit *sex;
    QLabel *label_3;
    QLineEdit *age;
    QLabel *label_5;
    QLineEdit *phone;
    QLabel *label_6;
    QLineEdit *adress;
    QLabel *label_7;
    QLineEdit *signature;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *save;
    QPushButton *change;
    QPushButton *out;

    void setupUi(QWidget *doctorinfor)
    {
        if (doctorinfor->objectName().isEmpty())
            doctorinfor->setObjectName(QString::fromUtf8("doctorinfor"));
        doctorinfor->resize(1175, 747);
        doctorinfor->setStyleSheet(QString::fromUtf8("#doctorinfor{border-image: url(:/pitcure/UI5.jpg);}"));
        formLayoutWidget = new QWidget(doctorinfor);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 100, 1021, 491));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_12);

        name = new QLineEdit(formLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        sex = new QLineEdit(formLayoutWidget);
        sex->setObjectName(QString::fromUtf8("sex"));
        sex->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));

        formLayout->setWidget(1, QFormLayout::FieldRole, sex);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        age = new QLineEdit(formLayoutWidget);
        age->setObjectName(QString::fromUtf8("age"));
        age->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));

        formLayout->setWidget(2, QFormLayout::FieldRole, age);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        phone = new QLineEdit(formLayoutWidget);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));

        formLayout->setWidget(3, QFormLayout::FieldRole, phone);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        adress = new QLineEdit(formLayoutWidget);
        adress->setObjectName(QString::fromUtf8("adress"));
        adress->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));

        formLayout->setWidget(4, QFormLayout::FieldRole, adress);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        signature = new QLineEdit(formLayoutWidget);
        signature->setObjectName(QString::fromUtf8("signature"));
        signature->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));

        formLayout->setWidget(5, QFormLayout::FieldRole, signature);

        horizontalLayoutWidget = new QWidget(doctorinfor);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(270, 640, 546, 75));
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
"	font: bold 40px;\n"
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

        change = new QPushButton(horizontalLayoutWidget);
        change->setObjectName(QString::fromUtf8("change"));
        change->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #473C8B; /*\350\203\214\346\231\257\350\211\262*/ \n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius:5px; /*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
"	border-color: #8B7355;\n"
"	font: bold 40px;\n"
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

        horizontalLayout->addWidget(change);

        out = new QPushButton(horizontalLayoutWidget);
        out->setObjectName(QString::fromUtf8("out"));
        out->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #473C8B; /*\350\203\214\346\231\257\350\211\262*/ \n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius:5px; /*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
"	border-color: #8B7355;\n"
"	font: bold 40px;\n"
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

        horizontalLayout->addWidget(out);


        retranslateUi(doctorinfor);
        QObject::connect(out, SIGNAL(clicked()), doctorinfor, SLOT(close()));

        QMetaObject::connectSlotsByName(doctorinfor);
    } // setupUi

    void retranslateUi(QWidget *doctorinfor)
    {
        doctorinfor->setWindowTitle(QApplication::translate("doctorinfor", "Form", nullptr));
        label_12->setText(QApplication::translate("doctorinfor", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QApplication::translate("doctorinfor", "\346\200\247\345\210\253", nullptr));
        label_3->setText(QApplication::translate("doctorinfor", "\345\271\264\351\276\204", nullptr));
        label_5->setText(QApplication::translate("doctorinfor", "\347\224\265\350\257\235", nullptr));
        label_6->setText(QApplication::translate("doctorinfor", "\346\211\200\345\261\236\347\247\221\345\256\244", nullptr));
        label_7->setText(QApplication::translate("doctorinfor", "\344\270\252\346\200\247\347\255\276\345\220\215", nullptr));
        save->setText(QApplication::translate("doctorinfor", "\344\277\235\345\255\230\344\270\216\346\233\264\346\226\260", nullptr));
        change->setText(QApplication::translate("doctorinfor", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        out->setText(QApplication::translate("doctorinfor", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctorinfor: public Ui_doctorinfor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORINFOR_H
