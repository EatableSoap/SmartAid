#include "doctor.h"
#include "ui_doctor.h"
#include "doctorinfor.h"
#include "doctorcase.h"
#include "doctordpcp.h"
#include "doctorpap.h"
#include "doctorseeregister.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include<QtWidgets>
#include<chatdialog.h>
using namespace Material;



Doctor::Doctor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Doctor)
{
    ui->setupUi(this);
    QDesktopWidget *desktopWidget=QApplication::desktop();
    int _index=desktopWidget->screenNumber(this);
    QRect rect=desktopWidget->screenGeometry(_index);//适配多显示器
    this->setGeometry(rect.width()/2-this->width()/2,rect.height()/2-this->height()/2,this->width(),this->height());
    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    btn->setForegroundColor(QColor(255,106,106));
    btn->setGeometry(80,0,800,80);
    btn->setText("医生端个人界面");
    btn->applyPreset(Material::FlatPreset);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(30);
    btn->setFont(font);
}

Doctor::~Doctor()
{
    delete ui;
}

void Doctor::on_selfinformation_clicked()
{
    this->close();
    doctorinfor *pic = new doctorinfor();
    pic->show();
}



void Doctor::on_Case_clicked()
{
    this->close();
    doctorcase *pci = new doctorcase();
    pci->show();
}

void Doctor::on_PAP_clicked()
{
    this->close();
    doctorPAP *cpi = new doctorPAP();
    cpi->show();
}

void Doctor::on_seeregister_clicked()
{
    this->close();
    doctorseeregister *cip = new doctorseeregister();
    cip->show();
}

void Doctor::on_DPCP_clicked()
{
    this->close();
    ChatDialog *apc = new ChatDialog();
    apc->show();
}
