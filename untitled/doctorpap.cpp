#include "doctorpap.h"
#include "ui_doctorpap.h"
#include "doctor.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include <QDesktopWidget>
using namespace Material;


doctorPAP::doctorPAP(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::doctorPAP)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    btn->setForegroundColor(QColor(132,112,255));
    btn->setGeometry(80,0,900,50);
    btn->setText("编辑处方与缴费金额");
    btn->applyPreset(Material::FlatPreset);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(30);
    btn->setFont(font);
}

doctorPAP::~doctorPAP()
{
    delete ui;
}

void doctorPAP::on_exit_clicked()
{
    Doctor *pic = new Doctor();
    pic->show();
}

void doctorPAP::on_save_clicked()
{
    QString number = ui->number->text();
    QString money = ui->money->text();
    QString order = ui->order->text();
    QString notice = ui->notice->text();
}
