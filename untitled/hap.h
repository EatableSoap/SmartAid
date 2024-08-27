#ifndef HAP_H
#define HAP_H

#include <QWidget>

namespace Ui {
class HAP;
}

class HAP : public QWidget
{
    Q_OBJECT

public:
    explicit HAP(QWidget *parent = nullptr);
    ~HAP();

private slots:


    void on_putin_clicked();

    void on_exit_clicked();

private:
    Ui::HAP *ui;
};

#endif // HAP_H
