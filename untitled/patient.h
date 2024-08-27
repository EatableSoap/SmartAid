#ifndef PATIENT_H
#define PATIENT_H

#include <QWidget>

namespace Ui {
class patient;
}

class patient : public QWidget
{
    Q_OBJECT

public:
    explicit patient(QWidget *parent = nullptr);
    ~patient();

private slots:


    void on_HAP_clicked();

    void on_selfinformation_clicked();

    void on_Register_clicked();

    void on_Viewcases_clicked();

    void on_seeinformation_clicked();

    void on_DPCP_clicked();

    void on_PAP_clicked();

private:
    Ui::patient *ui;
};

#endif // PATIENT_H
