#include <avr/pgmspace.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#define NOT_A_PIN 0
#define NOT_A_PORT 0

#define NOT_AN_INTERRUPT -1

#define PA 1
#define PB 2
#define PC 3
#define PD 4
#define PE 5
#define PF 6
#define PG 7
#define PH 8
#define PJ 10
#define PK 11
#define PL 12

#define INPUT 0x0
#define OUTPUT 0x1
#define INPUT_PULLUP 0x2