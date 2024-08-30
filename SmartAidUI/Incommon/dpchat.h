#ifndef DPCHAT_H
#define DPCHAT_H

#include "./lib/socketClient.h"

#include <QFileDialog>
#include <QWidget>
#include <QHostAddress>
#include <QDesktopWidget>
#include <QPushButton>
#include <QIcon>
#include <QString>

namespace Ui {
class dpchat;
}

class dpchat : public QWidget
{
    Q_OBJECT

signals:
    void switchToLast();

public:
    socketClient *client;
    explicit dpchat(QWidget *parent = nullptr);
    ~dpchat();

private slots:
    void onExit();

    void on_file_clicked();

    void on_send_clicked();

private:
    Ui::dpchat *ui;

};

#endif // DPCHAT_H
