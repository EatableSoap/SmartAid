#ifndef DOCTORPAP_H
#define DOCTORPAP_H

#include <QWidget>

namespace Ui {
class doctorPAP;
}

class doctorPAP : public QWidget
{
    Q_OBJECT

public:
    explicit doctorPAP(QWidget *parent = nullptr);
    ~doctorPAP();

private slots:
    void on_exit_clicked();

    void on_save_clicked();

private:
    Ui::doctorPAP *ui;
};

#endif // DOCTORPAP_H
