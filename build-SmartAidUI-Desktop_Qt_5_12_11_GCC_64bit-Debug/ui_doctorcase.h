/********************************************************************************
** Form generated from reading UI file 'doctorcase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORCASE_H
#define UI_DOCTORCASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctorcase
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *save;
    QPushButton *exit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QDateTimeEdit *dateTimeEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QComboBox *room;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *name;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *sex;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *age;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *address;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QLineEdit *phone;
    QLabel *label_10;
    QTextEdit *Diagnosis;
    QLabel *label_11;
    QTextEdit *Perscription;
    QLabel *label_12;
    QTextEdit *order;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QLineEdit *lineEdit;

    void setupUi(QWidget *doctorcase)
    {
        if (doctorcase->objectName().isEmpty())
            doctorcase->setObjectName(QString::fromUtf8("doctorcase"));
        doctorcase->resize(837, 1198);
        doctorcase->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutWidget = new QWidget(doctorcase);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(190, 1120, 401, 69));
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

        horizontalLayoutWidget_2 = new QWidget(doctorcase);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 153, 481, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(horizontalLayoutWidget_2);
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

        horizontalLayout_2->addWidget(label_8);

        dateTimeEdit = new QDateTimeEdit(horizontalLayoutWidget_2);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setDateTime(QDateTime(QDate(2000, 12, 12), QTime(0, 0, 0)));

        horizontalLayout_2->addWidget(dateTimeEdit);

        horizontalLayoutWidget_3 = new QWidget(doctorcase);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(520, 153, 297, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(horizontalLayoutWidget_3);
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

        horizontalLayout_3->addWidget(label_9);

        room = new QComboBox(horizontalLayoutWidget_3);
        room->addItem(QString());
        room->addItem(QString());
        room->addItem(QString());
        room->addItem(QString());
        room->addItem(QString());
        room->addItem(QString());
        room->addItem(QString());
        room->addItem(QString());
        room->addItem(QString());
        room->addItem(QString());
        room->setObjectName(QString::fromUtf8("room"));

        horizontalLayout_3->addWidget(room);

        horizontalLayoutWidget_4 = new QWidget(doctorcase);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(20, 253, 231, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_4);
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

        horizontalLayout_4->addWidget(label);

        name = new QLineEdit(horizontalLayoutWidget_4);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout_4->addWidget(name);

        horizontalLayoutWidget_5 = new QWidget(doctorcase);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(350, 253, 190, 80));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_5);
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

        horizontalLayout_5->addWidget(label_2);

        sex = new QLineEdit(horizontalLayoutWidget_5);
        sex->setObjectName(QString::fromUtf8("sex"));

        horizontalLayout_5->addWidget(sex);

        horizontalLayoutWidget_6 = new QWidget(doctorcase);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(610, 253, 201, 80));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_6);
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

        horizontalLayout_6->addWidget(label_5);

        age = new QLineEdit(horizontalLayoutWidget_6);
        age->setObjectName(QString::fromUtf8("age"));

        horizontalLayout_6->addWidget(age);

        horizontalLayoutWidget_7 = new QWidget(doctorcase);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(20, 353, 441, 80));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_7);
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

        horizontalLayout_7->addWidget(label_7);

        address = new QLineEdit(horizontalLayoutWidget_7);
        address->setObjectName(QString::fromUtf8("address"));

        horizontalLayout_7->addWidget(address);

        horizontalLayoutWidget_8 = new QWidget(doctorcase);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(480, 353, 331, 80));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_8);
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

        horizontalLayout_8->addWidget(label_4);

        phone = new QLineEdit(horizontalLayoutWidget_8);
        phone->setObjectName(QString::fromUtf8("phone"));

        horizontalLayout_8->addWidget(phone);

        label_10 = new QLabel(doctorcase);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 443, 128, 48));
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
        Diagnosis = new QTextEdit(doctorcase);
        Diagnosis->setObjectName(QString::fromUtf8("Diagnosis"));
        Diagnosis->setGeometry(QRect(20, 490, 791, 171));
        label_11 = new QLabel(doctorcase);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 663, 128, 48));
        label_11->setStyleSheet(QString::fromUtf8("* {\n"
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
        Perscription = new QTextEdit(doctorcase);
        Perscription->setObjectName(QString::fromUtf8("Perscription"));
        Perscription->setGeometry(QRect(20, 710, 791, 171));
        label_12 = new QLabel(doctorcase);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 883, 128, 48));
        label_12->setStyleSheet(QString::fromUtf8("* {\n"
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
        order = new QTextEdit(doctorcase);
        order->setObjectName(QString::fromUtf8("order"));
        order->setGeometry(QRect(20, 930, 791, 171));
        horizontalLayoutWidget_9 = new QWidget(doctorcase);
        horizontalLayoutWidget_9->setObjectName(QString::fromUtf8("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(20, 60, 791, 80));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_9);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_9->addWidget(label_3);

        lineEdit = new QLineEdit(horizontalLayoutWidget_9);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(lineEdit);


        retranslateUi(doctorcase);

        QMetaObject::connectSlotsByName(doctorcase);
    } // setupUi

    void retranslateUi(QWidget *doctorcase)
    {
        doctorcase->setWindowTitle(QApplication::translate("doctorcase", "\347\227\205\345\216\206\345\215\225", nullptr));
        save->setText(QApplication::translate("doctorcase", "\344\277\235\345\255\230", nullptr));
        exit->setText(QApplication::translate("doctorcase", "\351\200\200\345\207\272", nullptr));
        label_8->setText(QApplication::translate("doctorcase", "\351\242\204\347\272\246\346\227\266\351\227\264", nullptr));
        label_9->setText(QApplication::translate("doctorcase", "\345\260\261\350\257\212\347\247\221\345\256\244", nullptr));
        room->setItemText(0, QApplication::translate("doctorcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(1, QApplication::translate("doctorcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(2, QApplication::translate("doctorcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(3, QApplication::translate("doctorcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(4, QApplication::translate("doctorcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(5, QApplication::translate("doctorcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(6, QApplication::translate("doctorcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(7, QApplication::translate("doctorcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(8, QApplication::translate("doctorcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(9, QApplication::translate("doctorcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));

        label->setText(QApplication::translate("doctorcase", " \345\247\223\345\220\215", nullptr));
        label_2->setText(QApplication::translate("doctorcase", " \346\200\247\345\210\253", nullptr));
        label_5->setText(QApplication::translate("doctorcase", " \345\271\264\351\276\204", nullptr));
        label_7->setText(QApplication::translate("doctorcase", "\345\256\266\345\272\255\345\234\260\345\235\200", nullptr));
        label_4->setText(QApplication::translate("doctorcase", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        label_10->setText(QApplication::translate("doctorcase", "\345\214\273\347\224\237\350\257\212\346\226\255", nullptr));
        label_11->setText(QApplication::translate("doctorcase", "\345\244\204         \346\226\271", nullptr));
        label_12->setText(QApplication::translate("doctorcase", "\345\214\273         \345\230\261", nullptr));
        label_3->setText(QApplication::translate("doctorcase", "  \351\242\204\347\272\246\345\217\267  ", nullptr));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class doctorcase: public Ui_doctorcase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORCASE_H
