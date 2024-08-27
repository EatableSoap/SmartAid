#include "hap.h"
#include "ui_hap.h"
#include <QMainWindow>
#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QMovie>
#include <enroll.h>
#include <doctor.h>
#include <patient.h>
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include <QDesktopWidget>
using namespace Material;


HAP::HAP(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HAP)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    btn->setForegroundColor(QColor(0,198,231));
    btn->setGeometry(80,20,700,100);
    btn->setText("健康评估系统");
    btn->applyPreset(Material::FlatPreset);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(60);
    btn->setFont(font);
}

HAP::~HAP()
{
    delete ui;
}


void HAP::on_putin_clicked()
{
    this->close();
    QMessageBox::information(NULL, "提示", "您的健康信息已上报，请等待一天后登陆查看", QMessageBox::Yes);
}

void HAP::on_exit_clicked()
{
    patient *pic = new patient();
    pic->show();
}
