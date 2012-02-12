#include<msp430.h>

void main()
{	P1DIR=1;
	P1OUT=1;
	TACTL |=BIT9;
	TACTL &=~BIT8;
	TACTL &=~BIT6;
	TACTL &=~BIT7;
	TACTL |=BIT5;
	TACTL &=~BIT4;
	while(1)
	{	while(!(TACTL&BIT0));
		TACTL &=~BIT0;
		P1OUT ^=BIT0;
	}
}

