#ifndef PATIENTCASE_H
#define PATIENTCASE_H

#include <QDesktopWidget>
#include <QWidget>
#include <istream>

#include "./lib/socketClient.h"


namespace Ui
{
class patientcase;
}

class patientcase : public QWidget
{
    Q_OBJECT

   signals:
    void switchToLast();

   public:
    socketClient *client;
    explicit patientcase(QWidget *parent = nullptr);
    ~patientcase();

   private slots:
    void onExit();

   private:
    Ui::patientcase *ui;
};

#endif  // PATIENTCASE_H
