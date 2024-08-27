#include "patient.h"
#include "ui_patient.h"
#include "hap.h"
#include "patientinfor.h"
#include "patientcase.h"
#include "patientdpcp.h"
#include "patientpap.h"
#include "patientregister.h"
#include "patientseedoc.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include <QDesktopWidget>
#include<chatdialog.h>
using namespace Material;

patient::patient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::patient)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    btn->setForegroundColor(QColor(132,112,255));
    btn->setGeometry(80,0,800,50);
    btn->setText("患者端个人界面");
    btn->applyPreset(Material::FlatPreset);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(30);
    btn->setFont(font);
}

patient::~patient()
{
    delete ui;
}



void patient::on_HAP_clicked()
{
    this->close();
    HAP *pic = new HAP();
    pic->show();
}

void patient::on_selfinformation_clicked()
{
    this->close();
    patientinfor *pci = new patientinfor();
    pci->show();
}

void patient::on_Register_clicked()
{
    this->close();
    patientRegister *cpi = new patientRegister();
    cpi->show();
}


void patient::on_Viewcases_clicked()
{
    this->close();
    patientcase *cip = new patientcase();
    cip->show();
}

void patient::on_seeinformation_clicked()
{
    this->close();
    patientseedoc *icp = new patientseedoc();
    icp->show();
}

void patient::on_DPCP_clicked()
{
    this->close();
    ChatDialog *apc = new ChatDialog();
    apc->show();
}

void patient::on_PAP_clicked()
{
    this->close();
    patientPAP *ipe = new patientPAP();
    ipe->show();
}
