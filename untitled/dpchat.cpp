#include "dpchat.h"
#include "ui_dpchat.h"
#include "chatdialog.h"

dpchat::dpchat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dpchat)
{
    ui->setupUi(this);
}

dpchat::~dpchat()
{
    delete ui;
}

void dpchat::on_emo_clicked()
{

}

void dpchat::on_exit_clicked()
{
    ChatDialog *aps = new ChatDialog();
    aps->show();
}
