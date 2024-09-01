/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
   public:
    QWidget      *centralwidget;
    QPushButton  *enrollBtn;
    QWidget      *horizontalLayoutWidget;
    QHBoxLayout  *horizontalLayout;
    QRadioButton *doctorPre;
    QRadioButton *patientPre;
    QWidget      *formLayoutWidget_2;
    QFormLayout  *formLayout;
    QLabel       *Label;
    QLineEdit    *username;
    QLineEdit    *password;
    QLabel       *Label2;
    QPushButton  *LoginBtn;
    QFrame       *frame;
    QWidget      *widget;
    QLabel       *label;

    void          setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(889, 483);
        MainWindow->setStyleSheet(
            QString::fromUtf8("background-color: rgb(233,234,208);"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        enrollBtn = new QPushButton(centralwidget);
        enrollBtn->setObjectName(QString::fromUtf8("enrollBtn"));
        enrollBtn->setGeometry(QRect(720, 360, 112, 51));
        enrollBtn->setStyleSheet(QString::fromUtf8(
            "QPushButton\n"
            "{\n"
            "	background-color: #87CEFA; "
            "/*\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: outset;\n"
            "	border-width: 2px;\n"
            "	border-radius:5px; "
            "/*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
            "	border-color: #8B7355;\n"
            "	font: bold 30px;\n"
            "	min-width:3em;\n"
            "	color:white; "
            "/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
            "\n"
            "	padding: 3px;\n"
            "}\n"
            " \n"
            "QPushButton:hover\n"
            "{\n"
            "	background-color: rgb(0, 150, 0);\n"
            "}\n"
            " \n"
            "QPushButton:pressed\n"
            "{\n"
            "	background-color: #1E90FF; "
            "/*"
            "\344\274\252\347\212\266\346\200\201\347\273\217\350\277\207\346"
            "\227\266\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: inset;\n"
            "}\n"
            "QPushButton:!enabled{\n"
            "	background-color: rgb(255,106,106);\n"
            "	border-style: inset;\n"
            "}"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(
            QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(600, 270, 201, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        doctorPre = new QRadioButton(horizontalLayoutWidget);
        doctorPre->setObjectName(QString::fromUtf8("doctorPre"));
        doctorPre->setStyleSheet(
            QString::fromUtf8("QRadioButton{\n"
                              "        spacing: 5px;\n"
                              "}\n"
                              "QRadioButton:enabled{\n"
                              "	color: black;\n"
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

        horizontalLayout->addWidget(doctorPre, 0, Qt::AlignHCenter);

        patientPre = new QRadioButton(horizontalLayoutWidget);
        patientPre->setObjectName(QString::fromUtf8("patientPre"));
        patientPre->setStyleSheet(
            QString::fromUtf8("QRadioButton{\n"
                              "        spacing: 5px;\n"
                              "}\n"
                              "QRadioButton:enabled{\n"
                              "	color: black;\n"
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

        horizontalLayout->addWidget(patientPre, 0, Qt::AlignHCenter);

        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName(
            QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(570, 170, 261, 61));
        formLayout = new QFormLayout(formLayoutWidget_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        Label = new QLabel(formLayoutWidget_2);
        Label->setObjectName(QString::fromUtf8("Label"));
        Label->setStyleSheet(
            QString::fromUtf8("\n"
                              "color: rgb(181, 131, 90);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        username = new QLineEdit(formLayoutWidget_2);
        username->setObjectName(QString::fromUtf8("username"));
        username->setStyleSheet(QString::fromUtf8(
            "* {\n"
            "	outline: none;\n"
            "}\n"
            "\n"
            "QDialog {\n"
            "	background: #2e2e2e;\n"
            "}\n"
            "\n"
            "QLineEdit {\n"
            "	background-color: rgb(255, 255, 255);\n"
            "	border: 1px solid #A0A0A0; /* "
            "\350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357"
            "\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
            "	border-radius: 20px; /* "
            "\350\276\271\346\241\206\345\234\206\350\247\222 */\n"
            "	padding-left: 10px; /* "
            "\346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350"
            "\276\271\347\225\214\346\234\2115px */\n"
            "	color: #A0A0A0; /* "
            "\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
            "	selection-background-color: #A0A0A0; /* "
            "\351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350"
            "\203\214\346\231\257\351\242\234\350\211\262 */\n"
            "	selection-color: #F2F2F2; /* "
            "\351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351"
            "\242\234\350\211\262 */\n"
            "	font-family: \"Microsoft YaHei\"; /* "
            "\346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
            "	font-size: 10pt; /* \346\226\207\346\234\254\345"
            "\255\227\344\275\223\345\244\247\345\260\217 */\n"
            "}\n"
            "\n"
            "QLineEdit:hover { /* "
            "\351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEd"
            "it\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
            "	border: 1px solid #298DFF;\n"
            "	border-radius: 3px;\n"
            "	background-color: #F2F2F2;\n"
            "	color: #298DFF;\n"
            "	selection-background-color: #298DFF;\n"
            "	selection-color: #F2F2F2;\n"
            "}\n"
            "\n"
            "QLineEdit[echoMode=\"2\"] { /* "
            "QLineEdit\346\234\211\350\276\223\345\205\245\346\216\251\347\240"
            "\201\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
            "	lineedit-password-character: 9679;\n"
            "	lineedit-password-mask-delay: 2000;\n"
            "}\n"
            "\n"
            "QLineEdit:disabled { /* "
            "QLineEdit\345\234\250\347\246\201\347\224\250\346\227\266\347\232"
            "\204\347\212\266\346\200\201 */\n"
            "	border: 1px solid #CDCDCD;\n"
            "	background-color: #CDCDCD;\n"
            "	color: rgba(204,204,204,100);\n"
            "}\n"
            "\n"
            "QLineEdit:read-only { /* "
            "QLineEdit\345\234\250\345\217\252\350\257\273\346\227\266\347\232"
            "\204\347\212\266\346\200\201 */\n"
            "	background-c"
            "olor: #CDCDCD;\n"
            "	color: #F2F2F2;\n"
            "}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, username);

        password = new QLineEdit(formLayoutWidget_2);
        password->setObjectName(QString::fromUtf8("password"));
        password->setStyleSheet(QString::fromUtf8(
            "* {\n"
            "	outline: none;\n"
            "}\n"
            "\n"
            "QDialog {\n"
            "	background: #2e2e2e;\n"
            "}\n"
            "\n"
            "QLineEdit {\n"
            "	background-color: rgb(255, 255, 255);\n"
            "	border: 1px solid #A0A0A0; /* "
            "\350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357"
            "\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
            "	border-radius: 20px; /* "
            "\350\276\271\346\241\206\345\234\206\350\247\222 */\n"
            "	padding-left: 10px; /* "
            "\346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350"
            "\276\271\347\225\214\346\234\2115px */\n"
            "	color: #A0A0A0; /* "
            "\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
            "	selection-background-color: #A0A0A0; /* "
            "\351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350"
            "\203\214\346\231\257\351\242\234\350\211\262 */\n"
            "	selection-color: #F2F2F2; /* "
            "\351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351"
            "\242\234\350\211\262 */\n"
            "	font-family: \"Microsoft YaHei\"; /* "
            "\346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
            "	font-size: 10pt; /* \346\226\207\346\234\254\345"
            "\255\227\344\275\223\345\244\247\345\260\217 */\n"
            "}\n"
            "\n"
            "QLineEdit:hover { /* "
            "\351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEd"
            "it\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
            "	border: 1px solid #298DFF;\n"
            "	border-radius: 3px;\n"
            "	background-color: #F2F2F2;\n"
            "	color: #298DFF;\n"
            "	selection-background-color: #298DFF;\n"
            "	selection-color: #F2F2F2;\n"
            "}\n"
            "\n"
            "QLineEdit[echoMode=\"2\"] { /* "
            "QLineEdit\346\234\211\350\276\223\345\205\245\346\216\251\347\240"
            "\201\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
            "	lineedit-password-character: 9679;\n"
            "	lineedit-password-mask-delay: 2000;\n"
            "}\n"
            "\n"
            "QLineEdit:disabled { /* "
            "QLineEdit\345\234\250\347\246\201\347\224\250\346\227\266\347\232"
            "\204\347\212\266\346\200\201 */\n"
            "	border: 1px solid #CDCDCD;\n"
            "	background-color: #CDCDCD;\n"
            "	color: rgba(204,204,204,100);\n"
            "}\n"
            "\n"
            "QLineEdit:read-only { /* "
            "QLineEdit\345\234\250\345\217\252\350\257\273\346\227\266\347\232"
            "\204\347\212\266\346\200\201 */\n"
            "	background-c"
            "olor: #CDCDCD;\n"
            "	color: #F2F2F2;\n"
            "}"));
        password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, password);

        Label2 = new QLabel(formLayoutWidget_2);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setStyleSheet(QString::fromUtf8("color: rgb(181, 131, 90);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, Label2);

        LoginBtn = new QPushButton(centralwidget);
        LoginBtn->setObjectName(QString::fromUtf8("LoginBtn"));
        LoginBtn->setGeometry(QRect(570, 360, 112, 51));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        LoginBtn->setFont(font);
        LoginBtn->setStyleSheet(QString::fromUtf8(
            "QPushButton\n"
            "{\n"
            "	background-color: #87CEFA; "
            "/*\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: outset;\n"
            "	border-width: 2px;\n"
            "	border-radius:5px; "
            "/*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
            "	border-color: #8B7355;\n"
            "	font: bold 30px;\n"
            "	min-width:3em;\n"
            "	color:white; "
            "/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
            "\n"
            "	padding: 3px;\n"
            "}\n"
            " \n"
            "QPushButton:hover\n"
            "{\n"
            "	background-color: rgb(0, 150, 0);\n"
            "}\n"
            " \n"
            "QPushButton:pressed\n"
            "{\n"
            "	background-color: #1E90FF; "
            "/*"
            "\344\274\252\347\212\266\346\200\201\347\273\217\350\277\207\346"
            "\227\266\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: inset;\n"
            "}\n"
            "QPushButton:!enabled{\n"
            "	background-color: rgb(255,106,106);\n"
            "	border-style: inset;\n"
            "}"));
        LoginBtn->setFlat(true);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-20, 60, 601, 361));
        frame->setStyleSheet(QString::fromUtf8("QWidget{border:0px}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 10, 481, 331));
        widget->setStyleSheet(
            QString::fromUtf8("border-image: url(:/back.png);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(460, 70, 481, 71));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        label->setOpenExternalLinks(false);
        MainWindow->setCentralWidget(centralwidget);
        frame->raise();
        enrollBtn->raise();
        horizontalLayoutWidget->raise();
        formLayoutWidget_2->raise();
        LoginBtn->raise();
        label->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    }  // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate(
            "MainWindow", "\347\231\273  \345\275\225", nullptr));
        enrollBtn->setText(QApplication::translate(
            "MainWindow", "\346\263\250 \345\206\214", nullptr));
        doctorPre->setText(QApplication::translate(
            "MainWindow", "  \345\214\273\347\224\237", nullptr));
        patientPre->setText(QApplication::translate(
            "MainWindow", "  \346\202\243\350\200\205", nullptr));
        Label->setText(QApplication::translate(
            "MainWindow", "  \350\264\246\345\217\267", nullptr));
        username->setPlaceholderText(
            QApplication::translate("MainWindow", "Username", nullptr));
        password->setText(QString());
        password->setPlaceholderText(
            QApplication::translate("MainWindow", "Password", nullptr));
        Label2->setText(QApplication::translate(
            "MainWindow", "  \345\257\206\347\240\201", nullptr));
        LoginBtn->setText(QApplication::translate(
            "MainWindow", "\347\231\273 \345\275\225", nullptr));
        label->setText(QApplication::translate(
            "MainWindow",
            "\346\231\272\346\205\247\345\214\273\347\226\227\347\231\273\345"
            "\275\225\345\271\263\345\217\260",
            nullptr));
    }  // retranslateUi
};

namespace Ui
{
class MainWindow : public Ui_MainWindow
{
};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
