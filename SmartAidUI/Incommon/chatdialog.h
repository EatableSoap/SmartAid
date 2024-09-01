#ifndef CHATDIALOG_H
#define CHATDIALOG_H

#include <QDialog>
#include <QListWidgetItem>
#include <istream>

#include "dpchat.h"

namespace Ui
{
class ChatDialog;
}

class ChatDialog : public QDialog
{
    Q_OBJECT

   signals:
    void switchToLast();

   public:
    socketClient *client;
    explicit ChatDialog(QWidget *parent = nullptr);
    ~ChatDialog();

   private slots:

    void on_chatlist_itemClicked(QListWidgetItem *item);

    void onExit();

   private:
    Ui::ChatDialog *ui;
    dpchat         *dpchatWidget;
};

#endif  // CHATDIALOG_H
