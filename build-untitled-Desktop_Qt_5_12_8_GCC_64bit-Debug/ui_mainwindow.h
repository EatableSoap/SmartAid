/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QLabel *word;
    QLineEdit *password;
    QLineEdit *username;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Login;
    QPushButton *enroll;
    QPushButton *Logout;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *Doctor;
    QRadioButton *patient;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(974, 626);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(640, 130, 231, 51));
        label->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #000080; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 10pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
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
"\n"
"}\n"
""));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(120, 200, 401, 100));
        formLayout_3 = new QFormLayout(formLayoutWidget);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #000080; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 10pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
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
"\n"
"}\n"
""));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        word = new QLabel(formLayoutWidget);
        word->setObjectName(QString::fromUtf8("word"));
        word->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none; /* \345\216\273\346\216\211\346\234\211\347\204\246\347\202\271\346\227\266\347\232\204\350\231\232\347\272\277 */\n"
"}\n"
"\n"
"\n"
"QLabel {\n"
"	border: 0px solid #298DFF; /* \346\227\240\350\276\271\346\241\206 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	color: #000080; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 10pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
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
"\n"
"}\n"
""));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, word);

        password = new QLineEdit(formLayoutWidget);
        password->setObjectName(QString::fromUtf8("password"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, password);

        username = new QLineEdit(formLayoutWidget);
        username->setObjectName(QString::fromUtf8("username"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, username);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(120, 370, 596, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Login = new QPushButton(horizontalLayoutWidget);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #473C8B; /*\350\203\214\346\231\257\350\211\262*/ \n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius:5px; /*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
"	border-color: #8B7355;\n"
"	font: bold 30px;\n"
"	min-width:4em;\n"
"	color:red; /*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
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
"	background-color: rgb(255,106,106);\n"
"	border-style: inset;\n"
"}"));

        horizontalLayout->addWidget(Login);

        enroll = new QPushButton(horizontalLayoutWidget);
        enroll->setObjectName(QString::fromUtf8("enroll"));
        enroll->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #87ceeb; /*\350\203\214\346\231\257\350\211\262*/ \n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius:5px; /*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
"	border-color: #8B7355;\n"
"	font: bold 30px;\n"
"	min-width:4em;\n"
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
"	background-color: #ffffff; /*\344\274\252\347\212\266\346\200\201\347\273\217\350\277\207\346\227\266\350\203\214\346\231\257\350\211\262*/ \n"
"	border-style: inset;\n"
"}\n"
"QPushButton:!enabled{\n"
"	background-color: rgb(0,255,127);\n"
"	border-style: inset;\n"
"}"));

        horizontalLayout->addWidget(enroll);

        Logout = new QPushButton(horizontalLayoutWidget);
        Logout->setObjectName(QString::fromUtf8("Logout"));
        Logout->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #ccff00; /*\350\203\214\346\231\257\350\211\262*/ \n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-radius:5px; /*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
"	border-color: #8B7355;\n"
"	font: bold 30px;\n"
"	min-width:4em;\n"
"	color:black; /*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
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

        horizontalLayout->addWidget(Logout);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(650, 190, 131, 112));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Doctor = new QRadioButton(verticalLayoutWidget);
        Doctor->setObjectName(QString::fromUtf8("Doctor"));
        Doctor->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"        spacing: 5px;\n"
"}\n"
"QRadioButton:enabled{\n"
"	color: rgb(238,99,99);\n"
"}\n"
"QRadioButton:enabled:hover{\n"
"        color: rgb(200, 200, 200);\n"
"}\n"
"QRadioButton:!enabled{\n"
"        color: rgb(155, 155, 155);\n"
"}\n"
"QRadioButton::indicator {\n"
"        width: 20px;\n"
"        height: 20px;\n"
"}"));

        verticalLayout->addWidget(Doctor);

        patient = new QRadioButton(verticalLayoutWidget);
        patient->setObjectName(QString::fromUtf8("patient"));
        patient->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"        spacing: 5px;\n"
"}\n"
"QRadioButton:enabled{\n"
"	color: rgb(186,85,211);\n"
"}\n"
"QRadioButton:enabled:hover{\n"
"        color: rgb(200, 200, 200);\n"
"}\n"
"QRadioButton:!enabled{\n"
"        color: rgb(155, 155, 155);\n"
"}\n"
"QRadioButton::indicator {\n"
"        width: 20px;\n"
"        height: 20px;\n"
"}"));

        verticalLayout->addWidget(patient);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 974, 48));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(Logout, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\347\224\250\346\210\267\347\261\273\345\236\213", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        word->setText(QApplication::translate("MainWindow", "\350\264\246\345\217\267", nullptr));
        Login->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        enroll->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        Logout->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        Doctor->setText(QApplication::translate("MainWindow", "\345\214\273\347\224\237", nullptr));
        patient->setText(QApplication::translate("MainWindow", "\347\227\205\346\202\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
