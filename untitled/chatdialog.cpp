#include "chatdialog.h"
#include "ui_chatdialog.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include <QListWidgetItem>
#include<dpchat.h>

using namespace Material;


ChatDialog::ChatDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatDialog)
{
    ui->setupUi(this);
}

ChatDialog::~ChatDialog()
{
    delete ui;
}


void ChatDialog::on_chatlist_itemClicked(QListWidgetItem *item)
{
    this->close();
    dpchat *aps = new dpchat();
    aps->show();
}
