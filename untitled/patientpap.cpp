#include "patientpap.h"
#include "ui_patientpap.h"
#include "patient.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include <QDesktopWidget>

using namespace Material;

patientPAP::patientPAP(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::patientPAP)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    btn->setForegroundColor(QColor(132,112,255));
    btn->setGeometry(80,0,1000,80);
    btn->setText("查看处方和缴费");
    btn->applyPreset(Material::FlatPreset);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(50);
    btn->setFont(font);
}

patientPAP::~patientPAP()
{
    delete ui;
}

void patientPAP::on_exit_clicked()
{
    patient *pic = new patient();
    pic->show();
}
