#ifndef PATIENT_H
#define PATIENT_H

#include "../Incommon/chatdialog.h"
#include "hap.h"
#include "patientcase.h"
#include "patientinfor.h"
#include "patientregister.h"
#include "patientseedoc.h"


namespace Ui
{
class patient;
}

class patient : public QWidget
{
    Q_OBJECT

   public:
    socketClient *client;
    explicit patient(QWidget *parent = nullptr);
    ~patient();

   signals:
    void switchToLast();

   private slots:

    void on_HAP_clicked();

    void on_selfinformation_clicked();

    void on_Register_clicked();

    void on_Viewcases_clicked();

    void on_seeinformation_clicked();

    void on_DPCP1_clicked();

    void onExit();

   private:
    Ui::patient     *ui;
    HAP             *hapWidget;
    patientcase     *patientcaseWidget;
    patientinfor    *patientinforWidget;
    patientseedoc   *patientseedocWidget;
    patientRegister *patientRegisterWidget;
    ChatDialog      *chatdiagWidget;
};

#endif  // PATIENT_H
