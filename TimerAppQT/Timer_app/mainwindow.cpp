#include "mainwindow.h"
#include "ui_mainwindow.h"
bool flag=true;
bool start = true;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    position=0;
    pool.setMaxThreadCount(1);
    connect(&timer,&Timer::SendLcd,this,&MainWindow::ReceiveLCD);
    connect(&timer,&Timer::setDial,this,&MainWindow::setDial);
    connect(this,&MainWindow::sendData,&serial,&Serial::sendSerial);
    connect(&timer,&Timer::ActivateBuzzer,this,&MainWindow::Buzzer);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_dial_sliderMoved(int position)
{
    if(flag)
    {
        ui->lcdNumber->display(position);
        this->position = position;
    }

}

void MainWindow::ReceiveLCD(qint32 data)
{
    ui->lcdNumber->display(data);
}

void MainWindow::setDial(qint32 i)
{
    ui->dial->setValue(i);
}

void MainWindow::Buzzer()
{
    emit sendData("B");
}


void MainWindow::on_pb_start_clicked()
{
    if(flag)
    {
        flag=false;
        timer.setTime(position);
        pool.start(&timer);

    }
}


void MainWindow::on_pb_stop_clicked()
{
    if(pool.activeThreadCount())
        start = false;
}


void MainWindow::on_pb_red_clicked()
{
    emit sendData("r");
}


void MainWindow::on_pb_green_clicked()
{
    emit sendData("g");
}


void MainWindow::on_pb_blue_clicked()
{
    emit sendData("b");
}


void MainWindow::on_pb_on_clicked()
{
    emit sendData("o");
}


void MainWindow::on_pb_off_clicked()
{
    emit sendData("f");
}

