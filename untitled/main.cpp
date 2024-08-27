#include "mainwindow.h"
#include <QMainWindow>
#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QMovie>
#include <enroll.h>
#include <doctor.h>
#include <patient.h>
#include <QApplication>
#include <istream>
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include "framelessWidget.h"
#include <QDesktopWidget>
using namespace Material;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    framelessWidget w;
    QDesktopWidget *desktop = QApplication::desktop();
    w.move((desktop->width() - w.width())/ 2, (desktop->height() - w.height()) /2);
    w.setWindowFlag(Qt::FramelessWindowHint); //设置无边框属性
    w.setAttribute(Qt::WA_TranslucentBackground);
    w.show();
    return a.exec();
}
