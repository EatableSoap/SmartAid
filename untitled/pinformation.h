#ifndef PINFORMATION_H
#define PINFORMATION_H

#include <QWidget>

namespace Ui {
class pinformation;
}

class pinformation : public QWidget
{
    Q_OBJECT

public:
    explicit pinformation(QWidget *parent = nullptr);
    ~pinformation();

private:
    Ui::pinformation *ui;
};

#endif // PINFORMATION_H
