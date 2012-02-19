#include<msp430.h>

__attribute__((interrupt(TIMERA1_VECTOR)))

timer_isr()
{	P1OUT ^= BIT0;	
	TACTL &= ~TAIFG;
	
}

void main()
{	
	P1DIR=BIT0;
	TACTL = TASSEL_2 | ID_3 | MC_2 | TAIE;
	__enable_interrupt();
	while(1);
}
