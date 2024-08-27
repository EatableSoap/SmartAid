#ifndef DOCTOR_H
#define DOCTOR_H

#include <QDialog>

namespace Ui {
class Doctor;
}

class Doctor : public QDialog
{
    Q_OBJECT

public:
    explicit Doctor(QWidget *parent = nullptr);
    ~Doctor();

private slots:
    void on_selfinformation_clicked();

    void on_Case_clicked();

    void on_PAP_clicked();

    void on_seeregister_clicked();

    void on_DPCP_clicked();

private:
    Ui::Doctor *ui;
};

#endif // DOCTOR_H
