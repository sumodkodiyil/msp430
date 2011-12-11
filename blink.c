#include<msp430.h>

main()
{	long int i;
	label:
	for(i=0;i<10000;i++)
	{	P1DIR=1;
		P1OUT=1;
	}
	for(i=0;i<10000;i++)
	{	P1DIR=1;
		P1OUT=0;
	}
        for(i=0;i<10000;i++)
	{	P1DIR=0x40;
		P1OUT=0x40;
	}
	for(i=0;i<10000;i++)
	{	P1DIR=0x40;
		P1OUT=0x00;
	}
	goto label;
}
