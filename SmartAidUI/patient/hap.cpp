#include "hap.h"

#include "ui_hap.h"


HAP::HAP(QWidget *parent) : QWidget(parent), ui(new Ui::HAP)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop = QApplication::desktop();
    move((deskdop->width() - this->width()) / 2,
         (deskdop->height() - this->height()) / 2);
    connect(ui->exit, &QPushButton::clicked, this, &HAP::onExit);
    client = new socketClient("10.171.147.10", 1234);
}

HAP::~HAP()
{
    delete ui;
    delete client;
}

void HAP::on_putin_clicked()
{
    this->close();
    QMessageBox::information(NULL,
                             "提示",
                             "您的健康信息已上报，请等待一天后登陆查看",
                             QMessageBox::Yes);
}

void HAP::onExit()
{
    emit switchToLast();
    this->hide();
}
