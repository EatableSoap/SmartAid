#include "doctorinfor.h"
#include "ui_doctorinfor.h"



doctorinfor::doctorinfor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::doctorinfor)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    connect(ui->exit,&QPushButton::clicked,this,&doctorinfor::onExit);
    client = new socketClient("10.171.147.10",1234);
}

doctorinfor::~doctorinfor()
{
    delete ui;
    delete client;
}

void doctorinfor::onExit()
{
    emit switchToLast();
    this->hide();
}

void doctorinfor::on_save_clicked()
{
    QString name = ui->name->text();
    QString userID = ui->Name->text();
    QString phone = ui->phone->text();
    QString signature = ui->signature->text();
    QString sex = ui->sex->text();
    QString age = ui->age->text();
    QString room = ui->adress->text();

    QJsonObject* editpro = new QJsonObject;
    editpro->insert("CMD","C00110");
    QJsonObject Args;
    Args.insert("Identity",1);
    Args.insert("UserID",userID.toLongLong());
    //Args.insert("OldPassword","100011");
    //Args.insert("NewPassword","100100");
    //Args.insert("Avatar","100101");
    Args.insert("Sex",sex);
    Args.insert("Age",age);
    Args.insert("SelfAddress",room);
    Args.insert("PhoneNumber",phone);
    Args.insert("Signature",signature);

    editpro->insert("Args",Args);
}


