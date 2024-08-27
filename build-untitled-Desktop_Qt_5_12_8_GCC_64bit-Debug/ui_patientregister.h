/********************************************************************************
** Form generated from reading UI file 'patientregister.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTREGISTER_H
#define UI_PATIENTREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patientRegister
{
public:
    QPushButton *exit;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *number;
    QLabel *label_3;
    QLineEdit *patientID;
    QLabel *label;
    QLineEdit *doctorID;
    QLabel *label_4;
    QLineEdit *room;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *time;
    QLabel *label_7;
    QComboBox *comboBox;
    QDateTimeEdit *dateTimeEdit;

    void setupUi(QWidget *patientRegister)
    {
        if (patientRegister->objectName().isEmpty())
            patientRegister->setObjectName(QString::fromUtf8("patientRegister"));
        patientRegister->resize(1035, 581);
        exit = new QPushButton(patientRegister);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(440, 480, 151, 71));
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
        formLayoutWidget = new QWidget(patientRegister);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(90, 70, 851, 381));
        formLayout_2 = new QFormLayout(formLayoutWidget);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        number = new QLineEdit(formLayoutWidget);
        number->setObjectName(QString::fromUtf8("number"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, number);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        patientID = new QLineEdit(formLayoutWidget);
        patientID->setObjectName(QString::fromUtf8("patientID"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, patientID);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label);

        doctorID = new QLineEdit(formLayoutWidget);
        doctorID->setObjectName(QString::fromUtf8("doctorID"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, doctorID);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        room = new QLineEdit(formLayoutWidget);
        room->setObjectName(QString::fromUtf8("room"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, room);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_6);

        time = new QLineEdit(formLayoutWidget);
        time->setObjectName(QString::fromUtf8("time"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, time);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_7);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, comboBox);

        dateTimeEdit = new QDateTimeEdit(formLayoutWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, dateTimeEdit);


        retranslateUi(patientRegister);
        QObject::connect(exit, SIGNAL(clicked()), patientRegister, SLOT(close()));

        QMetaObject::connectSlotsByName(patientRegister);
    } // setupUi

    void retranslateUi(QWidget *patientRegister)
    {
        patientRegister->setWindowTitle(QApplication::translate("patientRegister", "Form", nullptr));
        exit->setText(QApplication::translate("patientRegister", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QApplication::translate("patientRegister", "\351\242\204\347\272\246\345\217\267", nullptr));
        label_3->setText(QApplication::translate("patientRegister", "\346\202\243\350\200\205ID", nullptr));
        label->setText(QApplication::translate("patientRegister", "\345\214\273\347\224\237ID", nullptr));
        label_4->setText(QApplication::translate("patientRegister", "\345\260\261\350\257\212\347\247\221\345\256\244", nullptr));
        label_5->setText(QApplication::translate("patientRegister", "\351\242\204\347\272\246\346\227\266\351\227\264", nullptr));
        label_6->setText(QApplication::translate("patientRegister", "\351\242\204\347\272\246\346\227\266\351\225\277", nullptr));
        label_7->setText(QApplication::translate("patientRegister", "\345\256\214\346\210\220\346\203\205\345\206\265", nullptr));
        comboBox->setItemText(0, QApplication::translate("patientRegister", "\345\267\262\345\256\214\346\210\220", nullptr));
        comboBox->setItemText(1, QApplication::translate("patientRegister", "\346\234\252\345\256\214\346\210\220", nullptr));

    } // retranslateUi

};

namespace Ui {
    class patientRegister: public Ui_patientRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTREGISTER_H
