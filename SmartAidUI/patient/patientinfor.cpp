#include "patientinfor.h"

#include "ui_patientinfor.h"


patientinfor::patientinfor(QWidget *parent)
    : QWidget(parent), ui(new Ui::patientinfor)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop = QApplication::desktop();
    move((deskdop->width() - this->width()) / 2,
         (deskdop->height() - this->height()) / 2);
    connect(ui->exit, &QPushButton::clicked, this, &patientinfor::onExit);
    //    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    //    btn->setForegroundColor(QColor(132,112,255));
    //    btn->setGeometry(80,0,900,50);
    //    btn->setText("个人信息编辑与查看");
    //    btn->applyPreset(Material::FlatPreset);
    //    QFont font;
    //    font.setFamily("Calibri Light");
    //    font.setPixelSize(30);
    //    btn->setFont(font);
    client = new socketClient("10.171.147.10", 1234);
}

patientinfor::~patientinfor()
{
    delete ui;
    delete client;
}

void patientinfor::onExit()
{
    emit switchToLast();
    this->hide();
}

void patientinfor::on_save_clicked()
{
    QString      name = ui->name->text();
    QString      userID = ui->IDname->text();
    QString      phone = ui->phone->text();
    QString      signature = ui->Signature->text();
    QString      sex = ui->sex->text();
    QString      address = ui->adress->text();
    QString      age = ui->age->text();

    QJsonObject *editpro = new QJsonObject;
    editpro->insert("CMD", "C00110");
    QJsonObject Args;
    Args.insert("Identity", 0);
    Args.insert("UserID", userID.toLongLong());
    // Args.insert("OldPassword","100011");
    // Args.insert("NewPassword","100100");
    // Args.insert("Avatar","100101");
    Args.insert("Sex", sex);
    Args.insert("Age", age);
    Args.insert("SelfAddress", address);
    Args.insert("PhoneNumber", phone);
    Args.insert("Signature", signature);

    editpro->insert("Args", Args);
}
