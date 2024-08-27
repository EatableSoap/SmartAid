/********************************************************************************
** Form generated from reading UI file 'doctorpap.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORPAP_H
#define UI_DOCTORPAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctorPAP
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *money;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *save;
    QPushButton *exit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDateEdit *date;
    QLabel *label_3;
    QLineEdit *notice;
    QLabel *label_2;
    QLineEdit *order;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *number;

    void setupUi(QWidget *doctorPAP)
    {
        if (doctorPAP->objectName().isEmpty())
            doctorPAP->setObjectName(QString::fromUtf8("doctorPAP"));
        doctorPAP->resize(1163, 833);
        horizontalLayoutWidget = new QWidget(doctorPAP);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(740, 100, 328, 84));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget);
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
"	color: #298DFF; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 14pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
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

        horizontalLayout->addWidget(label_4);

        money = new QLineEdit(horizontalLayoutWidget);
        money->setObjectName(QString::fromUtf8("money"));
        money->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none;\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border: 1px solid #A0A0A0; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #A0A0A0; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #A0A0A0; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	fon"
                        "t-size: 20pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #298DFF;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"	color: #298DFF;\n"
"	selection-background-color: #298DFF;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
"\n"
"QLineEdit[echoMode=\"2\"] { /* QLineEdit\346\234\211\350\276\223\345\205\245\346\216\251\347\240\201\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	lineedit-password-character: 9679;\n"
"	lineedit-password-mask-delay: 2000;\n"
"}\n"
"\n"
"QLineEdit:disabled { /* QLineEdit\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLineEdit:read-only { /* QLineEdit\345\234\250\345\217\252\350\257\273\346\227\266\347\232\204\347\212\266\346"
                        "\200\201 */\n"
"	background-color: #CDCDCD;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        horizontalLayout->addWidget(money);

        horizontalLayoutWidget_2 = new QWidget(doctorPAP);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(330, 740, 491, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        save = new QPushButton(horizontalLayoutWidget_2);
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

        horizontalLayout_2->addWidget(save);

        exit = new QPushButton(horizontalLayoutWidget_2);
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

        horizontalLayout_2->addWidget(exit);

        horizontalLayoutWidget_3 = new QWidget(doctorPAP);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(60, 100, 274, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        date = new QDateEdit(horizontalLayoutWidget_3);
        date->setObjectName(QString::fromUtf8("date"));

        horizontalLayout_3->addWidget(date);

        label_3 = new QLabel(doctorPAP);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 180, 1059, 134));
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
"	color: #298DFF; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 14pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
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
        notice = new QLineEdit(doctorPAP);
        notice->setObjectName(QString::fromUtf8("notice"));
        notice->setGeometry(QRect(60, 272, 1061, 171));
        notice->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));
        label_2 = new QLabel(doctorPAP);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 450, 1059, 54));
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
"	color: #298DFF; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 14pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
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
        order = new QLineEdit(doctorPAP);
        order->setObjectName(QString::fromUtf8("order"));
        order->setGeometry(QRect(60, 510, 1059, 227));
        order->setStyleSheet(QString::fromUtf8("font: 18pt \"Ubuntu\";"));
        horizontalLayoutWidget_4 = new QWidget(doctorPAP);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(380, 100, 331, 84));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_4);
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
"	color: #298DFF; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 14pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
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

        horizontalLayout_4->addWidget(label_5);

        number = new QLineEdit(horizontalLayoutWidget_4);
        number->setObjectName(QString::fromUtf8("number"));
        number->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none;\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border: 1px solid #A0A0A0; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #A0A0A0; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #A0A0A0; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	fon"
                        "t-size: 20pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #298DFF;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"	color: #298DFF;\n"
"	selection-background-color: #298DFF;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
"\n"
"QLineEdit[echoMode=\"2\"] { /* QLineEdit\346\234\211\350\276\223\345\205\245\346\216\251\347\240\201\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	lineedit-password-character: 9679;\n"
"	lineedit-password-mask-delay: 2000;\n"
"}\n"
"\n"
"QLineEdit:disabled { /* QLineEdit\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLineEdit:read-only { /* QLineEdit\345\234\250\345\217\252\350\257\273\346\227\266\347\232\204\347\212\266\346"
                        "\200\201 */\n"
"	background-color: #CDCDCD;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(number);


        retranslateUi(doctorPAP);
        QObject::connect(exit, SIGNAL(clicked()), doctorPAP, SLOT(close()));

        QMetaObject::connectSlotsByName(doctorPAP);
    } // setupUi

    void retranslateUi(QWidget *doctorPAP)
    {
        doctorPAP->setWindowTitle(QApplication::translate("doctorPAP", "Form", nullptr));
        label_4->setText(QApplication::translate("doctorPAP", "\347\274\264\350\264\271\351\207\221\351\242\235", nullptr));
        save->setText(QApplication::translate("doctorPAP", "\344\277\235\345\255\230", nullptr));
        exit->setText(QApplication::translate("doctorPAP", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("doctorPAP", "\346\227\245\346\234\237", nullptr));
        label_3->setText(QApplication::translate("doctorPAP", "\345\214\273\345\230\261", nullptr));
        label_2->setText(QApplication::translate("doctorPAP", "\345\244\204\346\226\271", nullptr));
        order->setText(QString());
        label_5->setText(QApplication::translate("doctorPAP", "\351\242\204\347\272\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctorPAP: public Ui_doctorPAP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORPAP_H
