#ifndef HAP_H
#define HAP_H

#include "./lib/socketClient.h"

#include <QWidget>
#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QMovie>
#include <istream>
#include <QDesktopWidget>

namespace Ui {
class HAP;
}

class HAP : public QWidget
{
    Q_OBJECT

signals:
    void switchToLast();

public:
    socketClient *client;
    explicit HAP(QWidget *parent = nullptr);
    ~HAP();

private slots:


    void on_putin_clicked();

    void onExit();

private:
    Ui::HAP *ui;
};

#endif // HAP_H
