#ifndef PATIENTINFOR_H
#define PATIENTINFOR_H

#include <QWidget>

namespace Ui {
class patientinfor;
}

class patientinfor : public QWidget
{
    Q_OBJECT

public:
    explicit patientinfor(QWidget *parent = nullptr);
    ~patientinfor();

private slots:
    void on_exit_clicked();

    void on_save_clicked();

private:
    Ui::patientinfor *ui;
};

#endif // PATIENTINFOR_H
