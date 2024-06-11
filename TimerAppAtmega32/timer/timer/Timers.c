/*
 * Timers.c
 *
 * Created: 6/10/2022 9:06:05 AM
 *  Author: Abdulrhman Nasser
 */
#include <avr/io.h>
#include "std_macros.h"
#include <avr/interrupt.h>
void vInit_Timer0_NormalMode()
{
	CLR_BIT(TCCR0,WGM01);
	CLR_BIT(TCCR0,WGM00); //Choose Normal mode
	SET_BIT(TCCR0,CS00);
	CLR_BIT(TCCR0,CS01);
	SET_BIT(TCCR0,CS02); //Set prescaler to /1024
	sei();
	SET_BIT(TIMSK,TOIE0); //Enable interrupt
	TCNT0=156; //Preload value
}
void vInit_Timer0_CTC()
{
	SET_BIT(TCCR0,WGM01);
	CLR_BIT(TCCR0,WGM00); //Choose CTC
	SET_BIT(TCCR0,CS00);
	CLR_BIT(TCCR0,CS01);
	SET_BIT(TCCR0,CS02); //Set prescaler to /1024
	sei();
	SET_BIT(TIMSK,OCIE0); //Enable interrupt
	OCR0=10; //Compare value (156 is reached every 0.00128 sec)
	//Time of each tick = prescaler/Clock of mp
	//value=time needed/Time of each tick
}
void Timer0_NonPWM_wave()
{
    SET_BIT(DDRB,3); //you have to set  OC0 pin (PB3) as output pin to be able to generate a wave on this pin .
    SET_BIT(TCCR0,WGM01);
	CLR_BIT(TCCR0,WGM00); //Choose CTC
	SET_BIT(TCCR0,CS00);
	CLR_BIT(TCCR0,CS01);
	SET_BIT(TCCR0,CS02); //Set prescaler to /1024
	OCR0=156; //Compare value
    SET_BIT(TCCR0,COM00); // Toggle mode


}
void Timer0_fastPWM_wave()
{
    SET_BIT(DDRB,3); //you have to set  OC0 pin (PB3) as output pin to be able to generate a wave on this pin .
    SET_BIT(TCCR0,WGM01);
	SET_BIT(TCCR0,WGM00); //Choose fast pwm
	SET_BIT(TCCR0,CS00);
	CLR_BIT(TCCR0,CS01);
	SET_BIT(TCCR0,CS02); //Set prescaler to /1024
	OCR0=192; //Compare value (75 % duty cycle)
    SET_BIT(TCCR0,COM01); // non inverting mode (The higher the OCR0 the higher the duty cycle)

}
void Timer0_pashcorrectPWM_wave()
{
	SET_BIT(DDRB,3); //you have to set  OC0 pin (PB3) as output pin to be able to generate a wave on this pin.
	CLR_BIT(TCCR0,WGM01);
	SET_BIT(TCCR0,WGM00); //Choose phase correct
	SET_BIT(TCCR0,CS00);
	CLR_BIT(TCCR0,CS01);
	SET_BIT(TCCR0,CS02); //Set prescaler to /1024
	OCR0=192; //Compare value
	SET_BIT(TCCR0,COM01);
}

void vInit_Timer2_NormalMode()
{
	CLR_BIT(TCCR2,WGM21);
	CLR_BIT(TCCR2,WGM20); //Choose Normal mode
	SET_BIT(TCCR2,CS22);
	CLR_BIT(TCCR2,CS21);
	SET_BIT(TCCR2,CS20); //Set prescaler to /1024
	SET_BIT(ASSR,AS2);//Now clock is coming from PB6 PB7
	sei();
	SET_BIT(TIMSK,TOIE2); //Enable interrupt
	TCNT2=0; //Preload value
}
void Timer1A_fastPWM_wave(double value)
{
	SET_BIT(DDRD,5); //you have to set  OC0 pin (PB3) as output pin to be able to generate a wave on this pin .
	SET_BIT(TCCR1A,WGM11);
	SET_BIT(TCCR1B,WGM13);
	SET_BIT(TCCR1B,WGM12); //Choose fast pwm
	SET_BIT(TCCR1B,CS10); //No prescaler
	OCR1A=value*8000; //If the cpu clock is 1Mhz then OCR1A = 1000 means 1 ms
	ICR1=19999; //Periodic time of the wave
	SET_BIT(TCCR1A,COM1A1); // non inverting mode (The higher the OCR0 the higher the duty cycle)

}
void Timer1B_fastPWM_wave(double value)
{
	SET_BIT(DDRD,4); //you have to set  OC0 pin (PB3) as output pin to be able to generate a wave on this pin .
	SET_BIT(TCCR1A,WGM11);
	SET_BIT(TCCR1B,WGM13);
	SET_BIT(TCCR1B,WGM12); //Choose fast pwm
	SET_BIT(TCCR1B,CS10); //No prescaler
	OCR1B=value*1000; //If the cpu clock is 1Mhz then OCR1A = 1000 means 1 ms
	ICR1=19999; //Periodic time of the wave
	SET_BIT(TCCR1A,COM1B1); // non inverting mode (The higher the OCR0 the higher the duty cycle)

}