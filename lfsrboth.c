#include<msp430.h>
#include<stdint.h>
void delay()
{
	unsigned int i = 0;
	while(++i < 30000);
}
void main()
{	unsigned lfsr=0xace1;
	unsigned bit;
	
	
	do
	{	P1DIR=0x40;
		bit = ((lfsr>>0)^(lfsr>>2)^(lfsr>>3)^(lfsr>>5))&1;
		lfsr = (lfsr>>1)|(bit<<15);
		
		P1OUT=lfsr;
		delay();
		P1DIR=1;
		P1OUT=lfsr;
		delay();

		
		
	}
	while(lfsr!=0xace1);
}

