#include "ui_doctor.h"
#include "doctor.h"


Doctor::Doctor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Doctor)
{
    ui->setupUi(this);
    QDesktopWidget *desktopWidget=QApplication::desktop();
    int _index=desktopWidget->screenNumber(this);
    QRect rect=desktopWidget->screenGeometry(_index);//适配多显示器
    this->setGeometry(rect.width()/2-this->width()/2,rect.height()/2-this->height()/2,this->width(),this->height());

    //初始化变量
    client = new socketClient("10.171.147.10",1234);
    doctorinforWidget = new doctorinfor;
    doctorcaseWidget = new doctorcase;
    doctorseeregisterWidget = new doctorseeregister;
    chatdiagWidget = new ChatDialog;

    connect(doctorcaseWidget, &doctorcase::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
    connect(doctorinforWidget, &doctorinfor::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
    connect(doctorseeregisterWidget, &doctorseeregister::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
    connect(chatdiagWidget, &ChatDialog::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
}

Doctor::~Doctor()
{
    delete ui;
    delete doctorcaseWidget;
    delete doctorinforWidget;
    delete doctorseeregisterWidget;
    delete chatdiagWidget;
    delete client;
}


void Doctor::on_selfinformation_clicked()
{
    this->hide();
    doctorinforWidget->show();
}

void Doctor::on_Case_clicked()
{
    this->hide();
    doctorcaseWidget->show();
}

void Doctor::on_seeregister_clicked()
{
    this->hide();
    doctorseeregisterWidget->show();
}

void Doctor::on_DPCP_clicked()
{
    this->hide();
    chatdiagWidget->show();
}

void Doctor::onExit(){
    emit switchToLast();
    this->hide();
}
