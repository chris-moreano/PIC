
#include "p24hxxxx.h"						/* generic header for PIC24H family */


#define FOREVER 1							// endless 


/* function prototypes */
void delay_ms();
void to_red();
void to_green();
void init_test();

	LATAbits.LATA0 = 1; // turn on port RA0 (GREEN)
    LATAbits.LATA1 = 1; // turn on port RA1 (YELLOW)
    LATBbits.LATB2 = 1; // turn on port RB2 (RED)
        
    LATBbits.LATB3 = 1; // turn on port RB3 (GREEN)
    LATAbits.LATA3 = 1; // turn on port RA3 (YELLOW)
    LATBbits.LATB4 = 1; // turn on port RB4 (RED)
        
    LATAbits.LATA4 = 1; // turn on port RA4 (GREEN)
    LATBbits.LATB6 = 1; // turn on port RB6 (YELLOW)
    LATBbits.LATB7 = 1; // turn on port RB7 (RED)
void changeToRed(char lght)
{
	wait(1);
		
		if (lght == '1')
	{

	LATAbits.LATA0 = 1; // turn on port RA0 (GREEN)
	wait(here)
	
	LATAbits.LATA0 = 0; // turn on port RA0 (GREEN)
	LATAbits.LATA1 = 1; // turn on port RA1 (YELLOW)
	
	wait(here)
	
	LATAbits.LATA1 = 0; // turn on port RA1 (YELLOW)
    LATBbits.LATB2 = 1; // turn on port RB2 (RED)
        
    LATBbits.LATB3 = 1; // turn on port RB3 (GREEN)
    LATAbits.LATA3 = 1; // turn on port RA3 (YELLOW)
    LATBbits.LATB4 = 1; // turn on port RB4 (RED)
        
    LATAbits.LATA4 = 1; // turn on port RA4 (GREEN)
    LATBbits.LATB6 = 1; // turn on port RB6 (YELLOW)
    LATBbits.LATB7 = 1; // turn on port RB7 (RED)
	}
	
		if (lght == 'B')
	{
		output_low_port_a(3);
		output_low_port_a(2);
		output_high_port_a(1);
		wait(2);
		output_low_port_a(1);
		output_high_port_a(0);		
	}
	
		if (lght == 'C')
	{
		output_low_port_b(6)
		output_high_port_b(5);
		wait(2);
		output_low_port_b(5)
		output_high_port_b(4);
	}
	
		if (lght == 'D')
	{
		output_low_port_a(2);
		output_high_port_a(1);
		output_low_port_b(2);
		output_high_port_b(1);
	
		wait(2);
	
		output_low_port_a(1);
		output_high_port_a(0);
		output_low_port_b(1)
		output_high_port_b(0);
	}
}		
void changeToGreen (int lght)
{
	wait(afewseconds);

		if (lght == '1')
	{

		LATBbits.LATB2 = 1; // turn on port RB2 (RED)
		
		wait(a few seonds )
		//1
		LATBbits.LATB2 = 0; // turn off port RB2 (RED)
		
		LATAbits.LATA0 = 1; // turn on port RA0 (GREEN)
		LATAbits.LATA1 = 0; // turn on port RA1 (YELLOW)
		
		//2
		LATBbits.LATB3 = 0; // turn off port RB3 (GREEN)
		LATAbits.LATA3 = 0; // turn off port RA3 (YELLOW)
		LATBbits.LATB4 = 1; // turn on port RB4 (RED)
		
		//3
		LATAbits.LATA4 = 1; // turn on port RA4 (GREEN)
		LATBbits.LATB6 = 0; // turn on port RB6 (YELLOW)
		LATBbits.LATB7 = 0; // turn on port RB7 (RED)
	}
	
		if (lght == '2')
	{
		
		LATBbits.LATB4 = 1; // turn on port RB4 (RED)
		
		wait(afew)
		//1
		LATAbits.LATA0 = 0; // turn of port RA0 (GREEN)
		LATAbits.LATA1 = 0; // turn off port RA1 (YELLOW)
		LATBbits.LATB2 = 0; // turn off port RB2 (RED)
		
		//2
		LATBbits.LATB3 = 1; // turn on port RB3 (GREEN)
		LATAbits.LATA3 = 0; // turn on port RA3 (YELLOW)
		LATBbits.LATB4 = 0; // turn on port RB4 (RED)
		
		//3
		LATAbits.LATA4 = 0; // turn on port RA4 (GREEN)
		LATBbits.LATB6 = 0; // turn on port RB6 (YELLOW)
		LATBbits.LATB7 = 0; // turn on port RB7 (RED)
	}
	
		if (lght == '3')
	{
		LATBbits.LATB7 = 1; // turn on port RB7 (RED)
		wait(here)
		
		LATBbits.LATB7 = 1; // turn on port RB7 (RED)

		
		//1
		LATBbits.LATB2 = 0; // turn off port RB2 (RED)
		LATAbits.LATA0 = 1; // turn on port RA0 (GREEN)
		LATAbits.LATA1 = 0; // turn on port RA1 (YELLOW)
		
		//2
		LATBbits.LATB3 = 0; // turn off port RB3 (GREEN)
		LATAbits.LATA3 = 0; // turn off port RA3 (YELLOW)
		LATBbits.LATB4 = 1; // turn on port RB4 (RED)
		
		//3
		LATAbits.LATA4 = 1; // turn on port RA4 (GREEN)
		LATBbits.LATB6 = 0; // turn on port RB6 (YELLOW)
	
	}
	
}		

void init_test()
{
	// we start by testing all LEDS
	LATAbits.LATA0 = 1; // turn on port RA0 (GREEN)
    LATAbits.LATA1 = 1; // turn on port RA1 (YELLOW)
    LATBbits.LATB2 = 1; // turn on port RB2 (RED)
        
    LATBbits.LATB3 = 1; // turn on port RB3 (GREEN)
    LATAbits.LATA3 = 1; // turn on port RA3 (YELLOW)
    LATBbits.LATB4 = 1; // turn on port RB4 (RED)
        
    LATAbits.LATA4 = 1; // turn on port RA4 (GREEN)
    LATBbits.LATB6 = 1; // turn on port RB6 (YELLOW)
    LATBbits.LATB7 = 1; // turn on port RB7 (RED)
	
	// now , we turn all LEDs but red
	LATAbits.LATA0 = 0; // turn on port RA0 (GREEN)
    LATAbits.LATA1 = 0; // turn on port RA1 (YELLOW)
        
    LATBbits.LATB3 = 0; // turn on port RB3 (GREEN)
    LATAbits.LATA3 = 0; // turn on port RA3 (YELLOW)
   
    LATAbits.LATA4 = 0; // turn on port RA4 (GREEN)
    LATBbits.LATB6 = 0; // turn on port RB6 (YELLOW)	
	
	// then we use the changetogreen function as we desire
}