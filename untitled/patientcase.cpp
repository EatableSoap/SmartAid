#include "patientcase.h"
#include "ui_patientcase.h"
#include "patient.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include <QDesktopWidget>
#include<qtmaterialflatbutton_internal.h>
using namespace Material;


patientcase::patientcase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::patientcase)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
    QtMaterialFlatButton *btn=new QtMaterialFlatButton(this);
    btn->setForegroundColor(QColor(153,50,204));
    btn->setGeometry(80,0,800,50);
    btn->setText("查看病例");
    btn->applyPreset(Material::FlatPreset);
    QFont font;
    font.setFamily("Calibri Light");
    font.setPixelSize(30);
    btn->setFont(font);
}

patientcase::~patientcase()
{
    delete ui;
}

void patientcase::on_exit_clicked()
{
    patient *pic = new patient();
    pic->show();
}
