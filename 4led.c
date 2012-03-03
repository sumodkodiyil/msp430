#include<msp430.h>

void delay()
{	int i=0;
	for(;i<30000;i++);
}
void main()
{	int LED=1;
	P1DIR=15;
	P1OUT=0;	
	while(1)
	{	P1OUT=LED;
		delay();
		LED <<= 1;
		if(LED==16)
			LED = 1;
		
		
	}
}
		
		
