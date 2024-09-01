#include "enroll.h"

#include "ui_enroll.h"


QByteArray *avatarpic;

Enroll::Enroll(QWidget *parent) : QDialog(parent), ui(new Ui::Enroll)
{
    ui->setupUi(this);
    ui->password2->setValidator(new QRegExpValidator(QRegExp("[a-zA-Z0-9]+$")));
    ui->password1->setValidator(new QRegExpValidator(QRegExp("[a-zA-Z0-9]+$")));
    QDesktopWidget *deskdop = QApplication::desktop();
    move((deskdop->width() - this->width()) / 2,
         (deskdop->height() - this->height()) / 2);
    connect(ui->exit, &QPushButton::clicked, this, &Enroll::onExit);
    client = new socketClient("10.171.147.20", 1234);
}

Enroll::~Enroll()
{
    delete ui;
    delete client;
}

void Enroll::on_choose_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
        this, tr("打开图片"), QDir::homePath(), tr("(*.jpg)\n(*.png)"));
    if (filename.size())
        {
            avatarpic = FileOperate::PicToQByte(filename);
            QImage image;
            image.load(filename);
            ui->label_photo->setPixmap(
                QPixmap::fromImage(image).scaled(ui->label_photo->size()));
        }
}

void Enroll::on_enroll_clicked()
{
    ui->enroll->setDisabled(true);
    if (!avatarpic->isNull())
        {
            QString          password = ui->password1->text();
            QString          phone = ui->phone->text();
            QString          Name = ui->Name->text();
            QString          signature = ui->signature->toPlainText();
            QString          sex = ui->sex->text();
            QString          address = ui->address->text();
            int              age = ui->age->text().toInt();
            const QByteArray avatar = *avatarpic;
            QJsonObject      uploadavatar;
            uploadavatar.insert("CMD", "B00000");

            QJsonObject Args;
            Args.insert("Identity", client->shareValue->identity);
            qlonglong curtime = QDateTime::currentDateTime().toMSecsSinceEpoch();
            Args.insert("UserID", curtime);
            Args.insert("Password", password);
            Args.insert("UserName", Name);
            Args.insert("Sex", sex);
            Args.insert("Age", age);
            Args.insert(client->shareValue->identity ? "APartment" : "Address",
                        address);
            Args.insert("PhoneNumber", phone);
            Args.insert("Signature", signature);
            uploadavatar.insert("Args", Args);

            // 连接到主机
            if (client->shareValue->sharedsocket->state() !=
                QTcpSocket::ConnectedState)
                client->tryconnect();
            client->sendCommand(uploadavatar, avatar, "Avatar.jpg");

            client->shareValue->sharedsocket->waitForReadyRead(1000);
            QJsonObject ReturnPack = client->RecvJson;

            QMessageBox::information(NULL,
                                     "提示",
                                     ReturnPack.value("Result").toString(),
                                     QMessageBox::Yes);
            if (ReturnPack.value("Result").toString().contains("成功"))
                {
                    emit switchToLast();
                    this->hide();
                    client->shareValue->sharedsocket->disconnectFromHost();
                }
        }
    else
        {
            QMessageBox::information(
                NULL, "提示", "请选择头像！", QMessageBox::Yes);
        }
    ui->enroll->setDisabled(false);
}

void Enroll::on_password2_textEdited()
{
    QString s1 = ui->password1->text();
    QString s2 = ui->password2->text();
    ui->label_12->setText("密码不同");
    ui->label_12->setStyleSheet("color:red;");
    if (s1 == s2)
        ui->label_12->setText("密码相同");
}

void Enroll::onExit()
{
    emit switchToLast();
    this->hide();
    if (client->shareValue->sharedsocket->state() == QTcpSocket::ConnectedState)
        client->shareValue->sharedsocket->disconnectFromHost();
}

void Enroll::on_choose1_clicked()
{
    client->shareValue->identity = 1;
    ui->selfinfo->setText("就诊科室");
}

void Enroll::on_choose2_clicked()
{
    client->shareValue->identity = 0;
    ui->selfinfo->setText("家庭住址");
}
