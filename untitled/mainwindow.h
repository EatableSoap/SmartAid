#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QMovie>
#include <enroll.h>
#include <doctor.h>
#include <patient.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Login_clicked();

    void on_enroll_clicked();

    void on_Doctor_pressed();

    void on_patient_pressed();

    void on_Logout_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
