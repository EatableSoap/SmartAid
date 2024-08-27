#include "doctorcase.h"
#include "ui_doctorcase.h"
#include "doctor.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include <QDesktopWidget>
#include <QApplication>
using namespace Material;


doctorcase::doctorcase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::doctorcase)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    btn->setForegroundColor(QColor(255,106,106));
    btn->setGeometry(80,0,800,80);
    btn->setText("编辑病例");
    btn->applyPreset(Material::FlatPreset);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(60);
    btn->setFont(font);
}

doctorcase::~doctorcase()
{
    delete ui;
}



void doctorcase::on_exit_clicked()
{
    Doctor *pic = new Doctor();
    pic->show();
}

void doctorcase::on_save_clicked()
{
    QString name = ui->name->text();
    QString phone = ui->phone->text();
    QString order = ui->order->text();
    QString sex = ui->sex->text();
    QString age = ui->age->text();
    QString room = ui->room->text();
    QString address = ui->address->text();
}
