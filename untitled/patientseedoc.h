#ifndef PATIENTSEEDOC_H
#define PATIENTSEEDOC_H

#include <QWidget>

namespace Ui {
class patientseedoc;
}

class patientseedoc : public QWidget
{
    Q_OBJECT

public:
    explicit patientseedoc(QWidget *parent = nullptr);
    ~patientseedoc();

private slots:
    void on_exit_clicked();

    void on_save_clicked();

private:
    Ui::patientseedoc *ui;
};

#endif // PATIENTSEEDOC_H
