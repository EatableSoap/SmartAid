#include "patient.h"

#include "ui_patient.h"


patient::patient(QWidget *parent) : QWidget(parent), ui(new Ui::patient)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop = QApplication::desktop();
    move((deskdop->width() - this->width()) / 2,
         (deskdop->height() - this->height()) / 2);
    connect(ui->exit, &QPushButton::clicked, this, &patient::onExit);
    //    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    //    btn->setForegroundColor(QColor(132,112,255));
    //    btn->setGeometry(80,0,800,50);
    //    btn->setText("患者端个人界面");
    //    btn->applyPreset(Material::FlatPreset);
    //    QFont font;
    //    font.setFamily("Calibri Light");
    //    font.setPixelSize(30);
    //    btn->setFont(font);
    // 初始化变量
    client = new socketClient("10.171.147.10", 1234);
    hapWidget = new HAP;
    patientinforWidget = new patientinfor;
    patientcaseWidget = new patientcase;
    patientRegisterWidget = new patientRegister;
    patientseedocWidget = new patientseedoc;
    chatdiagWidget = new ChatDialog;

    connect(hapWidget, &HAP::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
    connect(patientcaseWidget, &patientcase::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
    connect(patientinforWidget, &patientinfor::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
    connect(patientseedocWidget, &patientseedoc::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
    connect(patientRegisterWidget, &patientRegister::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
    connect(chatdiagWidget, &ChatDialog::switchToLast, this, [=]() {
        this->show();
    });
}

patient::~patient()
{
    delete ui;
    delete client;
    ;
    delete hapWidget;
    delete patientcaseWidget;
    delete patientinforWidget;
    delete patientseedocWidget;
    delete patientRegisterWidget;
    delete chatdiagWidget;
}

void patient::on_HAP_clicked()
{
    this->hide();
    hapWidget->show();
}

void patient::on_selfinformation_clicked()
{
    this->hide();
    patientinforWidget->show();
}

void patient::on_Register_clicked()
{
    this->hide();
    patientRegisterWidget->hide();
}

void patient::on_Viewcases_clicked()
{
    this->hide();
    patientcaseWidget->show();
}

void patient::on_seeinformation_clicked()
{
    this->hide();
    patientinforWidget->show();
}

void patient::on_DPCP1_clicked()
{
    this->hide();
    chatdiagWidget->show();
}

void patient::onExit()
{
    emit switchToLast();
    this->hide();
}
