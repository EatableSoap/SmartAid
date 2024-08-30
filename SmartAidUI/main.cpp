#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
//    return 0;
    //    QDesktopWidget *desktop = QApplication::desktop();
    //    w.move((desktop->width() - w.width())/ 2, (desktop->height() - w.height()) /2);
    //    w.setWindowFlag(Qt::FramelessWindowHint); //设置无边框属性
    //    w.setAttribute(Qt::WA_TranslucentBackground);
    //    w.show();
    //    return a.exec();
}
