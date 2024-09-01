/********************************************************************************
** Form generated from reading UI file 'patient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENT_H
#define UI_PATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patient
{
   public:
    QWidget     *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *selfinformation;
    QPushButton *Register;
    QPushButton *HAP;
    QPushButton *Viewcases;
    QPushButton *seeinformation;
    QPushButton *DPCP1;
    QPushButton *exit;
    QWidget     *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel      *label;
    QLineEdit   *viexid;
    QLabel      *label_2;
    QLineEdit   *viewname;

    void         setupUi(QWidget *patient)
    {
        if (patient->objectName().isEmpty())
            patient->setObjectName(QString::fromUtf8("patient"));
        patient->resize(940, 643);
        patient->setStyleSheet(
            QString::fromUtf8("background-color: #e6f7ff;\n"
                              ""));
        verticalLayoutWidget = new QWidget(patient);
        verticalLayoutWidget->setObjectName(
            QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 61, 271, 571));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        selfinformation = new QPushButton(verticalLayoutWidget);
        selfinformation->setObjectName(QString::fromUtf8("selfinformation"));
        selfinformation->setMinimumSize(QSize(74, 0));
        selfinformation->setStyleSheet(QString::fromUtf8(
            "QPushButton\n"
            "{\n"
            "	background-color: #473C8B; "
            "/*\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: outset;\n"
            "	border-width: 2px;\n"
            "	border-radius:5px; "
            "/*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
            "	border-color: #8B7355;\n"
            "	font: bold 20px;\n"
            "	min-width:2em;\n"
            "	color:white; "
            "/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
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
            "	background-color: #1E90FF; "
            "/*"
            "\344\274\252\347\212\266\346\200\201\347\273\217\350\277\207\346"
            "\227\266\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: inset;\n"
            "}\n"
            "QPushButton:!enabled{\n"
            "	background-color: rgb(100, 100, 100);\n"
            "	border-style: inset;\n"
            "}"));

        verticalLayout->addWidget(selfinformation);

        Register = new QPushButton(verticalLayoutWidget);
        Register->setObjectName(QString::fromUtf8("Register"));
        Register->setStyleSheet(QString::fromUtf8(
            "QPushButton\n"
            "{\n"
            "	background-color: #473C8B; "
            "/*\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: outset;\n"
            "	border-width: 2px;\n"
            "	border-radius:5px; "
            "/*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
            "	border-color: #8B7355;\n"
            "	font: bold 20px;\n"
            "	min-width:2em;\n"
            "	color:white; "
            "/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
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
            "	background-color: #1E90FF; "
            "/*"
            "\344\274\252\347\212\266\346\200\201\347\273\217\350\277\207\346"
            "\227\266\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: inset;\n"
            "}\n"
            "QPushButton:!enabled{\n"
            "	background-color: rgb(100, 100, 100);\n"
            "	border-style: inset;\n"
            "}"));

        verticalLayout->addWidget(Register);

        HAP = new QPushButton(verticalLayoutWidget);
        HAP->setObjectName(QString::fromUtf8("HAP"));
        HAP->setStyleSheet(QString::fromUtf8(
            "QPushButton\n"
            "{\n"
            "	background-color: #473C8B; "
            "/*\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: outset;\n"
            "	border-width: 2px;\n"
            "	border-radius:5px; "
            "/*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
            "	border-color: #8B7355;\n"
            "	font: bold 20px;\n"
            "	min-width:2em;\n"
            "	color:white; "
            "/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
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
            "	background-color: #1E90FF; "
            "/*"
            "\344\274\252\347\212\266\346\200\201\347\273\217\350\277\207\346"
            "\227\266\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: inset;\n"
            "}\n"
            "QPushButton:!enabled{\n"
            "	background-color: rgb(100, 100, 100);\n"
            "	border-style: inset;\n"
            "}"));

        verticalLayout->addWidget(HAP);

        Viewcases = new QPushButton(verticalLayoutWidget);
        Viewcases->setObjectName(QString::fromUtf8("Viewcases"));
        Viewcases->setStyleSheet(QString::fromUtf8(
            "QPushButton\n"
            "{\n"
            "	background-color: #473C8B; "
            "/*\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: outset;\n"
            "	border-width: 2px;\n"
            "	border-radius:5px; "
            "/*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
            "	border-color: #8B7355;\n"
            "	font: bold 20px;\n"
            "	min-width:2em;\n"
            "	color:white; "
            "/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
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
            "	background-color: #1E90FF; "
            "/*"
            "\344\274\252\347\212\266\346\200\201\347\273\217\350\277\207\346"
            "\227\266\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: inset;\n"
            "}\n"
            "QPushButton:!enabled{\n"
            "	background-color: rgb(100, 100, 100);\n"
            "	border-style: inset;\n"
            "}"));

        verticalLayout->addWidget(Viewcases);

        seeinformation = new QPushButton(verticalLayoutWidget);
        seeinformation->setObjectName(QString::fromUtf8("seeinformation"));
        seeinformation->setStyleSheet(QString::fromUtf8(
            "QPushButton\n"
            "{\n"
            "	background-color: #473C8B; "
            "/*\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: outset;\n"
            "	border-width: 2px;\n"
            "	border-radius:5px; "
            "/*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
            "	border-color: #8B7355;\n"
            "	font: bold 20px;\n"
            "	min-width:2em;\n"
            "	color:white; "
            "/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
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
            "	background-color: #1E90FF; "
            "/*"
            "\344\274\252\347\212\266\346\200\201\347\273\217\350\277\207\346"
            "\227\266\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: inset;\n"
            "}\n"
            "QPushButton:!enabled{\n"
            "	background-color: rgb(100, 100, 100);\n"
            "	border-style: inset;\n"
            "}"));

        verticalLayout->addWidget(seeinformation);

        DPCP1 = new QPushButton(verticalLayoutWidget);
        DPCP1->setObjectName(QString::fromUtf8("DPCP1"));
        DPCP1->setStyleSheet(QString::fromUtf8(
            "QPushButton\n"
            "{\n"
            "	background-color: #473C8B; "
            "/*\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: outset;\n"
            "	border-width: 2px;\n"
            "	border-radius:5px; "
            "/*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
            "	border-color: #8B7355;\n"
            "	font: bold 20px;\n"
            "	min-width:2em;\n"
            "	color:white; "
            "/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
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
            "	background-color: #1E90FF; "
            "/*"
            "\344\274\252\347\212\266\346\200\201\347\273\217\350\277\207\346"
            "\227\266\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: inset;\n"
            "}\n"
            "QPushButton:!enabled{\n"
            "	background-color: rgb(100, 100, 100);\n"
            "	border-style: inset;\n"
            "}"));

        verticalLayout->addWidget(DPCP1);

        exit = new QPushButton(verticalLayoutWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setStyleSheet(QString::fromUtf8(
            "QPushButton\n"
            "{\n"
            "	background-color: #473C8B; "
            "/*\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: outset;\n"
            "	border-width: 2px;\n"
            "	border-radius:5px; "
            "/*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
            "	border-color: #8B7355;\n"
            "	font: bold 20px;\n"
            "	min-width:2em;\n"
            "	color:white; "
            "/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
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
            "	background-color: #1E90FF; "
            "/*"
            "\344\274\252\347\212\266\346\200\201\347\273\217\350\277\207\346"
            "\227\266\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: inset;\n"
            "}\n"
            "QPushButton:!enabled{\n"
            "	background-color: rgb(100, 100, 100);\n"
            "	border-style: inset;\n"
            "}"));

        verticalLayout->addWidget(exit);

        formLayoutWidget = new QWidget(patient);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(350, 60, 311, 100));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        viexid = new QLineEdit(formLayoutWidget);
        viexid->setObjectName(QString::fromUtf8("viexid"));

        formLayout->setWidget(0, QFormLayout::FieldRole, viexid);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        viewname = new QLineEdit(formLayoutWidget);
        viewname->setObjectName(QString::fromUtf8("viewname"));

        formLayout->setWidget(1, QFormLayout::FieldRole, viewname);

        retranslateUi(patient);

        QMetaObject::connectSlotsByName(patient);
    }  // setupUi

    void retranslateUi(QWidget *patient)
    {
        patient->setWindowTitle(
            QApplication::translate("patient", "Form", nullptr));
        selfinformation->setText(
            QApplication::translate("patient",
                                    "\347\274\226\350\276\221\344\270\252\344"
                                    "\272\272\344\277\241\346\201\257",
                                    nullptr));
        Register->setText(QApplication::translate(
            "patient", "\346\214\202\345\217\267", nullptr));
        HAP->setText(QApplication::translate(
            "patient",
            "\345\201\245\345\272\267\350\257\204\344\274\260",
            nullptr));
        Viewcases->setText(QApplication::translate(
            "patient",
            "\346\237\245\347\234\213\347\227\205\345\216\206\345\215\225",
            nullptr));
        seeinformation->setText(
            QApplication::translate("patient",
                                    "\346\237\245\347\234\213\345\214\273\347"
                                    "\224\237\344\277\241\346\201\257",
                                    nullptr));
        DPCP1->setText(
            QApplication::translate("patient",
                                    "\345\214\273\346\202\243\346\262\237\351"
                                    "\200\232\345\271\263\345\217\260",
                                    nullptr));
        exit->setText(QApplication::translate(
            "patient", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate(
            "patient", "\350\264\246\345\217\267ID", nullptr));
        label_2->setText(QApplication::translate(
            "patient", "\347\224\250\346\210\267\345\220\215", nullptr));
    }  // retranslateUi
};

namespace Ui
{
class patient : public Ui_patient
{
};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_PATIENT_H
