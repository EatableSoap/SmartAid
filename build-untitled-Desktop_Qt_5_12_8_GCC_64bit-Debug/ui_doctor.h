/********************************************************************************
** Form generated from reading UI file 'doctor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTOR_H
#define UI_DOCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Doctor
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *selfinformation;
    QPushButton *Case;
    QPushButton *PAP;
    QPushButton *seeregister;
    QPushButton *DPCP;
    QPushButton *out;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLineEdit *sex;
    QLabel *label_3;
    QLineEdit *ID;
    QLabel *label_4;
    QLineEdit *room;

    void setupUi(QDialog *Doctor)
    {
        if (Doctor->objectName().isEmpty())
            Doctor->setObjectName(QString::fromUtf8("Doctor"));
        Doctor->resize(960, 604);
        Doctor->setStyleSheet(QString::fromUtf8("background-color: #ED6927;\n"
"border-top-left-radius:35px;\n"
" border-top-right-radius:35px;\n"
" border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
""));
        verticalLayoutWidget = new QWidget(Doctor);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 80, 300, 481));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        selfinformation = new QPushButton(verticalLayoutWidget);
        selfinformation->setObjectName(QString::fromUtf8("selfinformation"));
        selfinformation->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton {\n"
"	border: 1px solid #298DFF; /* QPushButton\350\276\271\346\241\206\347\232\204\345\256\275\345\272\246\343\200\201\346\240\267\345\274\217\345\222\214\351\242\234\350\211\262 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #298DFF; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 14pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {	/* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250"
                        "QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
"\n"
"QPushButton:checked { /* QPushButton\345\217\257\351\200\211\344\270\255\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #FF5242;\n"
"	background-color: #F2F2F2;\n"
"	color: #FF5242;\n"
"}\n"
"\n"
"QPushButton:pressed { /* \351\274\240\346\240\207\346\214\211\345\216\213\345\234\250QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #257FE6;\n"
"}\n"
"\n"
"QPushButton:checked:pressed { /* QPushButton\345\244\204\344\272\216\345\217\257\351\200\211\344\270\255\344\270\224\351\274\240\346\240\207\346\214\211\345\216\213\345\234\250QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QPushButton:disabled { /* QPushButton\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	bac"
                        "kground-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QPushButton#ImageButton { /* \345\256\232\344\271\211\345\233\276\347\211\207\346\214\211\351\222\256\357\274\214ImageButton\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/border_image\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
"\n"
"QPushButton#ImageButton:hover {\n"
"	border-image: url(\":/Resource/border_image_hover\");\n"
"}\n"
"\n"
"QPushButton#ImageButton:pressed {\n"
"	border-image: url(\":/Resource/border_image\");\n"
"}\n"
"\n"
"QPushButton:menu-indicator { /* QPushBut"
                        "ton\345\270\246\346\234\211\350\217\234\345\215\225\346\227\266\347\232\204\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250 */\n"
"	subcontrol-origin\357\274\232padding; /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\350\265\267\345\247\213\347\202\271 */\n"
"	subcontrol-position: center right; /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\344\275\215\347\275\256\357\274\214\345\244\204\344\272\216\346\260\264\345\271\263\351\235\240\345\217\263\344\270\224\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"	image: url(:/Resource/down_arrow_normal); /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\345\233\276\345\203\217 */\n"
"}\n"
"\n"
"QPushButton:menu-indicator:hover, QPushButton:menu-indicator:open { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\344\270\212\345\222\214\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\345"
                        "\220\257\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	position: relative;\n"
"	top: 2px;\n"
"	left: 2px;\n"
"	image: url(:/Resource/down_arrow_hover);\n"
"}\n"
"\n"
"QMenu { /* \347\256\200\345\215\225\345\256\232\344\271\211\350\217\234\345\215\225\346\240\267\345\274\217 */\n"
"	border: 1px solid gray;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QMenu::item { /* \350\217\234\345\215\225\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"	padding: 0px 0px 0px 40px;\n"
"	border: 0px solid transparent;\n"
"	background-color: transparent;\n"
"	color: #298DFF;\n"
"	min-width: 108px; /* \350\217\234\345\215\225\351\241\271\346\234\200\345\260\217\345\256\275\345\272\246\357\274\214108+40+1*2=150\357\274\214\344\275\277\345\276\227\350\217\234\345\215\225\345\256\275\345\272\246\345\222\214QPushButton\345\256\275\345\272\246\344\277\235\346\214\201\344\270\200\350\207\264 */\n"
"	min-height: 30px; /* \350\217\234\345\215\225\351\241\271\347\232\204\346\234\200\345"
                        "\260\217\351\253\230\345\272\246 */\n"
