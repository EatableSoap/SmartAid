#ifndef ENROLL_H
#define ENROLL_H

#include <QDateTime>
#include <QDesktopWidget>
#include <QDialog>
#include <QFileDialog>
#include <QLabel>
#include <QMessageBox>
#include <QPixmap>
#include <QRegExpValidator>
#include <QVBoxLayout>
#include <istream>

#include "./lib/socketClient.h"


namespace Ui
{
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

    void on_choose1_clicked();

    void on_choose2_clicked();

   private:
    Ui::Enroll *ui;
};

#endif  // ENROLL_H
