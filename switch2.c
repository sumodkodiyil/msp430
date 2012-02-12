#include<msp430.h>

void main()

{	int n;
	do
	{	P1DIR=0;
		n=(P1IN>>3|0);
		if(n==0)
		{	P1DIR=1;
			P1OUT=0;
		}
		else
		{	P1DIR=1;
			P1OUT=1;
		}
	}while(1);
}
		
		
