#include "ui_mainwindow.h"
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->username->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
    ui->password->setValidator(new QRegExpValidator(QRegExp("[a-zA-Z0-9]+$")));
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(40);
    QAction *action = new QAction(this);
    action->setIcon(QIcon(":/preview-close.png"));
    //初始化变量
    client = new socketClient("10.171.147.20",1234);
    doctorWidget = new Doctor;
    patientWidget = new patient;
    enrollWidget = new Enroll;

    int stat = 0;

    connect(action,&QAction::triggered,this,[=]()mutable{
        if (stat == 0)
        {
            action->setIcon(QIcon(":/eyes-open.png"));
            ui->password->addAction(action,QLineEdit::TrailingPosition);
            stat = 1;
            ui->password->setEchoMode(QLineEdit::Normal);
        }
        else
        {
            action->setIcon(QIcon(":/preview-close.png"));
            ui->password->addAction(action,QLineEdit::TrailingPosition);
            stat = 0;
            ui->password->setEchoMode(QLineEdit::Password);
        }
    });
    connect(doctorWidget, &Doctor::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
    connect(patientWidget, &patient::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
    connect(enrollWidget, &Enroll::switchToLast, this, [=]() {
        this->show();  // 显示主窗口
    });
}

MainWindow::~MainWindow()
{
    delete ui;
    delete doctorWidget;
    delete patientWidget;
    delete enrollWidget;
    delete client;
}

void MainWindow::on_doctorPre_pressed()
{
    client->shareValue->identity=1;
}

void MainWindow::on_patientPre_pressed()
{
    client->shareValue->identity=0;
}


void MainWindow::on_LoginBtn_clicked()
{
    qDebug()<<"Login";
    QString Username = ui->username->text();
    QString Password = ui->password->text();

    if(Username.isEmpty()||Password.isEmpty())
    {
        QMessageBox::warning(NULL, "错误❌", "输入有误，请重新输入！", QMessageBox::Yes);
    }
    else if(client->shareValue->identity!=0&&client->shareValue->identity!=1){
        QMessageBox::warning(NULL, "错误❌", "请您选择自己的身份信息！", QMessageBox::Yes);
    }
    else
    {
        client->tryconnect();
        QJsonObject userlogin;
        userlogin.insert("CMD","A00000");

        QJsonObject Args;
        Args.insert("Identity",client->shareValue->identity);
        Args.insert("UserID",Username.toLongLong());
        Args.insert("Password",Password);

        userlogin.insert("Args",Args);

        //发送数据包
        client->sendCommand(userlogin);
        //获取客户端返回结果
        client->shareValue->sharedsocket->waitForReadyRead(3000);
        QJsonObject ReturnPack = client->RecvJson;

        QMessageBox::information(NULL,"提示",ReturnPack.value("Result").toString(),QMessageBox::Yes);

        if(ReturnPack.value("Result").toString().contains("成功")){
            this->hide();
            if(client->shareValue->identity)
                doctorWidget->show();
            else
                patientWidget->show();
        }
        client->shareValue->sharedsocket->disconnectFromHost();
    }
}

void MainWindow::on_enrollBtn_clicked()
{
    this->hide();
    enrollWidget->show();
}

//void MainWindow::on_Logout_clicked()
//{
//    this->close();
//}

