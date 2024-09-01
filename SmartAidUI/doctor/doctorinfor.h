#ifndef DOCTORINFOR_H
#define DOCTORINFOR_H

#include <QDesktopWidget>
#include <QWidget>
#include <istream>

#include "lib/socketClient.h"


namespace Ui
{
class doctorinfor;
}

class doctorinfor : public QWidget
{
    Q_OBJECT

   signals:
    void switchToLast();

   public:
    socketClient *client;
    explicit doctorinfor(QWidget *parent = nullptr);
    ~doctorinfor();

   private slots:
    void onExit();

    void on_save_clicked();

   private:
    Ui::doctorinfor *ui;
};

#endif  // DOCTORINFOR_H
