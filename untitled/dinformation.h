#ifndef DINFORMATION_H
#define DINFORMATION_H

#include <QWidget>

namespace Ui {
class dinformation;
}

class dinformation : public QWidget
{
    Q_OBJECT

public:
    explicit dinformation(QWidget *parent = nullptr);
    ~dinformation();

private slots:


    void on_Out_clicked();

private:
    Ui::dinformation *ui;
};

#endif // DINFORMATION_H
