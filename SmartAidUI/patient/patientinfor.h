#ifndef PATIENTINFOR_H
#define PATIENTINFOR_H

#include "./lib/socketClient.h"

#include <QWidget>
#include <istream>
#include <QDesktopWidget>

namespace Ui {
class patientinfor;
}

class patientinfor : public QWidget
{
    Q_OBJECT

signals:
    void switchToLast();

public:
    socketClient *client;
    explicit patientinfor(QWidget *parent = nullptr);
    ~patientinfor();

private slots:
    void onExit();

    void on_save_clicked();

private:
    Ui::patientinfor *ui;
};

#endif // PATIENTINFOR_H
