/********************************************************************************
** Form generated from reading UI file 'doctorseeregister.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORSEEREGISTER_H
#define UI_DOCTORSEEREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctorseeregister
{
   public:
    QWidget      *horizontalLayoutWidget;
    QHBoxLayout  *horizontalLayout_5;
    QPushButton  *save;
    QPushButton  *exit;
    QTableWidget *tableWidget;

    void          setupUi(QWidget *doctorseeregister)
    {
        if (doctorseeregister->objectName().isEmpty())
            doctorseeregister->setObjectName(
                QString::fromUtf8("doctorseeregister"));
        doctorseeregister->resize(669, 838);
        doctorseeregister->setStyleSheet(
            QString::fromUtf8("background:qlineargradient(spread:repeat, x1:0, "
                              "y1:0, x2:1, y2:1, stop:0.221649 rgba(52, 226, "
                              "186,255), stop:1 rgba(255, 191,132,255))"));
        horizontalLayoutWidget = new QWidget(doctorseeregister);
        horizontalLayoutWidget->setObjectName(
            QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 700, 461, 69));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(
            QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        save = new QPushButton(horizontalLayoutWidget);
        save->setObjectName(QString::fromUtf8("save"));
        save->setStyleSheet(QString::fromUtf8(
            "QPushButton\n"
            "{\n"
            "	background-color: #473C8B; "
            "/*\350\203\214\346\231\257\350\211\262*/ \n"
            "	border-style: outset;\n"
            "	border-width: 2px;\n"
            "	border-radius:5px; "
            "/*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
            "	border-color: #8B7355;\n"
            "	font: bold 36px;\n"
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

        horizontalLayout_5->addWidget(save);

        exit = new QPushButton(horizontalLayoutWidget);
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
            "	font: bold 36px;\n"
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

        horizontalLayout_5->addWidget(exit);

        tableWidget = new QTableWidget(doctorseeregister);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 120, 631, 561));

        retranslateUi(doctorseeregister);

        QMetaObject::connectSlotsByName(doctorseeregister);
    }  // setupUi

    void retranslateUi(QWidget *doctorseeregister)
    {
        doctorseeregister->setWindowTitle(
            QApplication::translate("doctorseeregister", "Form", nullptr));
        save->setText(QApplication::translate(
            "doctorseeregister",
            "\344\277\235\345\255\230\344\270\216\346\233\264\346\226\260",
            nullptr));
        exit->setText(QApplication::translate(
            "doctorseeregister", "\351\200\200\345\207\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem =
            tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(
            QApplication::translate("doctorseeregister",
                                    "\351\242\204  \347\272\246  \345\217\267",
                                    nullptr));
        QTableWidgetItem *___qtablewidgetitem1 =
            tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate(
            "doctorseeregister", "\345\247\223         \345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 =
            tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate(
            "doctorseeregister",
            "\351\242\204\347\272\246\346\227\266\351\227\264",
            nullptr));
        QTableWidgetItem *___qtablewidgetitem3 =
            tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(
            QApplication::translate("doctorseeregister", "1.", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 =
            tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(
            QApplication::translate("doctorseeregister", "2.", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 =
            tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(
            QApplication::translate("doctorseeregister", "3.", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 =
            tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(
            QApplication::translate("doctorseeregister", "4.", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 =
            tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(
            QApplication::translate("doctorseeregister", "5.", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 =
            tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(
            QApplication::translate("doctorseeregister", "6.", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 =
            tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(
            QApplication::translate("doctorseeregister", "7.", nullptr));
    }  // retranslateUi
};

namespace Ui
{
class doctorseeregister : public Ui_doctorseeregister
{
};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_DOCTORSEEREGISTER_H
