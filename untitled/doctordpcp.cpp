#include "doctordpcp.h"
#include "ui_doctordpcp.h"
#include "doctor.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include<qdesktopwidget.h>
using namespace Material;


doctorDPCP::doctorDPCP(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::doctorDPCP)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
}

doctorDPCP::~doctorDPCP()
{
    delete ui;
}

void doctorDPCP::on_exit_clicked()
{
    Doctor *pic = new Doctor();
    pic->show();
}
