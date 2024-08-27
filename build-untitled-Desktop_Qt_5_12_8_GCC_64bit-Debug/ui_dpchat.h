/********************************************************************************
** Form generated from reading UI file 'dpchat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPCHAT_H
#define UI_DPCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTextEdit *chattext;
    QLineEdit *sendmess;
    QPushButton *send;
    QPushButton *exit;
    QPushButton *changevoice;
    QPushButton *emo;
    QPushButton *file;

    void setupUi(QWidget *dpchat)
    {
        if (dpchat->objectName().isEmpty())
            dpchat->setObjectName(QString::fromUtf8("dpchat"));
        dpchat->resize(1174, 831);
        verticalLayoutWidget = new QWidget(dpchat);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 140, 221, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        chattext = new QTextEdit(dpchat);
        chattext->setObjectName(QString::fromUtf8("chattext"));
        chattext->setGeometry(QRect(250, 0, 931, 611));
        sendmess = new QLineEdit(dpchat);
        sendmess->setObjectName(QString::fromUtf8("sendmess"));
        sendmess->setGeometry(QRect(250, 610, 931, 221));
        send = new QPushButton(dpchat);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(1010, 750, 141, 61));
        send->setStyleSheet(QString::fromUtf8("QPushButton#myButton:normal/*\351\274\240\346\240\207\346\255\243\345\270\270\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"{\n"
"    color:#000000;\n"
"    background-color:rgb(40, 85, 20); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:4px;\n"
"    padding-top:4px;\n"
"}\n"
" \n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton#myButton:hover\n"
"{\n"
"    color:#0000ff;\n"
"    background-color:rgb(40, 85, 20); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
"/*\345\246\202\346\236\234\346\214\211\344\270\213\344\270\216\346\202\254\346\265\256\346\203\263\345\220\214\346\227\266\344\272\247\347\224\237\346\225\210"
                        "\346\236\234\357\274\214hover\345\277\205\351\241\273\345\206\231\345\234\250pressed\347\232\204\345\220\216\351\235\242*/\n"
"/*\351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton#myButton:pressed\n"
"{\n"
"    color:#00ff00;\n"
"    background-color:rgb(40, 85, 20); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
" \n"
"/*\351\274\240\346\240\207\344\270\215\345\217\257\347\224\250\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton#myButton:disabled\n"
"{\n"
"    color:#000000;\n"
"    background-color:rgb(40, 85, 20); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
" \n"
"QPu"
                        "shButton\n"
"{\n"
"    color:red; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:rgb(56, 255, 127);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:rgb(10, 46,112); /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 24px; /*\345\255\227\344\275\223*/\n"
"    font-family: Segoe UI;\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
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
                        "\222\256\346\211\223\345\274\200\350\217\234\345\215\225\346\227\266\357\274\232ui->pushButton->setMenu(menu)*/\n"
