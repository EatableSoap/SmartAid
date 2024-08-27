#include "enroll.h"
#include "ui_enroll.h"
#include "mainwindow.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<string.h>
#include<qtmaterialflatbutton_internal.h>
#include <QDesktopWidget>
using namespace Material;


Enroll::Enroll(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Enroll)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    btn->setForegroundColor(QColor(132,112,255));
    btn->setGeometry(80,0,900,50);
    btn->setText("个人信息注册");
    btn->applyPreset(Material::FlatPreset);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(30);
    btn->setFont(font);
}

Enroll::~Enroll()
{
    delete ui;
}

void Enroll::on_out_clicked()
{
    this->close();
    MainWindow *pic = new MainWindow();
    pic->show();
}

void Enroll::on_enroll_clicked()
{
     QString name = ui->name->text();
     QString password = ui->password1->text();
     QString phone = ui->phone->text();
     QString Name = ui->Name->text();
     QString signature = ui->signature->text();
     QString sex = ui->sex->text();
     QString address = ui->address->text();
     QString age = ui->age->text();

}

void Enroll::on_password2_textEdited(const QString &arg1)
{
    QString s1=ui->password1->text();
    QString s2=ui->password2->text();
    ui->label_12->setText("密码不同");
    ui->label_12->setStyleSheet("color:red;");
    if(s1==s2)
    {
        ui->label_12->setText("密码相同");
    }
}
