#ifndef ENROLL_H
#define ENROLL_H

#include "./lib/socketClient.h"

#include <QDialog>
#include <istream>
#include <QLabel>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QPixmap>
#include <QDesktopWidget>
#include <QRegExpValidator>

namespace Ui {
class Enroll;
}

class Enroll : public QDialog
{
    Q_OBJECT

signals:
    void switchToLast();

public:
    socketClient *client;
    explicit Enroll(QWidget *parent = nullptr);
    ~Enroll();

private slots:

    void on_enroll_clicked();

    void on_password2_textEdited();

    void on_choose_clicked();

    void onExit();

private:
    Ui::Enroll *ui;
};

#endif // ENROLL_H
