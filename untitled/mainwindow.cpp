#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include<qtmaterialautocomplete.h>
using namespace Material;

int a;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    btn->setForegroundColor(QColor(0,198,231));
    btn->setGeometry(80,20,800,100);
    btn->setText("智慧医疗登陆平台");
    btn->applyPreset(Material::FlatPreset);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(60);
    btn->setFont(font);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Doctor_pressed()
{
    a=1;
}

void MainWindow::on_patient_pressed()
{
    a=2;
}


void MainWindow::on_Login_clicked()
{
    if(a==1)
    {
        Doctor *pci = new Doctor();
        pci->show();
        this->close();
    }
    if(a==2)
    {
        patient *cip = new patient();
        cip->show();
        this->close();
    }
    if(a!=1&&a!=2)
    {
        QMessageBox::warning(NULL, "错误❌", "请您选择自己的身份信息", QMessageBox::Yes);

    }
}

void MainWindow::on_enroll_clicked()
{
    this->close();
    Enroll *pic = new Enroll();
    pic->show();
}

void MainWindow::on_Logout_clicked()
{
    this->close();
}

