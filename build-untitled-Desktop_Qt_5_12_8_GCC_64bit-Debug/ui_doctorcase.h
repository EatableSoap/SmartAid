/********************************************************************************
** Form generated from reading UI file 'doctorcase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORCASE_H
#define UI_DOCTORCASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctorcase
{
public:
    QLabel *label_3;
    QLabel *label_6;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name;
    QLineEdit *sex;
    QLabel *label_5;
    QLineEdit *age;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *phone;
    QLabel *label_7;
    QLineEdit *address;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *room;
    QLabel *label_10;
    QLineEdit *order;
    QDateTimeEdit *dateTimeEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *save;
    QPushButton *exit;

    void setupUi(QWidget *doctorcase)
    {
        if (doctorcase->objectName().isEmpty())
            doctorcase->setObjectName(QString::fromUtf8("doctorcase"));
        doctorcase->resize(979, 777);
        doctorcase->setStyleSheet(QString::fromUtf8("#doctorcase{border-image: url(:/pitcure/UI4.jpg);}"));
        label_3 = new QLabel(doctorcase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 60, 241, 61));
        label_3->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #60ff00; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 16pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLabel:disabled { /* QLabel\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #B4B4B4;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLabel#PaddingLabel { /* \345\256\232\344\271\211\346\234\211Padding\347\232\204QLabel\357\274\214PaddingLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344"
                        "\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	padding-left: 10px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\21110px */\n"
"}\n"
"\n"
"QLabel#ImageLabel { /* \345\256\232\344\271\211\346\234\211\350\203\214\346\231\257\345\233\276\347\211\207\347\232\204QLabel\357\274\214ImageLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/original\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224QLabel\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
""));
        label_6 = new QLabel(doctorcase);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 420, 231, 71));
        label_6->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #60ff00; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 16pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLabel:disabled { /* QLabel\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #B4B4B4;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLabel#PaddingLabel { /* \345\256\232\344\271\211\346\234\211Padding\347\232\204QLabel\357\274\214PaddingLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344"
                        "\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	padding-left: 10px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\21110px */\n"
"}\n"
"\n"
"QLabel#ImageLabel { /* \345\256\232\344\271\211\346\234\211\350\203\214\346\231\257\345\233\276\347\211\207\347\232\204QLabel\357\274\214ImageLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/original\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224QLabel\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
""));
        formLayoutWidget = new QWidget(doctorcase);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 130, 881, 290));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #000000; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 12pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLabel:disabled { /* QLabel\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #B4B4B4;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLabel#PaddingLabel { /* \345\256\232\344\271\211\346\234\211Pad"
                        "ding\347\232\204QLabel\357\274\214PaddingLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	padding-left: 10px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\21110px */\n"
"}\n"
"\n"
"QLabel#ImageLabel { /* \345\256\232\344\271\211\346\234\211\350\203\214\346\231\257\345\233\276\347\211\207\347\232\204QLabel\357\274\214ImageLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/original\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224QLabel\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227"
                        "\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
""));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        name = new QLineEdit(formLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        sex = new QLineEdit(formLayoutWidget);
        sex->setObjectName(QString::fromUtf8("sex"));

        formLayout->setWidget(1, QFormLayout::FieldRole, sex);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #000000; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 12pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLabel:disabled { /* QLabel\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #B4B4B4;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLabel#PaddingLabel { /* \345\256\232\344\271\211\346\234\211Pad"
                        "ding\347\232\204QLabel\357\274\214PaddingLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	padding-left: 10px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\21110px */\n"
"}\n"
"\n"
"QLabel#ImageLabel { /* \345\256\232\344\271\211\346\234\211\350\203\214\346\231\257\345\233\276\347\211\207\347\232\204QLabel\357\274\214ImageLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/original\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224QLabel\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227"
                        "\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
""));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        age = new QLineEdit(formLayoutWidget);
        age->setObjectName(QString::fromUtf8("age"));

        formLayout->setWidget(2, QFormLayout::FieldRole, age);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #000000; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 12pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLabel:disabled { /* QLabel\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #B4B4B4;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLabel#PaddingLabel { /* \345\256\232\344\271\211\346\234\211Pad"
                        "ding\347\232\204QLabel\357\274\214PaddingLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	padding-left: 10px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\21110px */\n"
"}\n"
"\n"
"QLabel#ImageLabel { /* \345\256\232\344\271\211\346\234\211\350\203\214\346\231\257\345\233\276\347\211\207\347\232\204QLabel\357\274\214ImageLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/original\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224QLabel\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227"
                        "\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
""));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #000000; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 12pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLabel:disabled { /* QLabel\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #B4B4B4;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLabel#PaddingLabel { /* \345\256\232\344\271\211\346\234\211Pad"
                        "ding\347\232\204QLabel\357\274\214PaddingLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	padding-left: 10px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\21110px */\n"
"}\n"
"\n"
"QLabel#ImageLabel { /* \345\256\232\344\271\211\346\234\211\350\203\214\346\231\257\345\233\276\347\211\207\347\232\204QLabel\357\274\214ImageLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/original\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224QLabel\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227"
                        "\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
