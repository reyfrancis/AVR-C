/*
 * Blink.c
 *
 * Created: 02/06/2019 12:11:04 PM
 * Author : rey
 
 Blink the stock led on the Arduino Uno board.
 */ 

#include <avr/io.h>   // Take note that this header file includes all the registers and bits for the MCU we selected
#include <util/delay.h>   // Library for delay

#define F_CPU 16000000UL   // Define the Clock Speed which is 16 Mhz or 16 000 000 Hertz
/* The reason why we put 'UL' at the end of 16000000 is because we want to let the MCU know that the F_CPU contains a big number or Unsigned Long. Long is a 4 byte variable hence it can hold values up to 0 -> 2^(32) or 0 -> 4,294,967,296 and hence includes 16,000,000
*/
int main(void)
{
	/* 
	First is we need to define the Pin as output in the Data Direction Register, this can be done in many different ways, one way is by defining it as binary. Take note that the Port Pin numbering starts from 0-7 and Port Pin 0 is the rightmost in the binary.
	*/
	DDRB = 0b00100000;   // Setting Port Pin B5 as output
	/* 
	However doing this would modify all the other bits to '0'. This is only good for our application since we are not interested in all in all other bits except the Port Pin B5.
	*/ 
	
	
    /* Replace with your application code */
    while (1) 
    {
		PORTB = 0b00100000;   // Turning ON the led in Port Pin B5
		_delay_ms(250);   // Delay for 250 milliseconds, 'ms' stands for milliseconds
		PORTB = 0b00000000;   // Turning OFF the led in Port Pin B5
		_delay_ms(250);  
    }
}

