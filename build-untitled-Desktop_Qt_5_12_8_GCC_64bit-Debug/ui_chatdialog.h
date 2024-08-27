/********************************************************************************
** Form generated from reading UI file 'chatdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDIALOG_H
#define UI_CHATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatDialog
{
public:
    QListWidget *chatlist;

    void setupUi(QDialog *ChatDialog)
    {
        if (ChatDialog->objectName().isEmpty())
            ChatDialog->setObjectName(QString::fromUtf8("ChatDialog"));
        ChatDialog->resize(380, 679);
        chatlist = new QListWidget(ChatDialog);
        new QListWidgetItem(chatlist);
        new QListWidgetItem(chatlist);
        new QListWidgetItem(chatlist);
        new QListWidgetItem(chatlist);
        new QListWidgetItem(chatlist);
        new QListWidgetItem(chatlist);
        chatlist->setObjectName(QString::fromUtf8("chatlist"));
        chatlist->setGeometry(QRect(0, 0, 381, 701));
        chatlist->setStyleSheet(QString::fromUtf8("border-image: url(:/pitcure/1.PNG);"));

        retranslateUi(ChatDialog);

        QMetaObject::connectSlotsByName(ChatDialog);
    } // setupUi

    void retranslateUi(QDialog *ChatDialog)
    {
        ChatDialog->setWindowTitle(QApplication::translate("ChatDialog", "Dialog", nullptr));

        const bool __sortingEnabled = chatlist->isSortingEnabled();
        chatlist->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = chatlist->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ChatDialog", "\346\202\250\347\232\204\345\245\275\345\217\213\345\210\227\350\241\250", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = chatlist->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("ChatDialog", "1.\350\207\252\345\267\261", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = chatlist->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("ChatDialog", "2.", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = chatlist->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("ChatDialog", "3.", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = chatlist->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("ChatDialog", "4.", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = chatlist->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("ChatDialog", "5.", nullptr));
        chatlist->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class ChatDialog: public Ui_ChatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDIALOG_H
