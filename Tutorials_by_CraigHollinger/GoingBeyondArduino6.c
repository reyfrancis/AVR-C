/*
TYPEDEF

char - 1 byte 
int - 2 bytes
long - 4 bytes

The above data types are what we called native to the C compiler, which means they are pre defined in the C compiler. They can be signed and unsigned depending on how we want to use it.

*/

/*

uint8_t, uint16_t are data types that is defined but not native to the C compiler. If we open avr/stdint.h, we will find:

typedef signed char     int8_t
typedef unsigned char   uint8_t
typedef signed int  int16_t
typedef unsigned int    uint16_t
typedef signed long int     int32_t
typedef unsigned long int   uint32_t
typedef signed long long int    int64_t
typedef unsigned long long int  uint64_t

The "u" will be the key to know that the data type is unsigned and the _t is to know its a data type and the 8, 16, 32 or 64 refers to how many bits it can hold.

Now the whole point of using this typedef defined datatypes instead of the unsigned char which is native, is because when we do our codes, we should be aware of how big and what values does our data type can hold which makes it easier for us to figure out using the typedef data types.

*/




/* 
STRUCT

Struct is a means for aggregating a bunch of different data types a bunch of different variables under the same group and address with a single name.

struct CARD {
    char suit; //Remember that the default is signed for all variables in C.
    char spots;
};


struct is pretty similar to Object Oriented Programming where we create instance and we copy the variables inside the Class. Here we create instance of the struct CARD we define above, that is, 2 instance Jack and Jill. 
struct CARD Jack, Jill.

struct CARD Jack, Jill;

#define HEART 0
#define CLUB 1
#define DIAMOND 2
#define SPADE 3

Assuming that Jack drew a card which is 9 of hearts.

Jack.suit = HEART;
Jack.spots = 9;

And Jill drew 2 of spades.

Jill.suit = SPADE;
Jill.spots = 3;
*/
