/********************************************************************************
** Form generated from reading UI file 'patientdpcp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTDPCP_H
#define UI_PATIENTDPCP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patientDPCP
{
public:
    QTreeWidget *treeWidget;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *exit;

    void setupUi(QWidget *patientDPCP)
    {
        if (patientDPCP->objectName().isEmpty())
            patientDPCP->setObjectName(QString::fromUtf8("patientDPCP"));
        patientDPCP->resize(1494, 686);
        treeWidget = new QTreeWidget(patientDPCP);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 321, 691));
        textBrowser = new QTextBrowser(patientDPCP);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(320, 0, 1181, 521));
        lineEdit = new QLineEdit(patientDPCP);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(320, 520, 1181, 171));
        pushButton = new QPushButton(patientDPCP);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1349, 617, 111, 61));
        exit = new QPushButton(patientDPCP);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(1439, 0, 51, 48));

        retranslateUi(patientDPCP);

        QMetaObject::connectSlotsByName(patientDPCP);
    } // setupUi

    void retranslateUi(QWidget *patientDPCP)
    {
        patientDPCP->setWindowTitle(QApplication::translate("patientDPCP", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("patientDPCP", "\350\201\224\347\263\273\344\272\272", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("patientDPCP", "A", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("patientDPCP", "B", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        textBrowser->setHtml(QApplication::translate("patientDPCP", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; font-weight:600; text-decoration: underline;\">\350\201\212\345\244\251\347\225\214\351\235\242</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("patientDPCP", "\345\217\221\351\200\201", nullptr));
        exit->setText(QApplication::translate("patientDPCP", "\342\235\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientDPCP: public Ui_patientDPCP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTDPCP_H
