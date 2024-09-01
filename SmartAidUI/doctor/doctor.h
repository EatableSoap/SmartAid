#ifndef DOCTOR_H
#define DOCTOR_H

#include <QtWidgets>

#include "../Incommon/chatdialog.h"
#include "doctorcase.h"
#include "doctorinfor.h"
#include "doctorseeregister.h"


namespace Ui
{
class Doctor;
}

class Doctor : public QDialog
{
    Q_OBJECT

   signals:
    void switchToLast();

   public:
    socketClient *client;
    explicit Doctor(QWidget *parent = nullptr);
    ~Doctor();

   private slots:
    void on_selfinformation_clicked();

    void on_Case_clicked();

    void on_seeregister_clicked();

    void on_DPCP_clicked();

    void onExit();

    void on_exit_clicked();

   private:
    Ui::Doctor        *ui;
    doctorinfor       *doctorinforWidget;
    doctorcase        *doctorcaseWidget;
    doctorseeregister *doctorseeregisterWidget;
    ChatDialog        *chatdiagWidget;
};

#endif  // DOCTOR_H
