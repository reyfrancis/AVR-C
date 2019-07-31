/*
 * BlinkMany.c
 *
 * Created: 02/06/2019 1:55:18 PM
 * Author : rey
 */ 

#include <avr/io.h>
#include <util/delay.h>

#define BLINK_DELAY 50   // Define Blink delay as 500 milliseconds

//Function Declarations
void LED1(void);
void LED2(void);
void LED3(void);
void LED4(void);
void LED5(void);
void LED6(void);
void OFFLED(void);

int main(void) {
	DDRD |= (1 << PORTD2) | (1 << PORTD3) | (1 << PORTD4);   // Make Port Pin D2, D3, D4 as outputs
	/*
	To see better what we do above:
	POTD2 = 2, PORTD3 = 3, PORTD4 = 4
	(1 << PORTD2) is shifting 1 into two positions. 
	0b00000001 << 2 = 0b00000100
	
	(1 << PORTD3) is shifting 1 into three positions.
	0b00000001 << 3 = 0b00001000
	
	(1 << PORTD4) is shifting 1 into four positions.
	0b00000001 << 2 = 0b00010000
	
	ORing them all: 
	0b00000100
	0b00001000
	0b00010000
	---------- (OR)
	0b00011100
	
	ORing with DDRD:
	0bxxxxxxxx (DDRD)
	0b00011100 (MASK)
    ---------- (OR)
	0bxxx111xx 
	
	Hence, we set the three pins without affecting others.
	*/
	
	PORTD &= ~(1 << PORTD2) & ~(1 << PORTD3) & ~(1 << PORTD4);   // Set Port Pin D2, D3, D4 active LOW
	/*
	To see better what we do above:
	POTD2 = 2, PORTD3 = 3, PORTD4 = 4
	(1 << PORTD2) is shifting 1 into two positions. 
	0b00000001 << 2 = 0b00000100
	Negating is changing 1 to 0, and 0 to 1:
	~(1 << PORTD2) = 0b11111011
	
	(1 << PORTD3) is shifting 1 into three positions.
	0b00000001 << 3 = 0b00001000
	~(1 << PORTD3) = 0b11110111
	
	(1 << PORTD4) is shifting 1 into four positions.
	0b00000001 << 4 = 0b00010000
	~(1 << PORTD4) = 0b11101111
	

	ANDing them all:
	0b11111011
	0b11110111
	0b11101111
	---------- (AND)
	0b11100011
	
	ANDing with PORTD:
	0bxxxxxxxx (PORTD)
	0b11100011 (MASK)
    ---------- (AND)
	0bxxx000xx 
	*/


    while (1) {
		LED1();
		_delay_ms(BLINK_DELAY);
		LED2();
		_delay_ms(BLINK_DELAY);
		LED3();
		_delay_ms(BLINK_DELAY);
		LED4();
		_delay_ms(BLINK_DELAY);
		LED5();
		_delay_ms(BLINK_DELAY);
		LED6();
		_delay_ms(BLINK_DELAY);
		OFFLED();
		_delay_ms(BLINK_DELAY);
		
    }
}

	void LED1() {
		DDRD &= ~(1 << PORTD2);   // Set Port Pin D2 as Input
		/*
		DDRD = 0bxxxxxxxx
		~(1 << PORTD2) = 0b11111011
		
		0bxxxxxxxx
		0b11111011
		---------- (AND)
		0bxxxxx0xx	
		*/
		
		
		DDRD |= (1 << PORTD3);   // Set Port Ping D3 as Output
		/*
		DDRD = 0bxxxxxxxx
		(1 << PORTD3) = 0b00001000
		
		0bxxxxxxxx
		0b00001000
		---------- (OR)
		0bxxxx1xxx	
		*/
		
		PORTD &= ~(1 << PORTD3);   // Set Port Pin D3 as active LOW
		/*
		PORTD = 0bxxxxxxxx
		~(1 << PORTD3) = 0b11110111
		
		0bxxxxxxxx
		0b11110111
		---------- (AND)
		0bxxxx0xxx	
		*/
		
		
		PORTD |= (1 << PORTD4);   // Set Port Pin D4 as active HIGH
		/*
		DDRD = 0bxxxxxxxx
		(1 << PORTD3) = 0b00010000
		
		0bxxxxxxxx
		0b00010000
		---------- (OR)
		0bxxx1xxxx	
		*/
	}
	
	void LED2() {
		PORTD |= (1 << PORTD3);
		PORTD &= ~(1 << PORTD4);
	}

	void LED3() {
		DDRD &= ~(1 << PORTD4);
		DDRD |= (1 << PORTD2);
		PORTD &= ~(1 << PORTD2);
		PORTD |= (1 << PORTD3);	
	}

	void LED4() {
		PORTD |= (1 << PORTD2);
		PORTD &= ~(1 << PORTD3);	
	}
	
	void LED5() {
		DDRD &= ~(1 << PORTD3);
		DDRD |= (1 << PORTD4);
		PORTD &= ~(1 << PORTD2);
		PORTD |= (1 << PORTD4);
	}
	
	void LED6() {
		PORTD |= (1 << PORTD2);
		PORTD &= ~(1 << PORTD4);
	}
	
	void OFFLED() {
		PORTD = 0x00;
	}