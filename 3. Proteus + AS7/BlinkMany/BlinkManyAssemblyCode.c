/*
If we look at our BlinkMany.lss, we can find the sets of instruction in Assembly. Whenever we write the code in C, the compiler will convert
it into Assembly.

00000000 <__vectors>:
   0:	0c 94 34 00 	jmp	0x68	; 0x68 <__ctors_end>
   4:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
   8:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
   c:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  10:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  14:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  18:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  1c:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  20:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  24:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  28:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  2c:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  30:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  34:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  38:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  3c:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  40:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  44:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  48:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  4c:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  50:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  54:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  58:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  5c:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  60:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>
  64:	0c 94 3e 00 	jmp	0x7c	; 0x7c <__bad_interrupt>

  This line of codes are pertaining to the _delayms() function which uses an interrupt. Whenever we call that fucntion is we jump
  into an address 0x7c. 

 And looking at the address 0x7c: 

 0000007c <__bad_interrupt>:
  7c:	0c 94 00 00 	jmp	0	; 0x0 <__vectors>

  We can find that after some time, we jump back to address 0, which is the reset vector:
  0:	0c 94 34 00 	jmp	0x68	; 0x68 <__ctors_end>

  After jumping back to 0, we jump back to 0x68 which will continue the function where we left:
  68:	11 24       	eor	r1, r1

*/

//  Here we can see how the compiler runs our code:

int main(void) {
	DDRD |= (1 << PORTD2) | (1 << PORTD3) | (1 << PORTD4);   //Make Port Pin D2, D3, D4 as outputs
 /*
  b0:	8a b1       	in	r24, 0x0a	; 10
  b2:	8c 61       	ori	r24, 0x1C	; 28
  b4:	8a b9       	out	0x0a, r24	; 10

  We can see that it calculates the value of (1 << PORTD2) | (1 << PORTD3) | (1 << PORTD4) which is 0b00011100 in binary and 
  0x1C in hexadecimal. 
  'in	r24, 0x0a	; 10', Saves the value of DDRD (DDRD address is 0x0a) in a register named r24.
  'ori	r24, 0x1C	; 28', ORing the r24 register with the value of (1 << PORTD2) | (1 << PORTD3) | (1 << PORTD4) and saving to r24
  'out	0x0a, r24	; 10', Output the value of r24 to DDRD
  */	
	
	PORTD &= ~(1 << PORTD2) & ~(1 << PORTD3) & ~(1 << PORTD4);   // Set Port Pin D2, D3, D4 active LOW
/*
  b6:	8b b1       	in	r24, 0x0b	; 11
  b8:	83 7e       	andi	r24, 0xE3	; 227
  ba:	8b b9       	out	0x0b, r24	; 11
*/