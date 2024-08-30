#ifndef PATIENTSEEDOC_H
#define PATIENTSEEDOC_H

#include "lib/socketClient.h"

#include <QWidget>
#include <istream>
#include <QDesktopWidget>

namespace Ui {
class patientseedoc;
}

class patientseedoc : public QWidget
{
    Q_OBJECT

signals:
    void switchToLast();

public:
    socketClient *client;
    explicit patientseedoc(QWidget *parent = nullptr);
    ~patientseedoc();

private slots:
    void onExit();

    void on_save_clicked();

private:
    Ui::patientseedoc *ui;
};

#endif // PATIENTSEEDOC_H
