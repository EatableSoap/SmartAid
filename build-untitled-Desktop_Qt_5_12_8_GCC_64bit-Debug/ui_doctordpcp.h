/********************************************************************************
** Form generated from reading UI file 'doctordpcp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORDPCP_H
#define UI_DOCTORDPCP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctorDPCP
{
public:
    QPushButton *exit;

    void setupUi(QWidget *doctorDPCP)
    {
        if (doctorDPCP->objectName().isEmpty())
            doctorDPCP->setObjectName(QString::fromUtf8("doctorDPCP"));
        doctorDPCP->resize(1267, 962);
        exit = new QPushButton(doctorDPCP);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(1040, 850, 191, 81));

        retranslateUi(doctorDPCP);
        QObject::connect(exit, SIGNAL(clicked()), doctorDPCP, SLOT(close()));

        QMetaObject::connectSlotsByName(doctorDPCP);
    } // setupUi

    void retranslateUi(QWidget *doctorDPCP)
    {
        doctorDPCP->setWindowTitle(QApplication::translate("doctorDPCP", "Form", nullptr));
        exit->setText(QApplication::translate("doctorDPCP", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctorDPCP: public Ui_doctorDPCP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORDPCP_H
