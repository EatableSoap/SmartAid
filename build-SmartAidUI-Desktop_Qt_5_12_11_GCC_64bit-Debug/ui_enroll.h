/********************************************************************************
** Form generated from reading UI file 'enroll.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLL_H
#define UI_ENROLL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enroll
{
public:
    QLabel *label_photo;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QRadioButton *choose1;
    QRadioButton *choose2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *enroll;
    QPushButton *exit;
    QLabel *label_12;
    QPushButton *choose;
    QTextEdit *signature;
    QLabel *label_2;
    QLineEdit *password1;
    QLabel *label_9;
    QLineEdit *password2;
    QLabel *label_6;
    QLineEdit *phone;
    QLabel *label_8;
    QLineEdit *Name;
    QLabel *label_5;
    QLineEdit *sex;
    QLabel *selfinfo;
    QLineEdit *address;
    QLabel *label_4;
    QLineEdit *age;
    QLabel *label_11;

    void setupUi(QDialog *Enroll)
    {
        if (Enroll->objectName().isEmpty())
            Enroll->setObjectName(QString::fromUtf8("Enroll"));
        Enroll->resize(1014, 784);
        Enroll->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 255, 221);\n"
""));
        label_photo = new QLabel(Enroll);
        label_photo->setObjectName(QString::fromUtf8("label_photo"));
        label_photo->setGeometry(QRect(820, 343, 161, 131));
        horizontalLayoutWidget = new QWidget(Enroll);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 50, 348, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        choose1 = new QRadioButton(horizontalLayoutWidget);
        choose1->setObjectName(QString::fromUtf8("choose1"));

        horizontalLayout->addWidget(choose1);

        choose2 = new QRadioButton(horizontalLayoutWidget);
        choose2->setObjectName(QString::fromUtf8("choose2"));

        horizontalLayout->addWidget(choose2);

        horizontalLayoutWidget_2 = new QWidget(Enroll);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(240, 680, 401, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        enroll = new QPushButton(horizontalLayoutWidget_2);
        enroll->setObjectName(QString::fromUtf8("enroll"));
        enroll->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout_2->addWidget(enroll);

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

        label_12 = new QLabel(Enroll);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(830, 260, 141, 41));
        choose = new QPushButton(Enroll);
        choose->setObjectName(QString::fromUtf8("choose"));
        choose->setGeometry(QRect(820, 540, 170, 61));
        choose->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        signature = new QTextEdit(Enroll);
        signature->setObjectName(QString::fromUtf8("signature"));
        signature->setGeometry(QRect(120, 530, 661, 111));
        label_2 = new QLabel(Enroll);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(51, 182, 60, 23));
        password1 = new QLineEdit(Enroll);
        password1->setObjectName(QString::fromUtf8("password1"));
        password1->setGeometry(QRect(117, 182, 661, 25));
        label_9 = new QLabel(Enroll);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(51, 225, 60, 23));
        password2 = new QLineEdit(Enroll);
        password2->setObjectName(QString::fromUtf8("password2"));
        password2->setGeometry(QRect(117, 225, 661, 25));
        label_6 = new QLabel(Enroll);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(51, 276, 30, 23));
        phone = new QLineEdit(Enroll);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(117, 276, 661, 25));
        label_8 = new QLabel(Enroll);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(51, 327, 30, 23));
        Name = new QLineEdit(Enroll);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setGeometry(QRect(117, 327, 661, 25));
        label_5 = new QLabel(Enroll);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(51, 378, 30, 23));
        sex = new QLineEdit(Enroll);
        sex->setObjectName(QString::fromUtf8("sex"));
        sex->setGeometry(QRect(117, 378, 661, 25));
        selfinfo = new QLabel(Enroll);
        selfinfo->setObjectName(QString::fromUtf8("selfinfo"));
        selfinfo->setGeometry(QRect(51, 429, 60, 23));
        address = new QLineEdit(Enroll);
        address->setObjectName(QString::fromUtf8("address"));
        address->setGeometry(QRect(117, 429, 661, 25));
        label_4 = new QLabel(Enroll);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(51, 480, 30, 23));
        age = new QLineEdit(Enroll);
        age->setObjectName(QString::fromUtf8("age"));
        age->setGeometry(QRect(117, 480, 661, 25));
        label_11 = new QLabel(Enroll);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(50, 530, 60, 23));

        retranslateUi(Enroll);

        QMetaObject::connectSlotsByName(Enroll);
    } // setupUi

    void retranslateUi(QDialog *Enroll)
    {
        Enroll->setWindowTitle(QApplication::translate("Enroll", "Dialog", nullptr));
        label_photo->setText(QString());
        label_3->setText(QApplication::translate("Enroll", "\351\200\211\346\213\251\350\272\253\344\273\275", nullptr));
        choose1->setText(QApplication::translate("Enroll", "\345\214\273\347\224\237", nullptr));
        choose2->setText(QApplication::translate("Enroll", "\347\227\205\346\202\243", nullptr));
        enroll->setText(QApplication::translate("Enroll", "\346\263\250\345\206\214", nullptr));
        exit->setText(QApplication::translate("Enroll", "\351\200\200\345\207\272", nullptr));
        label_12->setText(QString());
        choose->setText(QApplication::translate("Enroll", "\351\200\211\346\213\251\345\244\264\345\203\217", nullptr));
        label_2->setText(QApplication::translate("Enroll", "\346\263\250\345\206\214\345\257\206\347\240\201", nullptr));
        label_9->setText(QApplication::translate("Enroll", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label_6->setText(QApplication::translate("Enroll", "\347\224\265\350\257\235", nullptr));
        label_8->setText(QApplication::translate("Enroll", "\345\247\223\345\220\215", nullptr));
        label_5->setText(QApplication::translate("Enroll", "\346\200\247\345\210\253", nullptr));
        selfinfo->setText(QApplication::translate("Enroll", "\345\256\266\345\272\255\344\275\217\345\235\200", nullptr));
        label_4->setText(QApplication::translate("Enroll", "\345\271\264\351\276\204", nullptr));
        label_11->setText(QApplication::translate("Enroll", "\344\270\252\346\200\247\347\255\276\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enroll: public Ui_Enroll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLL_H
