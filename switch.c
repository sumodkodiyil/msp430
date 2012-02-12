#include<msp430.h>

void main()
{	int n;
	P1DIR=0;
	do
	{	n=(P1IN>>3|0);
		if(n==0)
			break;
	}while(1);

	P1DIR=1;
	P1OUT=1;
}
	
	