"}\n"
"\n"
"QMenu::item:selected { /* \350\217\234\345\215\225\351\241\271\345\244\204\344\272\216\351\200\211\344\270\255\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        verticalLayout->addWidget(selfinformation);

        Case = new QPushButton(verticalLayoutWidget);
        Case->setObjectName(QString::fromUtf8("Case"));
        Case->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton {\n"
"	border: 1px solid #298DFF; /* QPushButton\350\276\271\346\241\206\347\232\204\345\256\275\345\272\246\343\200\201\346\240\267\345\274\217\345\222\214\351\242\234\350\211\262 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #298DFF; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 14pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {	/* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250"
                        "QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
"\n"
"QPushButton:checked { /* QPushButton\345\217\257\351\200\211\344\270\255\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #FF5242;\n"
"	background-color: #F2F2F2;\n"
"	color: #FF5242;\n"
"}\n"
"\n"
"QPushButton:pressed { /* \351\274\240\346\240\207\346\214\211\345\216\213\345\234\250QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #257FE6;\n"
"}\n"
"\n"
"QPushButton:checked:pressed { /* QPushButton\345\244\204\344\272\216\345\217\257\351\200\211\344\270\255\344\270\224\351\274\240\346\240\207\346\214\211\345\216\213\345\234\250QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QPushButton:disabled { /* QPushButton\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	bac"
                        "kground-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QPushButton#ImageButton { /* \345\256\232\344\271\211\345\233\276\347\211\207\346\214\211\351\222\256\357\274\214ImageButton\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/border_image\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
"\n"
"QPushButton#ImageButton:hover {\n"
"	border-image: url(\":/Resource/border_image_hover\");\n"
"}\n"
"\n"
"QPushButton#ImageButton:pressed {\n"
"	border-image: url(\":/Resource/border_image\");\n"
"}\n"
"\n"
"QPushButton:menu-indicator { /* QPushBut"
                        "ton\345\270\246\346\234\211\350\217\234\345\215\225\346\227\266\347\232\204\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250 */\n"
"	subcontrol-origin\357\274\232padding; /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\350\265\267\345\247\213\347\202\271 */\n"
"	subcontrol-position: center right; /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\344\275\215\347\275\256\357\274\214\345\244\204\344\272\216\346\260\264\345\271\263\351\235\240\345\217\263\344\270\224\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"	image: url(:/Resource/down_arrow_normal); /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\345\233\276\345\203\217 */\n"
"}\n"
"\n"
"QPushButton:menu-indicator:hover, QPushButton:menu-indicator:open { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\344\270\212\345\222\214\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\345"
                        "\220\257\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	position: relative;\n"
"	top: 2px;\n"
"	left: 2px;\n"
"	image: url(:/Resource/down_arrow_hover);\n"
"}\n"
"\n"
"QMenu { /* \347\256\200\345\215\225\345\256\232\344\271\211\350\217\234\345\215\225\346\240\267\345\274\217 */\n"
"	border: 1px solid gray;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QMenu::item { /* \350\217\234\345\215\225\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"	padding: 0px 0px 0px 40px;\n"
"	border: 0px solid transparent;\n"
"	background-color: transparent;\n"
"	color: #298DFF;\n"
"	min-width: 108px; /* \350\217\234\345\215\225\351\241\271\346\234\200\345\260\217\345\256\275\345\272\246\357\274\214108+40+1*2=150\357\274\214\344\275\277\345\276\227\350\217\234\345\215\225\345\256\275\345\272\246\345\222\214QPushButton\345\256\275\345\272\246\344\277\235\346\214\201\344\270\200\350\207\264 */\n"
"	min-height: 30px; /* \350\217\234\345\215\225\351\241\271\347\232\204\346\234\200\345"
                        "\260\217\351\253\230\345\272\246 */\n"
"}\n"
"\n"
"QMenu::item:selected { /* \350\217\234\345\215\225\351\241\271\345\244\204\344\272\216\351\200\211\344\270\255\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        verticalLayout->addWidget(Case);

        PAP = new QPushButton(verticalLayoutWidget);
        PAP->setObjectName(QString::fromUtf8("PAP"));
        PAP->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton {\n"
"	border: 1px solid #298DFF; /* QPushButton\350\276\271\346\241\206\347\232\204\345\256\275\345\272\246\343\200\201\346\240\267\345\274\217\345\222\214\351\242\234\350\211\262 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #298DFF; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 14pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {	/* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250"
                        "QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
"\n"
"QPushButton:checked { /* QPushButton\345\217\257\351\200\211\344\270\255\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #FF5242;\n"
"	background-color: #F2F2F2;\n"
"	color: #FF5242;\n"
"}\n"
"\n"
"QPushButton:pressed { /* \351\274\240\346\240\207\346\214\211\345\216\213\345\234\250QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #257FE6;\n"
"}\n"
"\n"
"QPushButton:checked:pressed { /* QPushButton\345\244\204\344\272\216\345\217\257\351\200\211\344\270\255\344\270\224\351\274\240\346\240\207\346\214\211\345\216\213\345\234\250QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QPushButton:disabled { /* QPushButton\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	bac"
                        "kground-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QPushButton#ImageButton { /* \345\256\232\344\271\211\345\233\276\347\211\207\346\214\211\351\222\256\357\274\214ImageButton\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/border_image\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
"\n"
"QPushButton#ImageButton:hover {\n"
"	border-image: url(\":/Resource/border_image_hover\");\n"
"}\n"
"\n"
"QPushButton#ImageButton:pressed {\n"
"	border-image: url(\":/Resource/border_image\");\n"
"}\n"
"\n"
"QPushButton:menu-indicator { /* QPushBut"
                        "ton\345\270\246\346\234\211\350\217\234\345\215\225\346\227\266\347\232\204\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250 */\n"
"	subcontrol-origin\357\274\232padding; /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\350\265\267\345\247\213\347\202\271 */\n"
"	subcontrol-position: center right; /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\344\275\215\347\275\256\357\274\214\345\244\204\344\272\216\346\260\264\345\271\263\351\235\240\345\217\263\344\270\224\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"	image: url(:/Resource/down_arrow_normal); /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\345\233\276\345\203\217 */\n"
"}\n"
"\n"
"QPushButton:menu-indicator:hover, QPushButton:menu-indicator:open { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\344\270\212\345\222\214\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\345"
                        "\220\257\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	position: relative;\n"
"	top: 2px;\n"
"	left: 2px;\n"
"	image: url(:/Resource/down_arrow_hover);\n"
"}\n"
"\n"
"QMenu { /* \347\256\200\345\215\225\345\256\232\344\271\211\350\217\234\345\215\225\346\240\267\345\274\217 */\n"
"	border: 1px solid gray;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QMenu::item { /* \350\217\234\345\215\225\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"	padding: 0px 0px 0px 40px;\n"
"	border: 0px solid transparent;\n"
"	background-color: transparent;\n"
"	color: #298DFF;\n"
"	min-width: 108px; /* \350\217\234\345\215\225\351\241\271\346\234\200\345\260\217\345\256\275\345\272\246\357\274\214108+40+1*2=150\357\274\214\344\275\277\345\276\227\350\217\234\345\215\225\345\256\275\345\272\246\345\222\214QPushButton\345\256\275\345\272\246\344\277\235\346\214\201\344\270\200\350\207\264 */\n"
"	min-height: 30px; /* \350\217\234\345\215\225\351\241\271\347\232\204\346\234\200\345"
                        "\260\217\351\253\230\345\272\246 */\n"
"}\n"
"\n"
"QMenu::item:selected { /* \350\217\234\345\215\225\351\241\271\345\244\204\344\272\216\351\200\211\344\270\255\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        verticalLayout->addWidget(PAP);

        seeregister = new QPushButton(verticalLayoutWidget);
        seeregister->setObjectName(QString::fromUtf8("seeregister"));
        seeregister->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton {\n"
"	border: 1px solid #298DFF; /* QPushButton\350\276\271\346\241\206\347\232\204\345\256\275\345\272\246\343\200\201\346\240\267\345\274\217\345\222\214\351\242\234\350\211\262 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #298DFF; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 14pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {	/* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250"
                        "QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
"\n"
"QPushButton:checked { /* QPushButton\345\217\257\351\200\211\344\270\255\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #FF5242;\n"
"	background-color: #F2F2F2;\n"
"	color: #FF5242;\n"
"}\n"
"\n"
"QPushButton:pressed { /* \351\274\240\346\240\207\346\214\211\345\216\213\345\234\250QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #257FE6;\n"
"}\n"
"\n"
"QPushButton:checked:pressed { /* QPushButton\345\244\204\344\272\216\345\217\257\351\200\211\344\270\255\344\270\224\351\274\240\346\240\207\346\214\211\345\216\213\345\234\250QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QPushButton:disabled { /* QPushButton\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	bac"
                        "kground-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QPushButton#ImageButton { /* \345\256\232\344\271\211\345\233\276\347\211\207\346\214\211\351\222\256\357\274\214ImageButton\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/border_image\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
"\n"
"QPushButton#ImageButton:hover {\n"
"	border-image: url(\":/Resource/border_image_hover\");\n"
"}\n"
"\n"
"QPushButton#ImageButton:pressed {\n"
"	border-image: url(\":/Resource/border_image\");\n"
"}\n"
"\n"
"QPushButton:menu-indicator { /* QPushBut"
                        "ton\345\270\246\346\234\211\350\217\234\345\215\225\346\227\266\347\232\204\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250 */\n"
"	subcontrol-origin\357\274\232padding; /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\350\265\267\345\247\213\347\202\271 */\n"
"	subcontrol-position: center right; /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\344\275\215\347\275\256\357\274\214\345\244\204\344\272\216\346\260\264\345\271\263\351\235\240\345\217\263\344\270\224\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"	image: url(:/Resource/down_arrow_normal); /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\345\233\276\345\203\217 */\n"
"}\n"
"\n"
"QPushButton:menu-indicator:hover, QPushButton:menu-indicator:open { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\344\270\212\345\222\214\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\345"
                        "\220\257\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	position: relative;\n"
"	top: 2px;\n"
"	left: 2px;\n"
"	image: url(:/Resource/down_arrow_hover);\n"
"}\n"
"\n"
"QMenu { /* \347\256\200\345\215\225\345\256\232\344\271\211\350\217\234\345\215\225\346\240\267\345\274\217 */\n"
"	border: 1px solid gray;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QMenu::item { /* \350\217\234\345\215\225\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"	padding: 0px 0px 0px 40px;\n"
"	border: 0px solid transparent;\n"
"	background-color: transparent;\n"
"	color: #298DFF;\n"
"	min-width: 108px; /* \350\217\234\345\215\225\351\241\271\346\234\200\345\260\217\345\256\275\345\272\246\357\274\214108+40+1*2=150\357\274\214\344\275\277\345\276\227\350\217\234\345\215\225\345\256\275\345\272\246\345\222\214QPushButton\345\256\275\345\272\246\344\277\235\346\214\201\344\270\200\350\207\264 */\n"
"	min-height: 30px; /* \350\217\234\345\215\225\351\241\271\347\232\204\346\234\200\345"
                        "\260\217\351\253\230\345\272\246 */\n"
"}\n"
"\n"
"QMenu::item:selected { /* \350\217\234\345\215\225\351\241\271\345\244\204\344\272\216\351\200\211\344\270\255\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        verticalLayout->addWidget(seeregister);

        DPCP = new QPushButton(verticalLayoutWidget);
        DPCP->setObjectName(QString::fromUtf8("DPCP"));
        DPCP->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton {\n"
"	border: 1px solid #298DFF; /* QPushButton\350\276\271\346\241\206\347\232\204\345\256\275\345\272\246\343\200\201\346\240\267\345\274\217\345\222\214\351\242\234\350\211\262 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #298DFF; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 14pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {	/* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250"
                        "QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
"\n"
"QPushButton:checked { /* QPushButton\345\217\257\351\200\211\344\270\255\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #FF5242;\n"
"	background-color: #F2F2F2;\n"
"	color: #FF5242;\n"
"}\n"
"\n"
"QPushButton:pressed { /* \351\274\240\346\240\207\346\214\211\345\216\213\345\234\250QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #257FE6;\n"
"}\n"
"\n"
"QPushButton:checked:pressed { /* QPushButton\345\244\204\344\272\216\345\217\257\351\200\211\344\270\255\344\270\224\351\274\240\346\240\207\346\214\211\345\216\213\345\234\250QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QPushButton:disabled { /* QPushButton\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	bac"
                        "kground-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QPushButton#ImageButton { /* \345\256\232\344\271\211\345\233\276\347\211\207\346\214\211\351\222\256\357\274\214ImageButton\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/border_image\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
"\n"
"QPushButton#ImageButton:hover {\n"
"	border-image: url(\":/Resource/border_image_hover\");\n"
"}\n"
"\n"
"QPushButton#ImageButton:pressed {\n"
"	border-image: url(\":/Resource/border_image\");\n"
"}\n"
"\n"
"QPushButton:menu-indicator { /* QPushBut"
                        "ton\345\270\246\346\234\211\350\217\234\345\215\225\346\227\266\347\232\204\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250 */\n"
"	subcontrol-origin\357\274\232padding; /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\350\265\267\345\247\213\347\202\271 */\n"
"	subcontrol-position: center right; /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\344\275\215\347\275\256\357\274\214\345\244\204\344\272\216\346\260\264\345\271\263\351\235\240\345\217\263\344\270\224\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"	image: url(:/Resource/down_arrow_normal); /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\345\233\276\345\203\217 */\n"
"}\n"
"\n"
"QPushButton:menu-indicator:hover, QPushButton:menu-indicator:open { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\344\270\212\345\222\214\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\345"
                        "\220\257\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	position: relative;\n"
"	top: 2px;\n"
"	left: 2px;\n"
"	image: url(:/Resource/down_arrow_hover);\n"
"}\n"
"\n"
"QMenu { /* \347\256\200\345\215\225\345\256\232\344\271\211\350\217\234\345\215\225\346\240\267\345\274\217 */\n"
"	border: 1px solid gray;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QMenu::item { /* \350\217\234\345\215\225\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"	padding: 0px 0px 0px 40px;\n"
"	border: 0px solid transparent;\n"
"	background-color: transparent;\n"
"	color: #298DFF;\n"
"	min-width: 108px; /* \350\217\234\345\215\225\351\241\271\346\234\200\345\260\217\345\256\275\345\272\246\357\274\214108+40+1*2=150\357\274\214\344\275\277\345\276\227\350\217\234\345\215\225\345\256\275\345\272\246\345\222\214QPushButton\345\256\275\345\272\246\344\277\235\346\214\201\344\270\200\350\207\264 */\n"
"	min-height: 30px; /* \350\217\234\345\215\225\351\241\271\347\232\204\346\234\200\345"
                        "\260\217\351\253\230\345\272\246 */\n"
"}\n"
"\n"
"QMenu::item:selected { /* \350\217\234\345\215\225\351\241\271\345\244\204\344\272\216\351\200\211\344\270\255\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        verticalLayout->addWidget(DPCP);

        out = new QPushButton(verticalLayoutWidget);
        out->setObjectName(QString::fromUtf8("out"));
        out->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9; /* \345\257\271\350\257\235\346\241\206\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton {\n"
"	border: 1px solid #298DFF; /* QPushButton\350\276\271\346\241\206\347\232\204\345\256\275\345\272\246\343\200\201\346\240\267\345\274\217\345\222\214\351\242\234\350\211\262 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #298DFF; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 14pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {	/* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250"
                        "QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
"\n"
"QPushButton:checked { /* QPushButton\345\217\257\351\200\211\344\270\255\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #FF5242;\n"
"	background-color: #F2F2F2;\n"
"	color: #FF5242;\n"
"}\n"
"\n"
"QPushButton:pressed { /* \351\274\240\346\240\207\346\214\211\345\216\213\345\234\250QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #257FE6;\n"
"}\n"
"\n"
"QPushButton:checked:pressed { /* QPushButton\345\244\204\344\272\216\345\217\257\351\200\211\344\270\255\344\270\224\351\274\240\346\240\207\346\214\211\345\216\213\345\234\250QPushButton\344\270\212\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QPushButton:disabled { /* QPushButton\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	bac"
                        "kground-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QPushButton#ImageButton { /* \345\256\232\344\271\211\345\233\276\347\211\207\346\214\211\351\222\256\357\274\214ImageButton\344\270\272\345\257\271\350\261\241\345\220\215\357\274\214\345\234\250QSS\344\270\255\344\270\272\347\211\271\345\256\232\345\257\271\350\261\241\345\256\232\345\210\266\346\240\267\345\274\217 */\n"
"	border-image: url(\":/Resource/border_image\"); /* \344\275\277\347\224\250border-image\345\217\257\344\273\245\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"	background-color: transparent; /* \344\270\215\351\234\200\350\246\201\350\203\214\346\231\257\346\227\266\345\217\257\350\256\276\344\270\272\351\200\217\346\230\216 */\n"
"}\n"
"\n"
"QPushButton#ImageButton:hover {\n"
"	border-image: url(\":/Resource/border_image_hover\");\n"
"}\n"
"\n"
"QPushButton#ImageButton:pressed {\n"
"	border-image: url(\":/Resource/border_image\");\n"
"}\n"
"\n"
"QPushButton:menu-indicator { /* QPushBut"
                        "ton\345\270\246\346\234\211\350\217\234\345\215\225\346\227\266\347\232\204\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250 */\n"
"	subcontrol-origin\357\274\232padding; /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\350\265\267\345\247\213\347\202\271 */\n"
"	subcontrol-position: center right; /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\344\275\215\347\275\256\357\274\214\345\244\204\344\272\216\346\260\264\345\271\263\351\235\240\345\217\263\344\270\224\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"	image: url(:/Resource/down_arrow_normal); /* \350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\347\232\204\345\233\276\345\203\217 */\n"
"}\n"
"\n"
"QPushButton:menu-indicator:hover, QPushButton:menu-indicator:open { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\344\270\212\345\222\214\350\217\234\345\215\225\346\214\207\347\244\272\345\231\250\345"
                        "\220\257\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	position: relative;\n"
"	top: 2px;\n"
"	left: 2px;\n"
"	image: url(:/Resource/down_arrow_hover);\n"
"}\n"
"\n"
"QMenu { /* \347\256\200\345\215\225\345\256\232\344\271\211\350\217\234\345\215\225\346\240\267\345\274\217 */\n"
"	border: 1px solid gray;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QMenu::item { /* \350\217\234\345\215\225\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"	padding: 0px 0px 0px 40px;\n"
"	border: 0px solid transparent;\n"
"	background-color: transparent;\n"
"	color: #298DFF;\n"
"	min-width: 108px; /* \350\217\234\345\215\225\351\241\271\346\234\200\345\260\217\345\256\275\345\272\246\357\274\214108+40+1*2=150\357\274\214\344\275\277\345\276\227\350\217\234\345\215\225\345\256\275\345\272\246\345\222\214QPushButton\345\256\275\345\272\246\344\277\235\346\214\201\344\270\200\350\207\264 */\n"
"	min-height: 30px; /* \350\217\234\345\215\225\351\241\271\347\232\204\346\234\200\345"
                        "\260\217\351\253\230\345\272\246 */\n"
"}\n"
"\n"
"QMenu::item:selected { /* \350\217\234\345\215\225\351\241\271\345\244\204\344\272\216\351\200\211\344\270\255\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        verticalLayout->addWidget(out);

        formLayoutWidget = new QWidget(Doctor);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(360, 80, 391, 210));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        name = new QLineEdit(formLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        sex = new QLineEdit(formLayoutWidget);
        sex->setObjectName(QString::fromUtf8("sex"));

        formLayout->setWidget(1, QFormLayout::FieldRole, sex);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        ID = new QLineEdit(formLayoutWidget);
        ID->setObjectName(QString::fromUtf8("ID"));

        formLayout->setWidget(2, QFormLayout::FieldRole, ID);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        room = new QLineEdit(formLayoutWidget);
        room->setObjectName(QString::fromUtf8("room"));

        formLayout->setWidget(3, QFormLayout::FieldRole, room);


        retranslateUi(Doctor);
        QObject::connect(out, SIGNAL(clicked()), Doctor, SLOT(close()));

        QMetaObject::connectSlotsByName(Doctor);
    } // setupUi

    void retranslateUi(QDialog *Doctor)
    {
        Doctor->setWindowTitle(QApplication::translate("Doctor", "Dialog", nullptr));
        selfinformation->setText(QApplication::translate("Doctor", "\347\274\226\350\276\221\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        Case->setText(QApplication::translate("Doctor", "\347\274\226\350\276\221\347\227\205\344\276\213", nullptr));
        PAP->setText(QApplication::translate("Doctor", "\347\274\226\350\276\221\345\244\204\346\226\271\345\222\214\347\274\264\350\264\271\345\215\225", nullptr));
        seeregister->setText(QApplication::translate("Doctor", "\346\237\245\347\234\213\346\214\202\345\217\267\344\277\241\346\201\257", nullptr));
        DPCP->setText(QApplication::translate("Doctor", "\345\214\273\346\202\243\346\262\237\351\200\232\345\271\263\345\217\260", nullptr));
        out->setText(QApplication::translate("Doctor", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("Doctor", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QApplication::translate("Doctor", "\346\200\247\345\210\253", nullptr));
        label_3->setText(QApplication::translate("Doctor", "\350\264\246\345\217\267ID", nullptr));
        label_4->setText(QApplication::translate("Doctor", "\346\211\200\345\261\236\347\247\221\345\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Doctor: public Ui_Doctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTOR_H
