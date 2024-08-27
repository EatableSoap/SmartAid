#include "people.h"
#include "ui_people.h" // 包含生成的头文件

People::People(QWidget *parent):
    QWidget(parent),
    ui(new Ui::People)
{
    ui->setupUi(this);
}

People::~People() {
    delete ui;
}
