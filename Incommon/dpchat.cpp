#include "dpchat.h"
#include "ui_dpchat.h"


dpchat::dpchat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dpchat)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    QString filePath = ":/pitcure/room.png";//图标位置自行调整
    QIcon icon = QIcon(filePath);
    QPixmap m_pic = icon.pixmap(icon.actualSize(QSize(45, 45)));//size自行调整
    ui->address->setPixmap(m_pic);
    connect(ui->exit,&QPushButton::clicked,this,&dpchat::onExit);
//    client = new Client("10.171.147.10",1234);
}

dpchat::~dpchat()
{
    delete ui;
    delete client;
}

void dpchat::onExit()
{
    emit switchToLast();
    this->hide();
}


void dpchat::on_file_clicked()
{

}

void dpchat::on_send_clicked()
{
    QString mess = ui->sendmess->text();
    if (!mess.isEmpty()) {
        // 获取 chattext 中现有的文本
        QString existingText = ui->chattext->toPlainText();
        // 将新消息添加到现有文本中，标注发送者，并添加换行符
        QString newText = existingText + "\n我: " + mess;
        // 更新 chattext 的内容
        ui->chattext->setPlainText(newText);
        // 清空输入框
        ui->sendmess->clear();
    }
}
