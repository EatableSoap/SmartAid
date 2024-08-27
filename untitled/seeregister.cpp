#include "seeregister.h"
#include "ui_seeregister.h"

seeregister::seeregister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seeregister)
{
    ui->setupUi(this);
}

seeregister::~seeregister()
{
    delete ui;
}