""));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        phone = new QLineEdit(formLayoutWidget);
        phone->setObjectName(QString::fromUtf8("phone"));

        formLayout->setWidget(3, QFormLayout::FieldRole, phone);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #000000; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 12pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLabel:disabled { /* QLabel\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #B4B4B4;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLabel#PaddingLabel { /* \345\256\232\344\271\211\346\234\211Pad"
                        "ding\347\232\204QLabel\357\274\214PaddingLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	padding-left: 10px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\21110px */\n"
"}\n"
"\n"
"QLabel#ImageLabel { /* \345\256\232\344\271\211\346\234\211\350\203\214\346\231\257\345\233\276\347\211\207\347\232\204QLabel\357\274\214ImageLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/original\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224QLabel\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227"
                        "\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
""));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        address = new QLineEdit(formLayoutWidget);
        address->setObjectName(QString::fromUtf8("address"));

        formLayout->setWidget(4, QFormLayout::FieldRole, address);

        formLayoutWidget_2 = new QWidget(doctorcase);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(20, 500, 881, 170));
        formLayout_3 = new QFormLayout(formLayoutWidget_2);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #000000; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 12pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLabel:disabled { /* QLabel\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #B4B4B4;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLabel#PaddingLabel { /* \345\256\232\344\271\211\346\234\211Pad"
                        "ding\347\232\204QLabel\357\274\214PaddingLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	padding-left: 10px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\21110px */\n"
"}\n"
"\n"
"QLabel#ImageLabel { /* \345\256\232\344\271\211\346\234\211\350\203\214\346\231\257\345\233\276\347\211\207\347\232\204QLabel\357\274\214ImageLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/original\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224QLabel\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227"
                        "\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
""));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #000000; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 12pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLabel:disabled { /* QLabel\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #B4B4B4;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLabel#PaddingLabel { /* \345\256\232\344\271\211\346\234\211Pad"
                        "ding\347\232\204QLabel\357\274\214PaddingLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	padding-left: 10px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\21110px */\n"
"}\n"
"\n"
"QLabel#ImageLabel { /* \345\256\232\344\271\211\346\234\211\350\203\214\346\231\257\345\233\276\347\211\207\347\232\204QLabel\357\274\214ImageLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/original\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224QLabel\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227"
                        "\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
""));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_9);

        room = new QLineEdit(formLayoutWidget_2);
        room->setObjectName(QString::fromUtf8("room"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, room);

        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #298DFF; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 12pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLabel:disabled { /* QLabel\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #B4B4B4;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLabel#PaddingLabel { /* \345\256\232\344\271\211\346\234\211Pad"
                        "ding\347\232\204QLabel\357\274\214PaddingLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	padding-left: 10px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\21110px */\n"
"}\n"
"\n"
"QLabel#ImageLabel { /* \345\256\232\344\271\211\346\234\211\350\203\214\346\231\257\345\233\276\347\211\207\347\232\204QLabel\357\274\214ImageLabel\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/original\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224QLabel\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227"
                        "\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
""));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_10);

        order = new QLineEdit(formLayoutWidget_2);
        order->setObjectName(QString::fromUtf8("order"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, order);

        dateTimeEdit = new QDateTimeEdit(formLayoutWidget_2);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, dateTimeEdit);

        horizontalLayoutWidget = new QWidget(doctorcase);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(260, 690, 401, 69));
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


        retranslateUi(doctorcase);
        QObject::connect(exit, SIGNAL(clicked()), doctorcase, SLOT(close()));

        QMetaObject::connectSlotsByName(doctorcase);
    } // setupUi

    void retranslateUi(QWidget *doctorcase)
    {
        doctorcase->setWindowTitle(QApplication::translate("doctorcase", "Form", nullptr));
        label_3->setText(QApplication::translate("doctorcase", "\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        label_6->setText(QApplication::translate("doctorcase", "\345\214\273\347\224\237\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("doctorcase", "\346\202\243\350\200\205\345\247\223\345\220\215", nullptr));
        label_5->setText(QApplication::translate("doctorcase", "\346\202\243\350\200\205\345\271\264\351\276\204", nullptr));
        label_2->setText(QApplication::translate("doctorcase", "\346\202\243\350\200\205\346\200\247\345\210\253", nullptr));
        label_4->setText(QApplication::translate("doctorcase", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        label_7->setText(QApplication::translate("doctorcase", "\345\256\266\345\272\255\345\234\260\345\235\200", nullptr));
        label_8->setText(QApplication::translate("doctorcase", "\346\202\243\350\200\205\351\242\204\347\272\246\346\227\266\351\227\264", nullptr));
        label_9->setText(QApplication::translate("doctorcase", "\345\214\273\347\224\237\346\211\200\345\261\236\347\247\221\345\256\244", nullptr));
        label_10->setText(QApplication::translate("doctorcase", "\345\214\273\347\224\237\350\257\212\346\226\255", nullptr));
        save->setText(QApplication::translate("doctorcase", "\344\277\235\345\255\230", nullptr));
        exit->setText(QApplication::translate("doctorcase", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctorcase: public Ui_doctorcase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORCASE_H
