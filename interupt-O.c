#include<msp430.h>

volatile int count=0;

__attribute__((interrupt(TIMERA1_VECTOR)))

timer_isr()
{	count++;	
	TACTL &= ~TAIFG;
	
}

void main()
{	P1OUT=0;
	P1DIR=BIT0;
	TACTL = TASSEL_2 | ID_3 | MC_2 | TAIE;
	__enable_interrupt();
	while(count<5);
	P1OUT=BIT0;
}
