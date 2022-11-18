#include <msp430.h> 


/**
 * main.c
 */

int main(void)
{
	//WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
    int k;
	PM5CTL0 &= ~0x01;
	P1DIR |= 0X03; // P0 y P1 OUTPUT
	while(1) {
	    P1OUT = 0x02;

	    P1OUT = 0x01;
	}
	 //Hice cambios xd
}
