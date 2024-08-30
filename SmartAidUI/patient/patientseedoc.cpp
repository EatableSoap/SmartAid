#include "ui_patientseedoc.h"
#include "patientseedoc.h"

patientseedoc::patientseedoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::patientseedoc)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    connect(ui->exit,&QPushButton::clicked,this,&patientseedoc::onExit);
//    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
//    btn->setForegroundColor(QColor(132,112,255));
//    btn->setGeometry(80,0,700,50);
//    btn->setText("查看医生信息");
//    btn->applyPreset(Material::FlatPreset);
//    QFont font;
//    font.setFamily("Calibri Light");
//    font.setPixelSize(40);
//    btn->setFont(font);
    client = new socketClient("10.171.147.10",1234);
}

patientseedoc::~patientseedoc()
{
    delete ui;
    delete client;;
}

void patientseedoc::onExit()
{
    emit switchToLast();
    this->hide();
}

void patientseedoc::on_save_clicked()
{
    QString name = ui->name->text();
    QString phone = ui->phone->text();
    QString signature = ui->signature->text();
    QString sex = ui->sex->text();
    QString room = ui->room->text();
    QString age = ui->age->text();
    QString address = ui->address->text();
}
