#ifndef DOCTORCASE_H
#define DOCTORCASE_H

#include <QWidget>

namespace Ui {
class doctorcase;
}

class doctorcase : public QWidget
{
    Q_OBJECT

public:
    explicit doctorcase(QWidget *parent = nullptr);
    ~doctorcase();

private slots:


    void on_exit_clicked();

    void on_save_clicked();

private:
    Ui::doctorcase *ui;
};

#endif // DOCTORCASE_H
