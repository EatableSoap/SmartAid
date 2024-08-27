#include "patientseedoc.h"
#include "ui_patientseedoc.h"
#include "patient.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include <QDesktopWidget>
using namespace Material;

patientseedoc::patientseedoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::patientseedoc)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    btn->setForegroundColor(QColor(132,112,255));
    btn->setGeometry(80,0,700,50);
    btn->setText("查看医生信息");
    btn->applyPreset(Material::FlatPreset);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(40);
    btn->setFont(font);
}

patientseedoc::~patientseedoc()
{
    delete ui;
}

void patientseedoc::on_exit_clicked()
{
    patient *pic = new patient();
    pic->show();
}

void patientseedoc::on_save_clicked()
{
    QString name = ui->name->text();
    QString phone = ui->phone->text();
    QString signature = ui->signature->text();
    QString sex = ui->sex->text();
    QString room = ui->room->text();
    QString age = ui->age->text();
    QString address = ui->address->text();
}
