#include "enroll.h"
#include "ui_enroll.h"

Enroll::Enroll(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Enroll)
{
    ui->setupUi(this);
    ui->password2->setValidator(new QRegExpValidator(QRegExp("[a-zA-Z0-9]+$")));
    ui->password1->setValidator(new QRegExpValidator(QRegExp("[a-zA-Z0-9]+$")));
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    connect(ui->exit,&QPushButton::clicked,this,&Enroll::onExit);
//    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
//    btn->setForegroundColor(QColor(132,112,255));
//    btn->setGeometry(80,0,900,50);
//    btn->setText("个人信息注册");
//    btn->applyPreset(Material::FlatPreset);
//    QFont font;
//    font.setFamily("Calibri Light");
//    font.setPixelSize(30);
//    btn->setFont(font);
    client = new socketClient("10.171.147.10",1234);
}

Enroll::~Enroll()
{
    delete ui;
    delete client;
}

void Enroll::on_choose_clicked()
{

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
         QJsonObject* uploadavatar = new QJsonObject;
         uploadavatar->insert("CMD","B00000");

         QJsonObject Args;
         //Args.insert("Identity",2-ApIasd);
         Args.insert("UserID",name.toLongLong());
         //Args.insert("AvatarPic",photo);
         Args.insert("Password",password);
         Args.insert("UserName",Name);
         Args.insert("Sex",sex);
         Args.insert("Age",age);
         Args.insert("SelfAddress",address);
         Args.insert("PhoneNumber",phone);
         Args.insert("Signature",signature);
         uploadavatar->insert("Args",Args);
}

void Enroll::on_password2_textEdited()
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



void Enroll::onExit()
{
    emit switchToLast();
    this->hide();
}

