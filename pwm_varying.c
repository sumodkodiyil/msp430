#include<msp430.h>

void delay(int n)
{	while(n)
		n--;
}

void main()
{	int i;	
	while(1)
	{	P1DIR=1;
		for(i=0;i<500;i++)
		{	P1OUT=1;
			delay(i);
			P1OUT=0;
			delay(500-i);
		}
		for(;i>0;i--)
		{	P1OUT=1;
			delay(i);
			P1OUT=0;
			delay(500-i);
		}
	}
}
