#include<msp430.h>

#define ZERO 0x3f
#define ONE 0x06
#define TWO 0x5b
#define THREE 0x4f
#define FOUR 0x64
#define FIVE 0x6d
#define SIX 0x7d
#define SEVEN 0x07
#define EIGHT 0x7f
#define NINE 0x67


void delay()
{	int i=0;
	for(;i<32000;i++);
}


void main()
{	
	P1DIR=0xff;
	P1OUT=ZERO;
	delay();
	P1OUT=ONE;
	delay();
	P1OUT=TWO;
	delay();
	P1OUT=THREE;
	delay();
	P1OUT=FOUR;
	delay();
	P1OUT=FIVE;
	delay();
	P1OUT=SIX;
	delay();
	P1OUT=SEVEN;
	delay();
	P1OUT=EIGHT;
	delay();
	P1OUT=NINE;
	delay();
}

