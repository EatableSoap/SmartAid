/********************************************************************************
** Form generated from reading UI file 'patientcase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTCASE_H
#define UI_PATIENTCASE_H

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

class Ui_patientcase
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_9;
    QTextEdit *order;
    QLabel *label_12;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QLineEdit *address;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_6;
    QLineEdit *phone;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QLineEdit *appointmentID;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *save;
    QPushButton *exit;
    QTextEdit *Diagnosis;
    QTextEdit *Perscription;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_4;
    QLineEdit *sex;
    QLabel *label_10;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_2;
    QComboBox *room;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_5;
    QLineEdit *age;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_3;
    QLineEdit *name;

    void setupUi(QWidget *patientcase)
    {
        if (patientcase->objectName().isEmpty())
            patientcase->setObjectName(QString::fromUtf8("patientcase"));
        patientcase->resize(837, 1198);
        patientcase->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutWidget_2 = new QWidget(patientcase);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 150, 481, 80));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
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

        horizontalLayout_10->addWidget(label);

        dateTimeEdit = new QDateTimeEdit(horizontalLayoutWidget_2);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setDateTime(QDateTime(QDate(2000, 12, 12), QTime(0, 0, 0)));

        horizontalLayout_10->addWidget(dateTimeEdit);

        label_9 = new QLabel(patientcase);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 440, 128, 48));
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
        order = new QTextEdit(patientcase);
        order->setObjectName(QString::fromUtf8("order"));
        order->setGeometry(QRect(20, 927, 791, 171));
        label_12 = new QLabel(patientcase);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 880, 128, 48));
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
        horizontalLayoutWidget_7 = new QWidget(patientcase);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(20, 350, 441, 80));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
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

        horizontalLayout_11->addWidget(label_7);

        address = new QLineEdit(horizontalLayoutWidget_7);
        address->setObjectName(QString::fromUtf8("address"));

        horizontalLayout_11->addWidget(address);

        horizontalLayoutWidget_8 = new QWidget(patientcase);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(480, 350, 331, 80));
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("* {\n"
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

        horizontalLayout_12->addWidget(label_6);

        phone = new QLineEdit(horizontalLayoutWidget_8);
        phone->setObjectName(QString::fromUtf8("phone"));

        horizontalLayout_12->addWidget(phone);

        horizontalLayoutWidget_9 = new QWidget(patientcase);
        horizontalLayoutWidget_9->setObjectName(QString::fromUtf8("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(20, 57, 791, 80));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(horizontalLayoutWidget_9);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_13->addWidget(label_8);

        appointmentID = new QLineEdit(horizontalLayoutWidget_9);
        appointmentID->setObjectName(QString::fromUtf8("appointmentID"));
        appointmentID->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(appointmentID);

        horizontalLayoutWidget = new QWidget(patientcase);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(190, 1117, 401, 69));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
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

        horizontalLayout_14->addWidget(save);

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

        horizontalLayout_14->addWidget(exit);

        Diagnosis = new QTextEdit(patientcase);
        Diagnosis->setObjectName(QString::fromUtf8("Diagnosis"));
        Diagnosis->setGeometry(QRect(20, 487, 791, 171));
        Perscription = new QTextEdit(patientcase);
        Perscription->setObjectName(QString::fromUtf8("Perscription"));
        Perscription->setGeometry(QRect(20, 707, 791, 171));
        horizontalLayoutWidget_5 = new QWidget(patientcase);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(350, 250, 190, 80));
        horizontalLayout_15 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_5);
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

        horizontalLayout_15->addWidget(label_4);

        sex = new QLineEdit(horizontalLayoutWidget_5);
        sex->setObjectName(QString::fromUtf8("sex"));

        horizontalLayout_15->addWidget(sex);

        label_10 = new QLabel(patientcase);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 660, 128, 48));
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
        horizontalLayoutWidget_3 = new QWidget(patientcase);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(520, 150, 297, 80));
        horizontalLayout_16 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_3);
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

        horizontalLayout_16->addWidget(label_2);

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
        room->setObjectName(QString::fromUtf8("room"));

        horizontalLayout_16->addWidget(room);

        horizontalLayoutWidget_6 = new QWidget(patientcase);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(610, 250, 201, 80));
        horizontalLayout_17 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
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

        horizontalLayout_17->addWidget(label_5);

        age = new QLineEdit(horizontalLayoutWidget_6);
        age->setObjectName(QString::fromUtf8("age"));

        horizontalLayout_17->addWidget(age);

        horizontalLayoutWidget_4 = new QWidget(patientcase);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(20, 250, 231, 80));
        horizontalLayout_18 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("* {\n"
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

        horizontalLayout_18->addWidget(label_3);

        name = new QLineEdit(horizontalLayoutWidget_4);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout_18->addWidget(name);


        retranslateUi(patientcase);

        QMetaObject::connectSlotsByName(patientcase);
    } // setupUi

    void retranslateUi(QWidget *patientcase)
    {
        patientcase->setWindowTitle(QApplication::translate("patientcase", "Form", nullptr));
        label->setText(QApplication::translate("patientcase", "\351\242\204\347\272\246\346\227\266\351\227\264", nullptr));
        label_9->setText(QApplication::translate("patientcase", "\345\214\273\347\224\237\350\257\212\346\226\255", nullptr));
        label_12->setText(QApplication::translate("patientcase", "\345\214\273         \345\230\261", nullptr));
        label_7->setText(QApplication::translate("patientcase", "\345\256\266\345\272\255\345\234\260\345\235\200", nullptr));
        label_6->setText(QApplication::translate("patientcase", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        label_8->setText(QApplication::translate("patientcase", "  \351\242\204\347\272\246\345\217\267  ", nullptr));
        appointmentID->setText(QString());
        save->setText(QApplication::translate("patientcase", "\344\277\235\345\255\230", nullptr));
        exit->setText(QApplication::translate("patientcase", "\351\200\200\345\207\272", nullptr));
        label_4->setText(QApplication::translate("patientcase", " \346\200\247\345\210\253", nullptr));
        label_10->setText(QApplication::translate("patientcase", "\345\244\204         \346\226\271", nullptr));
        label_2->setText(QApplication::translate("patientcase", "\345\260\261\350\257\212\347\247\221\345\256\244", nullptr));
        room->setItemText(0, QApplication::translate("patientcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(1, QApplication::translate("patientcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(2, QApplication::translate("patientcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(3, QApplication::translate("patientcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(4, QApplication::translate("patientcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(5, QApplication::translate("patientcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(6, QApplication::translate("patientcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(7, QApplication::translate("patientcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        room->setItemText(8, QApplication::translate("patientcase", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));

        label_5->setText(QApplication::translate("patientcase", " \345\271\264\351\276\204", nullptr));
        label_3->setText(QApplication::translate("patientcase", " \345\247\223\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientcase: public Ui_patientcase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTCASE_H
