/*
 * timer.c
 *
 * Created: 6/2/2024 1:30:36 PM
 * Author : Sector B5
 */ 

#include <avr/io.h>
#define F_CPU 8000000
#include <avr/interrupt.h>
#include <util/delay.h>
#include "LED.h"
#include "Timers.h"
#include "USART.h"
#include "std_macros.h"
#define  red	'a',0
#define blue	'a',1
#define green	'a',2
#define buzzer	'a',3
static unsigned int counter=0;


int main(void)
{
    /* Replace with your application code */
	LED_vInit(red);
	LED_vInit(blue);
	LED_vInit(green);
	LED_vInit(buzzer);
	UART_vInit(9600);
	
    while (1) 
    {
		char x = UART_u8ReceiveData();
		switch (x)
		{
			case 'r':
				LED_vTurnOn(red);
				break;
			case 'b':
				LED_vTurnOn(blue);
				break;
			case 'g':
				LED_vTurnOn(green);
				break;
			case 'o':
				LED_vTurnOn(red);
				LED_vTurnOn(green);
				LED_vTurnOn(blue);
				break;
			case 'f':
				LED_vTurnOff(red);
				LED_vTurnOff(green);
				LED_vTurnOff(blue);
				break;
			case 'B':
				LED_vTurnOn(buzzer);					
				vInit_Timer0_NormalMode();
				break;
		}
    }
}

ISR(TIMER0_OVF_vect)
{
	counter++;
	if(counter==50)
	{
		LED_vTurnOff(buzzer);
		counter =0;
		CLR_BIT(TIMSK,TOIE0);
	}
}
