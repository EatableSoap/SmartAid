#ifndef ENROLL_H
#define ENROLL_H

#include <QDialog>

namespace Ui {
class Enroll;
}

class Enroll : public QDialog
{
    Q_OBJECT

public:
    explicit Enroll(QWidget *parent = nullptr);
    ~Enroll();

private slots:
    void on_out_clicked();

    void on_enroll_clicked();

    void on_password2_textEdited(const QString &arg1);

private:
    Ui::Enroll *ui;
};

#endif // ENROLL_H
