#ifndef DOCTORSEEREGISTER_H
#define DOCTORSEEREGISTER_H

#include <QWidget>

namespace Ui {
class doctorseeregister;
}

class doctorseeregister : public QWidget
{
    Q_OBJECT

public:
    explicit doctorseeregister(QWidget *parent = nullptr);
    ~doctorseeregister();

private slots:
    void on_exit_clicked();

    void on_save_2_clicked();
    
private:
    Ui::doctorseeregister *ui;
};

#endif // DOCTORSEEREGISTER_H
