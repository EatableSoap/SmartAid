#ifndef PATIENTPAP_H
#define PATIENTPAP_H

#include <QWidget>

namespace Ui {
class patientPAP;
}

class patientPAP : public QWidget
{
    Q_OBJECT

public:
    explicit patientPAP(QWidget *parent = nullptr);
    ~patientPAP();

private slots:
    void on_exit_clicked();

private:
    Ui::patientPAP *ui;
};

#endif // PATIENTPAP_H
