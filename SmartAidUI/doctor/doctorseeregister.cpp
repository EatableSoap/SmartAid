#include "doctorseeregister.h"

#include "ui_doctorseeregister.h"

doctorseeregister::doctorseeregister(QWidget *parent)
    : QWidget(parent), ui(new Ui::doctorseeregister)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop = QApplication::desktop();
    move((deskdop->width() - this->width()) / 2,
         (deskdop->height() - this->height()) / 2);
    connect(ui->exit, &QPushButton::clicked, this, &doctorseeregister::onExit);
    client = new socketClient("10.171.147.10", 1234);
}

doctorseeregister::~doctorseeregister()
{
    delete ui;
    delete client;
}

void doctorseeregister::onExit()
{
    emit switchToLast();
    this->hide();
}

void doctorseeregister::on_save_clicked() {}
