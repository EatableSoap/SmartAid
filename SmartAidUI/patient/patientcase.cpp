#include "patientcase.h"

#include "ui_patientcase.h"


patientcase::patientcase(QWidget *parent)
    : QWidget(parent), ui(new Ui::patientcase)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop = QApplication::desktop();
    move((deskdop->width() - this->width()) / 2,
         (deskdop->height() - this->height()) / 2);
    connect(ui->exit, &QPushButton::clicked, this, &patientcase::onExit);
    //    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    //    btn->setForegroundColor(QColor(153,50,204));
    //    btn->setGeometry(80,0,800,50);
    //    btn->setText("查看病例");
    //    btn->applyPreset(Material::FlatPreset);
    //    QFont font;
    //    font.setFamily("Calibri Light");
    //    font.setPixelSize(30);
    //    btn->setFont(font);
    client = new socketClient("10.171.147.10", 1234);
}

patientcase::~patientcase()
{
    delete ui;
    delete client;
    ;
}

void patientcase::onExit()
{
    emit switchToLast();
    this->hide();
}
