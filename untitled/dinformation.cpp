#include "dinformation.h"
#include "ui_dinformation.h"
#include "doctor.h"

dinformation::dinformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dinformation)
{
    ui->setupUi(this);
}

dinformation::~dinformation()
{
    delete ui;
}



void dinformation::on_Out_clicked()
{
    this->close();
    mainwindow *pic = new dinformation();
    pic->show();
}
