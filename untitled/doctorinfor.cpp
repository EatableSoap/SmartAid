#include "doctorinfor.h"
#include "ui_doctorinfor.h"
#include "doctor.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include <QDesktopWidget>
#include<qtmaterialflatbutton_internal.h>
#include <QDesktopWidget>
#include <QApplication>
using namespace Material;


doctorinfor::doctorinfor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::doctorinfor)
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
    font.setPixelSize(50);
    btn->setFont(font);
}

doctorinfor::~doctorinfor()
{
    delete ui;
}

void doctorinfor::on_out_clicked()
{
    Doctor *pic = new Doctor();
    pic->show();
}

void doctorinfor::on_save_clicked()
{
    QString name = ui->name->text();
    QString phone = ui->phone->text();
    QString signature = ui->signature->text();
    QString sex = ui->sex->text();
    QString age = ui->age->text();
    QString room = ui->adress->text();
}
