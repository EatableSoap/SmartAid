#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include <QMovie>

#include "./Incommon/enroll.h"
#include "./doctor/doctor.h"
#include "./lib/socketClient.h"
#include "./patient/patient.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

   public:
    MainWindow(QWidget *parent = nullptr);
    socketClient *client;
    ~MainWindow();

   private slots:
    void on_LoginBtn_clicked();

    void on_enrollBtn_clicked();

    void on_doctorPre_pressed();

    void on_patientPre_pressed();

   private:
    Ui::MainWindow *ui;
    Doctor         *doctorWidget;
    patient        *patientWidget;
    Enroll         *enrollWidget;
};
#endif  // MAINWINDOW_H
