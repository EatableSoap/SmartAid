#ifndef PATIENTREGISTER_H
#define PATIENTREGISTER_H

#include <QWidget>

namespace Ui {
class patientRegister;
}

class patientRegister : public QWidget
{
    Q_OBJECT

public:
    explicit patientRegister(QWidget *parent = nullptr);
    ~patientRegister();

private slots:
    void on_exit_clicked();

private:
    Ui::patientRegister *ui;
};

#endif // PATIENTREGISTER_H
