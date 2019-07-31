/*
 * BlinkWithTCNT0.c
 * Used for atmega2560
 * State 1 -> 6 defines consecutive Output Compare Interrupts 
 */ 

#include <avr/io.h>
//#include <util/delay.h>
#include <avr/interrupt.h>

#ifndef F_CPU
#	define F_CPU 16000000UL
#endif

#define BLINK_DELAY 50

volatile uint8_t t10msFlag;   // Any variable that is changed by an interrupt should be set as volatile
uint8_t LEDState;
uint8_t LEDDelay = BLINK_DELAY;
enum {
    LEDState0, LEDState1, LEDState2, LEDState3, LEDState4, LEDState5, LEDState6, maxLEDState 
    // maxLEDState will be used to know if the last was reached                                                                             
};

//Function Declarations
void LED0(void);
void LED1(void);
void LED2(void);
void LED3(void);
void LED4(void);
void LED5(void);
void OFFLED(void);


ISR(TIMER0_COMPA_vect) {
    t10msFlag = 1;
}


int main(void)
{

    TCCR0A = 0b00000010;  // Set the mode to CTC
    TCCR0B = 0b00000101;   // Set the pre scaler to clk/1024
    OCR0A = 155;   // F_CPU/1024/100 - 1
    TIMSK0 = 0b00000010;   // Enable the OCR0A interrupt 

    sei();   // Enable interrupts

    while (1) 
    {
        if (t10msFlag == 1) {
            t10msFlag = 0;

            if(LEDDelay-- == 0) {
                LEDDelay = BLINK_DELAY;

                if (++LEDState == maxLEDState) {
                    LEDState = LEDState0;     
                /*
                This is a pre increment, what this does is first increment the value of LEDState, then if LEDState == maxLEDState,
                then it will set its value LEDState0;

                LEDState++;
                if (LEDState == 0) {
                    LEDState = LEDState0;
                }
                */
                }
            }
            /*
            This is a post decrement, what this does is first check if the LEDDelay == 0 then if it is, it will 
            change set its value to BLINK_DELAY. If LEDDelay is otherwise not equal to 0, then it will decrement.

            if (LEDDelay == 0) {
                LEDDelay = BLINK_DELAY;
            }

            else {
                LEDDelay--;
            }
            */
        	switch(LEDState) {
        		case LEDState0:
        		LED0();
        		break;
        		case LEDState1:
        		LED1();
        		break;
        		case LEDState2:
        		LED2();
        		break;
        		case LEDState3:
        		LED3();
        		break;
        		case LEDState4:
        		LED4();
        		break;
        		case LEDState5:
        		LED5();
        		break;
        		case LEDState6:
        		OFFLED();
        		break;

        		default:   // Do nothing
        		break;
        	}/* End switch(LEDState) */
        }/* End if (t10msFlag == 1) */ 
    }/* End while(1) */
}/* End int main(void) */


void LED0() {
	DDRD &= ~(1 << PORTD2);
	DDRD |= (1 << PORTD3);
	PORTD &= ~(1 << PORTD3);
	PORTD |= (1 << PORTD4);
}

void LED1() {
	PORTD |= (1 << PORTD3);
	PORTD &= ~(1 << PORTD4);
}

void LED2() {
	DDRD &= ~(1 << PORTD4);
	DDRD |= (1 << PORTD2);
	PORTD &= ~(1 << PORTD2);
	PORTD |= (1 << PORTD3);	
}

void LED3() {
	PORTD |= (1 << PORTD2);
	PORTD &= ~(1 << PORTD3);	
}

void LED4() {
	DDRD &= ~(1 << PORTD3);
	DDRD |= (1 << PORTD4);
	PORTD &= ~(1 << PORTD2);
	PORTD |= (1 << PORTD4);
}

void LED5() {
	PORTD |= (1 << PORTD2);
	PORTD &= ~(1 << PORTD4);
}

void OFFLED() {
	PORTD = 0x00;
}