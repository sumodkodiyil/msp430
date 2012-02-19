#include<msp430.h>
void delay()
{
	unsigned int i = 0;
	while(++i < 30000);
}
main()
{
	TACTL = TASSEL_2 | MC_2 | ID_3;
	P1DIR = BIT0;
	P1OUT = BIT0;
	P1DIR = BIT6;
	P1OUT = BIT6;
	while(1)
	{
		while((TACTL & TAIFG) == 0);
		TACTL &= ~TAIFG;
		P1DIR=BIT0;
		P1OUT ^= BIT0;
		delay();
		P1DIR=BIT6;
		P1OUT ^= BIT6;
	}
}

