#include "patientregister.h"
#include "ui_patientregister.h"
#include "patient.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include <QDesktopWidget>
using namespace Material;

patientRegister::patientRegister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::patientRegister)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    btn->setForegroundColor(QColor(132,112,255));
    btn->setGeometry(80,0,900,50);
    btn->setText("挂号");
    btn->applyPreset(Material::FlatPreset);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(30);
    btn->setFont(font);
}

patientRegister::~patientRegister()
{
    delete ui;
}

void patientRegister::on_exit_clicked()
{
    patient *pic = new patient();
    pic->show();
}
