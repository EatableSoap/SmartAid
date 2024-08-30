#include "chatdialog.h"
#include "ui_chatdialog.h"

ChatDialog::ChatDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatDialog)
{
    ui->setupUi(this);

    //初始化变量
    client = new socketClient("10.171.147.10",1234);
    dpchatWidget = new dpchat;

    connect(ui->exit,&QPushButton::clicked,this,&ChatDialog::onExit);
    connect(dpchatWidget, &dpchat::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
}

ChatDialog::~ChatDialog()
{
    delete ui;
    delete client;
}


void ChatDialog::on_chatlist_itemClicked(QListWidgetItem *item)
{
    int index = ui->chatlist->row(item);

    // 检查索引是否是第一行
    if (index == 0) {
        // 第一行不响应点击
        return;
    }
    this->close();
    dpchat *aps = new dpchat();
    aps->show();
}

void ChatDialog::onExit()
{
    emit switchToLast();
    this->hide();
}
