#ifndef DOCTORDPCP_H
#define DOCTORDPCP_H

#include <QWidget>

namespace Ui {
class doctorDPCP;
}

class doctorDPCP : public QWidget
{
    Q_OBJECT

public:
    explicit doctorDPCP(QWidget *parent = nullptr);
    ~doctorDPCP();

private slots:
    void on_exit_clicked();

private:
    Ui::doctorDPCP *ui;
};

#endif // DOCTORDPCP_H
