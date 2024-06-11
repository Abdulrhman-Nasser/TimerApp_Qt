#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QThread>
#include <QRunnable>
class Timer : public QObject,public QRunnable
{
    Q_OBJECT
private:
    void Start_Timer();
    qint32 time;
public:
    explicit Timer(QObject *parent = nullptr);
    void setTime(qint32);

signals:
    void SendLcd(qint32);
    void ActivateBuzzer();
    void setDial(qint32);

    // QRunnable interface
public:
    void run();
};

#endif // TIMER_H
