#ifndef CHATDIALOG_H
#define CHATDIALOG_H

#include <QDialog>
#include <QListWidgetItem>


namespace Ui {
class ChatDialog;
}

class ChatDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChatDialog(QWidget *parent = nullptr);
    ~ChatDialog();

private slots:


    void on_chatlist_itemClicked(QListWidgetItem *item);

private:
    Ui::ChatDialog *ui;
};

#endif // CHATDIALOG_H