"QPushButton:open\n"
"{\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #abdeac, stop: 1 #fafc12);\n"
"}\n"
" \n"
"/*\345\255\220\351\200\211\346\213\251\345\231\250\357\274\232\350\217\234\345\215\225*/\n"
"QPushButton::menu-indicator\n"
"{\n"
"    image:url(\":/close_normal.png\");\n"
"    /*image:none;\345\216\273\346\216\211\345\260\217\344\270\211\350\247\222\345\217\267*/\n"
"    subcontrol-origin:padding;/*\347\273\230\345\210\266subcontrol\347\232\204\345\217\202\350\200\203\347\237\251\345\275\242\347\232\204\344\275\215\347\275\256*/\n"
"    subcontrol-position:bottom right;/*\345\260\217\344\270\211\350\247\222\347\232\204\344\275\215\347\275\256*/\n"
"}\n"
" \n"
"QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open\n"
"{\n"
"    position:relative;\n"
"    top:4px;\n"
"    left:4px;\n"
"}"));
        exit = new QPushButton(dpchat);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(830, 750, 141, 61));
        exit->setStyleSheet(QString::fromUtf8("QPushButton#myButton:normal/*\351\274\240\346\240\207\346\255\243\345\270\270\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"{\n"
"    color:#000000;\n"
"    background-color:rgb(40, 85, 20); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:4px;\n"
"    padding-top:4px;\n"
"}\n"
" \n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton#myButton:hover\n"
"{\n"
"    color:#0000ff;\n"
"    background-color:rgb(40, 85, 20); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
"/*\345\246\202\346\236\234\346\214\211\344\270\213\344\270\216\346\202\254\346\265\256\346\203\263\345\220\214\346\227\266\344\272\247\347\224\237\346\225\210"
                        "\346\236\234\357\274\214hover\345\277\205\351\241\273\345\206\231\345\234\250pressed\347\232\204\345\220\216\351\235\242*/\n"
"/*\351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton#myButton:pressed\n"
"{\n"
"    color:#00ff00;\n"
"    background-color:rgb(40, 85, 20); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
" \n"
"/*\351\274\240\346\240\207\344\270\215\345\217\257\347\224\250\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton#myButton:disabled\n"
"{\n"
"    color:#000000;\n"
"    background-color:rgb(40, 85, 20); /*\346\224\271\345\217\230\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
" \n"
"QPu"
                        "shButton\n"
"{\n"
"    color:red; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:rgb(56, 255, 127);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:rgb(10, 46,112); /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 24px; /*\345\255\227\344\275\223*/\n"
"    font-family: Segoe UI;\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
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
                        "\222\256\346\211\223\345\274\200\350\217\234\345\215\225\346\227\266\357\274\232ui->pushButton->setMenu(menu)*/\n"
"QPushButton:open\n"
"{\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #abdeac, stop: 1 #fafc12);\n"
"}\n"
" \n"
"/*\345\255\220\351\200\211\346\213\251\345\231\250\357\274\232\350\217\234\345\215\225*/\n"
"QPushButton::menu-indicator\n"
"{\n"
"    image:url(\":/close_normal.png\");\n"
"    /*image:none;\345\216\273\346\216\211\345\260\217\344\270\211\350\247\222\345\217\267*/\n"
"    subcontrol-origin:padding;/*\347\273\230\345\210\266subcontrol\347\232\204\345\217\202\350\200\203\347\237\251\345\275\242\347\232\204\344\275\215\347\275\256*/\n"
"    subcontrol-position:bottom right;/*\345\260\217\344\270\211\350\247\222\347\232\204\344\275\215\347\275\256*/\n"
"}\n"
" \n"
"QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open\n"
"{\n"
"    position:relative;\n"
"    top:4px;\n"
"    left:4px;\n"
"}"));
        changevoice = new QPushButton(dpchat);
        changevoice->setObjectName(QString::fromUtf8("changevoice"));
        changevoice->setGeometry(QRect(270, 620, 60, 60));
        changevoice->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 60px;\n"
"    max-width: 60px;\n"
"    max-height: 60px;\n"
"    min-height: 60px;\n"
"    border-radius: 50px;\n"
"    font-size: 15px;\n"
"    color: white;\n"
"    background: #f44336 ; /* \351\273\230\350\256\244\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    font-size: 18px;\n"
"    color: white;\n"
"    background: #d5d5d5; /* \346\202\254\345\201\234\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: #f2f2f2 /* \346\214\211\344\270\213\351\242\234\350\211\262 */\n"
"}"));
        emo = new QPushButton(dpchat);
        emo->setObjectName(QString::fromUtf8("emo"));
        emo->setGeometry(QRect(350, 620, 60, 60));
        emo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 60px;\n"
"    max-width: 60px;\n"
"    max-height: 60px;\n"
"    min-height: 60px;\n"
"    border-radius: 50px;\n"
"    font-size: 15px;\n"
"    color: white;\n"
"    background: #f44336 ; /* \351\273\230\350\256\244\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    font-size: 18px;\n"
"    color: white;\n"
"    background: #d5d5d5; /* \346\202\254\345\201\234\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: #f2f2f2 /* \346\214\211\344\270\213\351\242\234\350\211\262 */\n"
"}"));
        file = new QPushButton(dpchat);
        file->setObjectName(QString::fromUtf8("file"));
        file->setGeometry(QRect(430, 620, 60, 60));
        file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 60px;\n"
"    max-width: 60px;\n"
"    max-height: 60px;\n"
"    min-height: 60px;\n"
"    border-radius: 50px;\n"
"    font-size: 15px;\n"
"    color: white;\n"
"    background: #f44336 ; /* \351\273\230\350\256\244\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    font-size: 18px;\n"
"    color: white;\n"
"    background: #d5d5d5; /* \346\202\254\345\201\234\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: #f2f2f2 /* \346\214\211\344\270\213\351\242\234\350\211\262 */\n"
"}"));

        retranslateUi(dpchat);
        QObject::connect(exit, SIGNAL(clicked()), dpchat, SLOT(close()));

        QMetaObject::connectSlotsByName(dpchat);
    } // setupUi

    void retranslateUi(QWidget *dpchat)
    {
        dpchat->setWindowTitle(QApplication::translate("dpchat", "Form", nullptr));
        label_2->setText(QApplication::translate("dpchat", "\345\247\223\345\220\215:", nullptr));
        label->setText(QApplication::translate("dpchat", "\346\200\247\345\210\253:", nullptr));
        label_3->setText(QApplication::translate("dpchat", "\347\224\265\350\257\235;", nullptr));
        label_4->setText(QApplication::translate("dpchat", "\345\256\266\345\272\255\344\275\217\345\235\200:", nullptr));
        label_5->setText(QApplication::translate("dpchat", "\346\211\200\345\261\236\347\247\221\345\256\244:", nullptr));
        label_6->setText(QApplication::translate("dpchat", "\344\270\252\346\200\247\347\255\276\345\220\215:", nullptr));
        chattext->setHtml(QApplication::translate("dpchat", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        send->setText(QApplication::translate("dpchat", "\345\217\221\351\200\201", nullptr));
        exit->setText(QApplication::translate("dpchat", "\345\205\263\351\227\255", nullptr));
        changevoice->setText(QApplication::translate("dpchat", "C", nullptr));
        emo->setText(QApplication::translate("dpchat", "emo", nullptr));
        file->setText(QApplication::translate("dpchat", "file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dpchat: public Ui_dpchat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPCHAT_H
