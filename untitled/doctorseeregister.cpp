#include "doctorseeregister.h"
#include "ui_doctorseeregister.h"
#include "doctor.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include <QDesktopWidget>
using namespace Material;


doctorseeregister::doctorseeregister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::doctorseeregister)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    btn->setForegroundColor(QColor(132,112,255));
    btn->setGeometry(80,0,900,50);
    btn->setText("个人信息编辑与查看");
    btn->applyPreset(Material::FlatPreset);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(30);
    btn->setFont(font);
}

doctorseeregister::~doctorseeregister()
{
    delete ui;
}

void doctorseeregister::on_exit_clicked()
{
    Doctor *pic = new Doctor();
    pic->show();
}


void doctorseeregister::on_save_2_clicked()
{
    QString name = ui->name->text();
    QString phone = ui->phone->text();
    QString signature = ui->signature->text();
    QString sex = ui->sex->text();
    QString age = ui->age->text();
    QString room = ui->room->text();
    QString address = ui->address->text();
}
