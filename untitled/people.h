#ifndef PEOPLE_H
#define PEOPLE_H

#include <QWidget>

namespace Ui {
    class People; // 前向声明
}

class People : public QWidget {
    Q_OBJECT

public:
    explicit People(QWidget *parent = nullptr);
    ~People();

private:
    Ui::People *ui; // 指向 UI 类的指针
};

#endif // PEOPLE_H
