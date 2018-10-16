#include <stdint.h>
#include <msp430fr5969.h>
#include <msp430.h>
int main(void)
{


	WDTCTL= WDTPW + WDTHOLD;
	PM5CTL0 &= ~LOCKLPM5;
	P1DIR &= ~BIT7;	
	P1DIR |= BIT0;
	P1OUT &= ~BIT0;

	while(1){
	if((P1IN & 0x80) == 0x00){
		P1OUT &= ~BIT0; 
	}

	else{
 		P1OUT |= BIT0;
	}
	
	}
	
}

