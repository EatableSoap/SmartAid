#ifndef DOCTORSEEREGISTER_H
#define DOCTORSEEREGISTER_H

#include "./lib/socketClient.h"

#include <QWidget>
#include <istream>
#include <QDesktopWidget>

namespace Ui {
class doctorseeregister;
}

class doctorseeregister : public QWidget
{
    Q_OBJECT

signals:
    void switchToLast();

public:
    socketClient *client;
    explicit doctorseeregister(QWidget *parent = nullptr);
    ~doctorseeregister();

private slots:
    void onExit();
    
    void on_save_clicked();

private:
    Ui::doctorseeregister *ui;
};

#endif // DOCTORSEEREGISTER_H
