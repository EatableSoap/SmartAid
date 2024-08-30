#include "ui_doctorcase.h"
#include "doctorcase.h"


doctorcase::doctorcase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::doctorcase)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    connect(ui->exit,&QPushButton::clicked,this,&doctorcase::onExit);
//    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
//    btn->setForegroundColor(QColor(255,106,106));
//    btn->setGeometry(100,0,600,80);
//    btn->setText("在线问诊病历单");
//    btn->applyPreset(Material::FlatPreset);
//    QFont font;
//    font.setFamily("Calibri Light");
//    font.setPixelSize(40);
//    btn->setFont(font);
    client = new socketClient("10.171.147.10",1234);
}

doctorcase::~doctorcase()
{
    delete ui;
    delete client;
}

void doctorcase::onExit()
{
    emit switchToLast();
    this->hide();
}

void doctorcase::on_save_clicked()
{
    QString name = ui->name->text();
    QString phone = ui->phone->text();
    QString order = ui->order->toPlainText();
    QString sex = ui->sex->text();
    QString age = ui->age->text();
    QString room = ui->room->currentText();
    QString address = ui->address->text();

}
