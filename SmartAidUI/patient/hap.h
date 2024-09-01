#ifndef HAP_H
#define HAP_H

#include <QDebug>
#include <QDesktopWidget>
#include <QMainWindow>
#include <QMessageBox>
#include <QMovie>
#include <QWidget>
#include <istream>

#include "./lib/socketClient.h"


namespace Ui
{
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

#endif  // HAP_H
