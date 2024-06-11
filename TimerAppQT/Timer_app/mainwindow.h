#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <timer.h>
#include <serial.h>
#include <QThreadPool>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_dial_sliderMoved(int position);
    void on_pb_start_clicked();

    void on_pb_stop_clicked();

    void on_pb_red_clicked();

    void on_pb_green_clicked();

    void on_pb_blue_clicked();

    void on_pb_on_clicked();

    void on_pb_off_clicked();

public slots:
    void ReceiveLCD(qint32);
    void setDial(qint32);
    void Buzzer();

signals:
    void sendData(QByteArray);

private:
    Ui::MainWindow *ui;
    Timer timer;
    QThreadPool pool;
    qint32 position;
    Serial serial;
};
#endif // MAINWINDOW_H
