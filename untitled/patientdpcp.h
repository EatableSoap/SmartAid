#ifndef PATIENTDPCP_H
#define PATIENTDPCP_H

#include <QWidget>

namespace Ui {
class patientDPCP;
}

class patientDPCP : public QWidget
{
    Q_OBJECT

public:
    explicit patientDPCP(QWidget *parent = nullptr);
    ~patientDPCP();

private slots:
    void on_exit_clicked();


private:
    Ui::patientDPCP *ui;
};

#endif // PATIENTDPCP_H
