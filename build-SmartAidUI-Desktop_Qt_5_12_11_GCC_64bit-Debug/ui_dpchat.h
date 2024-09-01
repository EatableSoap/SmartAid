/********************************************************************************
** Form generated from reading UI file 'dpchat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPCHAT_H
#define UI_DPCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dpchat
{
   public:
    QWidget     *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel      *label_2;
    QLabel      *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel      *label_3;
    QLabel      *label_4;
    QHBoxLayout *horizontalLayout;
    QLabel      *address;
    QLabel      *thing;
    QLabel      *label_6;
    QLabel      *label_5;
    QTextEdit   *chattext;
    QLineEdit   *sendmess;
    QPushButton *send;
    QPushButton *exit;
    QPushButton *changevoice;
    QPushButton *file;
    QLabel      *label_7;

    void         setupUi(QWidget *dpchat)
    {
        if (dpchat->objectName().isEmpty())
            dpchat->setObjectName(QString::fromUtf8("dpchat"));
        dpchat->resize(1231, 831);
        verticalLayoutWidget = new QWidget(dpchat);
        verticalLayoutWidget->setObjectName(
            QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 200, 301, 631));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(
            QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(
            QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        address = new QLabel(verticalLayoutWidget);
        address->setObjectName(QString::fromUtf8("address"));

        horizontalLayout->addWidget(address);

        thing = new QLabel(verticalLayoutWidget);
        thing->setObjectName(QString::fromUtf8("thing"));

        horizontalLayout->addWidget(thing);

        verticalLayout->addLayout(horizontalLayout);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        chattext = new QTextEdit(dpchat);
        chattext->setObjectName(QString::fromUtf8("chattext"));
        chattext->setGeometry(QRect(300, 0, 931, 611));
        chattext->setStyleSheet(QString::fromUtf8("background-color: #D0F0C0;"));
        sendmess = new QLineEdit(dpchat);
        sendmess->setObjectName(QString::fromUtf8("sendmess"));
        sendmess->setGeometry(QRect(300, 610, 931, 221));
        sendmess->setStyleSheet(
            QString::fromUtf8("background: qlineargradient(x1: 0, y1: 0, x2: 1, "
                              "y2: 1, stop: 0 #F3E5F5, stop: 1 #FFFFFF);"));
        send = new QPushButton(dpchat);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(1070, 750, 141, 61));
        send->setStyleSheet(QString::fromUtf8(
            "QPushButton#myButton:normal/"
            "*\351\274\240\346\240\207\346\255\243\345\270\270\346\227\266\347"
            "\232\204\346\225\210\346\236\234*/\n"
            "{\n"
            "    color:#000000;\n"
            "    background-color:rgb(40, 85, 20); "
            "/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
            "    "
            "border-style:inset;/"
            "*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346"
            "\240\274*/\n"
            "    padding-left:4px;\n"
            "    padding-top:4px;\n"
            "}\n"
            " \n"
            "/*"
            "\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347"
            "\232\204\346\225\210\346\236\234*/\n"
            "QPushButton#myButton:hover\n"
            "{\n"
            "    color:#0000ff;\n"
            "    background-color:rgb(40, 85, 20); "
            "/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
            "    "
            "border-style:inset;/"
            "*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346"
            "\240\274*/\n"
            "    padding-left:8px;\n"
            "    padding-top:8px;\n"
            "}\n"
            "/*"
            "\345\246\202\346\236\234\346\214\211\344\270\213\344\270\216\346"
            "\202\254\346\265\256\346\203\263\345\220\214\346\227\266\344\272"
            "\247\347\224\237\346\225\210"
            "\346\236\234\357\274\214hover\345\277\205\351\241\273\345\206\231"
            "\345\234\250pressed\347\232\204\345\220\216\351\235\242*/\n"
            "/*"
            "\351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347"
            "\232\204\346\225\210\346\236\234*/\n"
            "QPushButton#myButton:pressed\n"
            "{\n"
            "    color:#00ff00;\n"
            "    background-color:rgb(40, 85, 20); "
            "/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
            "    "
            "border-style:inset;/"
            "*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346"
            "\240\274*/\n"
            "    padding-left:6px;\n"
            "    padding-top:6px;\n"
            "}\n"
            " \n"
            "/*"
            "\351\274\240\346\240\207\344\270\215\345\217\257\347\224\250\346"
            "\227\266\347\232\204\346\225\210\346\236\234*/\n"
            "QPushButton#myButton:disabled\n"
            "{\n"
            "    color:#000000;\n"
            "    background-color:rgb(40, 85, 20); "
            "/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
            "    "
            "border-style:inset;/"
            "*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346"
            "\240\274*/\n"
            "    padding-left:6px;\n"
            "    padding-top:6px;\n"
            "}\n"
            " \n"
            "QPu"
            "shButton\n"
            "{\n"
            "    color:red; "
            "/*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
            "    background-color:rgb(56, 255, "
            "127);/*\350\203\214\346\231\257\350\211\262*/\n"
            "    border-style:outset; "
            "/*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
            "    "
            "border-width:2px;/"
            "*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
            "    border-color:rgb(10, 46,112); "
            "/*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
            "    border-radius:10px; "
            "/*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
            "    font:bold 24px; /*\345\255\227\344\275\223*/\n"
            "    font-family: Segoe UI;\n"
            "    "
            "min-width:100px;/"
            "*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345"
            "\272\246*/\n"
            "    "
            "min-height:20px;/"
            "*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345"
            "\272\246*/\n"
            "    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
            "}\n"
            " \n"
            " \n"
            "/*\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
            "QPushButton:flat\n"
            "{\n"
            "    border:2px solid red;\n"
            "}\n"
            " \n"
            "/*\345\275\223\346\214\211\351"
            "\222\256\346\211\223\345\274\200\350\217\234\345\215\225\346\227"
            "\266\357\274\232ui->pushButton->setMenu(menu)*/\n"
            "QPushButton:open\n"
            "{\n"
            "    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, "
            "stop:0 #abdeac, stop: 1 #fafc12);\n"
            "}\n"
            " \n"
            "/*"
            "\345\255\220\351\200\211\346\213\251\345\231\250\357\274\232\350"
            "\217\234\345\215\225*/\n"
            "QPushButton::menu-indicator\n"
            "{\n"
            "    image:url(\":/close_normal.png\");\n"
            "    "
            "/*image:none;"
            "\345\216\273\346\216\211\345\260\217\344\270\211\350\247\222\345"
            "\217\267*/\n"
            "    "
            "subcontrol-origin:padding;/"
            "*\347\273\230\345\210\266subcontrol\347\232\204\345\217\202\350\200"
            "\203\347\237\251\345\275\242\347\232\204\344\275\215\347\275\256*/"
            "\n"
            "    subcontrol-position:bottom "
            "right;/"
            "*\345\260\217\344\270\211\350\247\222\347\232\204\344\275\215\347"
            "\275\256*/\n"
            "}\n"
            " \n"
            "QPushButton::menu-indicator:pressed, "
            "QPushButton::menu-indicator:open\n"
            "{\n"
            "    position:relative;\n"
            "    top:4px;\n"
            "    left:4px;\n"
            "}"));
        exit = new QPushButton(dpchat);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(900, 750, 141, 61));
        exit->setStyleSheet(QString::fromUtf8(
            "QPushButton#myButton:normal/"
            "*\351\274\240\346\240\207\346\255\243\345\270\270\346\227\266\347"
            "\232\204\346\225\210\346\236\234*/\n"
            "{\n"
            "    color:#000000;\n"
            "    background-color:rgb(40, 85, 20); "
            "/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
            "    "
            "border-style:inset;/"
            "*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346"
            "\240\274*/\n"
            "    padding-left:4px;\n"
            "    padding-top:4px;\n"
            "}\n"
            " \n"
            "/*"
            "\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347"
            "\232\204\346\225\210\346\236\234*/\n"
            "QPushButton#myButton:hover\n"
            "{\n"
            "    color:#0000ff;\n"
            "    background-color:rgb(40, 85, 20); "
            "/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
            "    "
            "border-style:inset;/"
            "*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346"
            "\240\274*/\n"
            "    padding-left:8px;\n"
            "    padding-top:8px;\n"
            "}\n"
            "/*"
            "\345\246\202\346\236\234\346\214\211\344\270\213\344\270\216\346"
            "\202\254\346\265\256\346\203\263\345\220\214\346\227\266\344\272"
            "\247\347\224\237\346\225\210"
            "\346\236\234\357\274\214hover\345\277\205\351\241\273\345\206\231"
            "\345\234\250pressed\347\232\204\345\220\216\351\235\242*/\n"
            "/*"
            "\351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347"
            "\232\204\346\225\210\346\236\234*/\n"
            "QPushButton#myButton:pressed\n"
            "{\n"
            "    color:#00ff00;\n"
            "    background-color:rgb(40, 85, 20); "
            "/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
            "    "
            "border-style:inset;/"
            "*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346"
            "\240\274*/\n"
            "    padding-left:6px;\n"
            "    padding-top:6px;\n"
            "}\n"
            " \n"
            "/*"
            "\351\274\240\346\240\207\344\270\215\345\217\257\347\224\250\346"
            "\227\266\347\232\204\346\225\210\346\236\234*/\n"
            "QPushButton#myButton:disabled\n"
            "{\n"
            "    color:#000000;\n"
            "    background-color:rgb(40, 85, 20); "
            "/*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
            "    "
            "border-style:inset;/"
            "*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346"
            "\240\274*/\n"
            "    padding-left:6px;\n"
            "    padding-top:6px;\n"
            "}\n"
            " \n"
            "QPu"
            "shButton\n"
            "{\n"
            "    color:red; "
            "/*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
            "    background-color:rgb(56, 255, "
            "127);/*\350\203\214\346\231\257\350\211\262*/\n"
            "    border-style:outset; "
            "/*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
            "    "
            "border-width:2px;/"
            "*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
            "    border-color:rgb(10, 46,112); "
            "/*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
            "    border-radius:10px; "
            "/*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
            "    font:bold 24px; /*\345\255\227\344\275\223*/\n"
            "    font-family: Segoe UI;\n"
            "    "
            "min-width:100px;/"
            "*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345"
            "\272\246*/\n"
            "    "
            "min-height:20px;/"
            "*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345"
            "\272\246*/\n"
            "    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
            "}\n"
            " \n"
            " \n"
            "/*\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
            "QPushButton:flat\n"
            "{\n"
            "    border:2px solid red;\n"
            "}\n"
            " \n"
            "/*\345\275\223\346\214\211\351"
            "\222\256\346\211\223\345\274\200\350\217\234\345\215\225\346\227"
            "\266\357\274\232ui->pushButton->setMenu(menu)*/\n"
            "QPushButton:open\n"
            "{\n"
            "    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, "
            "stop:0 #abdeac, stop: 1 #fafc12);\n"
            "}\n"
            " \n"
            "/*"
            "\345\255\220\351\200\211\346\213\251\345\231\250\357\274\232\350"
            "\217\234\345\215\225*/\n"
            "QPushButton::menu-indicator\n"
            "{\n"
            "    image:url(\":/close_normal.png\");\n"
            "    "
            "/*image:none;"
            "\345\216\273\346\216\211\345\260\217\344\270\211\350\247\222\345"
            "\217\267*/\n"
            "    "
            "subcontrol-origin:padding;/"
            "*\347\273\230\345\210\266subcontrol\347\232\204\345\217\202\350\200"
            "\203\347\237\251\345\275\242\347\232\204\344\275\215\347\275\256*/"
            "\n"
            "    subcontrol-position:bottom "
            "right;/"
            "*\345\260\217\344\270\211\350\247\222\347\232\204\344\275\215\347"
            "\275\256*/\n"
            "}\n"
            " \n"
            "QPushButton::menu-indicator:pressed, "
            "QPushButton::menu-indicator:open\n"
            "{\n"
            "    position:relative;\n"
            "    top:4px;\n"
            "    left:4px;\n"
            "}"));
        changevoice = new QPushButton(dpchat);
        changevoice->setObjectName(QString::fromUtf8("changevoice"));
        changevoice->setGeometry(QRect(310, 620, 161, 61));
        changevoice->setStyleSheet(QString::fromUtf8(
            "QPushButton {\n"
            "    background-color: #4CAF50; /* "
            "\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
            "    border: none; /* "
            "\345\216\273\346\216\211\350\276\271\346\241\206 */\n"
            "    color: white; /* "
            "\345\255\227\344\275\223\351\242\234\350\211\262 */\n"
            "    padding: 15px 32px; /* \345\206\205\350\276\271\350\267\235 "
            "*/\n"
            "    text-align: center; /* "
            "\346\226\207\346\234\254\345\257\271\351\275\220 */\n"
            "    text-decoration: none; /* "
            "\345\216\273\346\216\211\344\270\213\345\210\222\347\272\277 */\n"
            "    display: inline-block; /* \345\206\205\350\201\224\345\235\227 "
            "*/\n"
            "    font-size: 18px; /* "
            "\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
            "    margin: 4px 2px; /* \345\244\226\350\276\271\350\267\235 */\n"
            "    cursor: pointer; /* "
            "\351\274\240\346\240\207\346\240\267\345\274\217 */\n"
            "    border-radius: 12px; /* \345\234\206\350\247\222 */\n"
            "}\n"
            "\n"
            "QPushButton:hover {\n"
            "    background-color: #45a049; /* "
            "\346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351"
            "\242\234\350\211"
            "\262 */\n"
            "}\n"
            "\n"
            "QPushButton:pressed {\n"
            "    background-color: #3e8e41; /* "
            "\346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351"
            "\242\234\350\211\262 */\n"
            "}\n"
            ""));
        file = new QPushButton(dpchat);
        file->setObjectName(QString::fromUtf8("file"));
        file->setGeometry(QRect(480, 620, 181, 61));
        file->setStyleSheet(QString::fromUtf8(
            "QPushButton {\n"
            "    background-color: #4CAF50; /* "
            "\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
            "    border: none; /* "
            "\345\216\273\346\216\211\350\276\271\346\241\206 */\n"
            "    color: white; /* "
            "\345\255\227\344\275\223\351\242\234\350\211\262 */\n"
            "    padding: 15px 32px; /* \345\206\205\350\276\271\350\267\235 "
            "*/\n"
            "    text-align: center; /* "
            "\346\226\207\346\234\254\345\257\271\351\275\220 */\n"
            "    text-decoration: none; /* "
            "\345\216\273\346\216\211\344\270\213\345\210\222\347\272\277 */\n"
            "    display: inline-block; /* \345\206\205\350\201\224\345\235\227 "
            "*/\n"
            "    font-size: 18px; /* "
            "\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
            "    margin: 4px 2px; /* \345\244\226\350\276\271\350\267\235 */\n"
            "    cursor: pointer; /* "
            "\351\274\240\346\240\207\346\240\267\345\274\217 */\n"
            "    border-radius: 12px; /* \345\234\206\350\247\222 */\n"
            "}\n"
            "\n"
            "QPushButton:hover {\n"
            "    background-color: #45a049; /* "
            "\346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\351"
            "\242\234\350\211"
            "\262 */\n"
            "}\n"
            "\n"
            "QPushButton:pressed {\n"
            "    background-color: #3e8e41; /* "
            "\346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351"
            "\242\234\350\211\262 */\n"
            "}\n"
            ""));
        label_7 = new QLabel(dpchat);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 60, 161, 61));
        chattext->raise();
        sendmess->raise();
        verticalLayoutWidget->raise();
        send->raise();
        exit->raise();
        changevoice->raise();
        file->raise();
        label_7->raise();

        retranslateUi(dpchat);

        QMetaObject::connectSlotsByName(dpchat);
    }  // setupUi

    void retranslateUi(QWidget *dpchat)
    {
        dpchat->setWindowTitle(
            QApplication::translate("dpchat", "Form", nullptr));
        label_2->setText(QApplication::translate(
            "dpchat", "\345\247\223\345\220\215:", nullptr));
        label->setText(QApplication::translate(
            "dpchat", "\346\200\247\345\210\253:", nullptr));
        label_3->setText(QApplication::translate(
            "dpchat", "\347\224\265\350\257\235", nullptr));
        label_4->setText(QString());
        address->setText(QString());
        thing->setText(QString());
        label_6->setText(QApplication::translate(
            "dpchat",
            "\344\270\252\346\200\247\347\255\276\345\220\215:",
            nullptr));
        label_5->setText(QString());
        chattext->setHtml(QApplication::translate(
            "dpchat",
            "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" "
            "\"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
            "<html><head><meta name=\"qrichtext\" content=\"1\" /><style "
            "type=\"text/css\">\n"
            "p, li { white-space: pre-wrap; }\n"
            "</style></head><body style=\" font-family:'Ubuntu'; "
            "font-size:11pt; font-weight:400; font-style:normal;\">\n"
            "<p align=\"center\" style=\"-qt-paragraph-type:empty; "
            "margin-top:0px; margin-bottom:0px; margin-left:0px; "
            "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br "
            "/></p></body></html>",
            nullptr));
        send->setText(QApplication::translate(
            "dpchat", "\345\217\221\351\200\201", nullptr));
        exit->setText(QApplication::translate(
            "dpchat", "\345\205\263\351\227\255", nullptr));
        changevoice->setText(QApplication::translate(
            "dpchat",
            "\350\257\255\351\237\263\350\275\254\346\226\207\345\255\227",
            nullptr));
        file->setText(QApplication::translate(
            "dpchat",
            "\345\217\221\351\200\201\346\226\207\344\273\266",
            nullptr));
        label_7->setText(
            QApplication::translate("dpchat", "TextLabel", nullptr));
    }  // retranslateUi
};

namespace Ui
{
class dpchat : public Ui_dpchat
{
};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_DPCHAT_H
