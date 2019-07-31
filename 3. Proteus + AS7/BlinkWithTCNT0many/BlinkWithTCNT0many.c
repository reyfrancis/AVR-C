/*
 * BlinkWithTCNT0.c
 * Used for atmega2560
 * What happens is that the TCNT0 is continuosly incrementing and the OCR0A is set to 155. In every clock pulsem TCNT0 will be
   compared to OCR0A and if they are match, which means that the TCNT0 is also equal to 155, we then call the ISR(TIMER0_COMPA_vect).
   Inside the interrupt is we set the value of volatile uint8_t t10msFlag to 1. 

   So inside our while(1) loop. We check if the t10msFlag is set to 1. If it is, we check if the LEDDelay is set to 0. The whole 
   idea of LEDDelay is to count from 1 -> 50, of which every count is worth 10ms. In simple words, every 10 ms, the OCR0A will 
   trigger the ISR(TIMER0_COMPA_vect). And the LEDDelay will be decremented every 10ms time. By the time the LEDDelay hits 0. 
   Then we increment the LEDState in our enum{} statement. 

   Summing it up. The use of this function is to optimized the 10ms time. We can just use the <util/delay.h> and create delays
   for 10ms time. However, using the delay will consume the whole 10ms without doing something. However if we make use of the OCR0A,
   we can do a all sorts of things and then be reminded every 10ms time! That is, Blink without delay!
 */ 
 
#include <avr/io.h>
#include <avr/interrupt.h>
#ifndef
#   define F_CPU 16000000UL
#endif
#define BLINK_DELAY 50

volatile uint8_t t10msFlag;   // Any variable that is changed by an interrupt should be set as volatile
uint8_t LEDState;
uint8_t LEDDelay = BLINK_DELAY;
enum (
    LEDState0, LEDState1, LEDState2, LEDState3, LEDState4, LEDState5, LEDState6, maxLEDState 
    // maxLEDState will be used to know if the last was reached                                                                             
);

//Function Declarations
void LED1(void);
void LED2(void);
void LED3(void);
void LED4(void);
void LED5(void);
void LED6(void);
void OFFLED(void);


ISR(TIMER_COMPA_vect) {
    t10msFlag = 1;
}


int main(void)
{

    TCCR0A = 0b00000010;  // Set the mode to CTC
    /*
	The reason why we chose the CTC mode is because as its name Clear Timer on Compare Match mode. The CTC mode will automatically 
	resets the TNCT0 everytime that it equals its value with OCR0A. Remember that we can only use OCR0A in this mode since other
	OCR0x will not reset the TCNT0.
    */


    TCCR0B = 0b00000101;   // Set the pre scaler to clk/1024
    OCR0A = 155;   // F_CPU/1024/100 - 1
    TIMSK0 = 0b00000010;   // Enable the OCR0A interrupt 

    sei();   // Enable interrupts

    while (1) 
    {
    	// Do something here for 10ms time. 
    	// This idea is the same as Blink without delay
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
        		void LED0();
        		break;
        		case LEDState1:
        		void LED1();
        		break;
        		case LEDState2:
        		void LED2();
        		break;
        		case LEDState3:
        		void LED3();
        		break;
        		case LEDState4:
        		void LED4();
        		break;
        		case LEDState5:
        		void LED5();
        		break;
        		case LEDState6:
        		void OFFLED();
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