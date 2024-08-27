#include "patientdpcp.h"
#include "ui_patientdpcp.h"
#include "doctor.h"
#include "patient.h"
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include <QDesktopWidget>
#include<qtmaterialflatbutton_internal.h>
using namespace Material;



patientDPCP::patientDPCP(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::patientDPCP)
{
    ui->setupUi(this);
    QDesktopWidget *deskdop=QApplication::desktop();
    move((deskdop->width()-this->width())/2, (deskdop->height()-this->height())/2);
}

patientDPCP::~patientDPCP()
{
    delete ui;
}

void patientDPCP::on_exit_clicked()
{
    patient *pic = new patient();
    pic->show();
}
