#include "pinformation.h"
#include "ui_pinformation.h"

pinformation::pinformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pinformation)
{
    ui->setupUi(this);
}

pinformation::~pinformation()
{
    delete ui;
}
