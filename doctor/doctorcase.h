#ifndef DOCTORCASE_H
#define DOCTORCASE_H

#include "lib/socketClient.h"

#include <istream>
#include <QWidget>
#include <QDesktopWidget>

namespace Ui {
class doctorcase;
}

class doctorcase : public QWidget
{
    Q_OBJECT

signals:
    void switchToLast();

public:
    socketClient *client;
    explicit doctorcase(QWidget *parent = nullptr);
    ~doctorcase();

private slots:


    void onExit();

    void on_save_clicked();

private:
    Ui::doctorcase *ui;
};

#endif // DOCTORCASE_H
