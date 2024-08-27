#include "patientinfor.h"
#include "ui_patientinfor.h"
#include "patient.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include <QDesktopWidget>
using namespace Material;

patientinfor::patientinfor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::patientinfor)
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

patientinfor::~patientinfor()
{
    delete ui;
}

void patientinfor::on_exit_clicked()
{
    patient *pic = new patient();
    pic->show();
}

void patientinfor::on_save_clicked()
{
    QString name = ui->name->text();
    QString IDname = ui->IDname->text();
    QString phone = ui->phone->text();
    QString signature = ui->Signature->text();
    QString sex = ui->sex->text();
    QString address = ui->adress->text();
    QString age = ui->age->text();
}
