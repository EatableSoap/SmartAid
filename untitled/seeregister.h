#ifndef SEEREGISTER_H
#define SEEREGISTER_H

#include <QWidget>

namespace Ui {
class seeregister;
}

class seeregister : public QWidget
{
    Q_OBJECT

public:
    explicit seeregister(QWidget *parent = nullptr);
    ~seeregister();

private:
    Ui::seeregister *ui;
};

#endif // SEEREGISTER_H
