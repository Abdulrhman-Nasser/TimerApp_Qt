#include "timer.h"
extern bool flag;
extern bool start;
void Timer::Start_Timer()
{
    for(qint32 i=time;i>0;i--)
    {
        if(start)
        {
            emit SendLcd(i);
            emit setDial(i);
            QThread::sleep(1);
        }
        else
            break;
    }
    emit SendLcd(0);
    emit setDial(0);
    if(start)
        emit ActivateBuzzer();
    flag=true;
    start =true;

}

Timer::Timer(QObject *parent)
    : QObject{parent}
{
    time=0;
    QRunnable::setAutoDelete(false);
}

void Timer::setTime(qint32 t)
{
    time = t;
}

void Timer::run()
{
    Start_Timer();
}
