#include "patientregister.h"

#include "ui_patientregister.h"


patientRegister::patientRegister(QWidget *parent)
    : QWidget(parent), ui(new Ui::patientRegister)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop = QApplication::desktop();
    move((deskdop->width() - this->width()) / 2,
         (deskdop->height() - this->height()) / 2);
    connect(ui->exit, &QPushButton::clicked, this, &patientRegister::onExit);
    //    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    //    btn->setForegroundColor(QColor(132,112,255));
    //    btn->setGeometry(80,0,900,50);
    //    btn->setText("挂号");
    //    btn->applyPreset(Material::FlatPreset);
    //    QFont font;
    //    font.setFamily("Calibri Light");
    //    font.setPixelSize(30);
    //    btn->setFont(font);
    client = new socketClient("10.171.147.10", 1234);
}

patientRegister::~patientRegister()
{
    delete ui;
    delete client;
    ;
}

void patientRegister::onExit()
{
    emit switchToLast();
    this->hide();
}
