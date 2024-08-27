#ifndef DPCHAT_H
#define DPCHAT_H

#include <QWidget>

namespace Ui {
class dpchat;
}

class dpchat : public QWidget
{
    Q_OBJECT

public:
    explicit dpchat(QWidget *parent = nullptr);
    ~dpchat();

private slots:
    void on_emo_clicked();

    void on_exit_clicked();

private:
    Ui::dpchat *ui;
};

#endif // DPCHAT_H
