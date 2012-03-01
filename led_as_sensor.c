#include<msp430.h>

void init()
{	ADC10CTL0= ADC10ON | ADC10SHT_2 | SREF_0;
	ADC10CTL1= INCH_0 | SHS_0 | ADC10DIV_0 | ADC10SSEL_0 | CONSEQ_0;
	ADC10AE0= BIT0;
	ADC10CTL0|= ENC;
}
void start()
{	ADC10CTL0|= ADC10SC;
}

unsigned int eoc()
{	return ADC10CTL1 & ADC10BUSY;
}

void main()
{	unsigned int cutoff,i;
	P1DIR=BIT6;
	init();
	while(1)
	{	
		start();
		while(eoc());
	
		cutoff = ADC10MEM;
		if(cutoff<380)
		{	P1OUT=BIT6;
		}
		else
		{	P1OUT=0;
		}
		for(i=0;i<1000;i++);

		
	}
}
	
