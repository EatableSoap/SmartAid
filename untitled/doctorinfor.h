#ifndef DOCTORINFOR_H
#define DOCTORINFOR_H

#include <QWidget>

namespace Ui {
class doctorinfor;
}

class doctorinfor : public QWidget
{
    Q_OBJECT

public:
    explicit doctorinfor(QWidget *parent = nullptr);
    ~doctorinfor();

private slots:
    void on_out_clicked();

    void on_save_clicked();

private:
    Ui::doctorinfor *ui;
};

#endif // DOCTORINFOR_H
