#ifndef PATIENTREGISTER_H
#define PATIENTREGISTER_H

#include "./lib/socketClient.h"

#include <QWidget>
#include <istream>
#include <QDesktopWidget>

namespace Ui {
class patientRegister;
}

class patientRegister : public QWidget
{
    Q_OBJECT

signals:
    void switchToLast();

public:
    socketClient *client;
    explicit patientRegister(QWidget *parent = nullptr);
    ~patientRegister();

private slots:
    void onExit();

private:
    Ui::patientRegister *ui;
};

#endif // PATIENTREGISTER_H
