/*
In C, there is an special operator aside from the +, - , *, / we knew. It is called bit shifting.

For example we will bit shift:
*/

5 << 4

/*
Remember that everything in the microcontroller is in binary hence the 5 needs to be converted into 8 bit binary which is:

5 = 0b00000101

Also we need to take note that the format follows, (Number) << (How much Shift)
And shifting the bits for 4 places, will make:

0b01010000. Also remmber that the bits being removed through the process of shifting will be replaced with 0's.
*/


/*
AND (Truth Table)
Y - is the Output
| B | A | Y |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

OR (Truth Table)
Y - is the Output
| B | A | Y |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |
*/

/*
MASK is defined as a byte or set of bits we AND or OR with another bit to get what we want for that bit.

1. Getting a value of a certain bit
Say we want to know the value of a 3rd bit in a byte.

x x x x 1 x x x - The byte of interest
0 0 0 0 1 0 0 0 - MASK
_______________ (AND)
0 0 0 0 1 0 0 0 - Output

Ouput >> 3

Output = 0b00000001

Here we can see that the output will be equal to 1 which is the value of the 3rd bit.


2. Clearing a certain bit

x x x x 1 x x x - The byte of interest
1 1 1 1 0 1 1 1 - MASK
_______________ (AND)
x x x x 0 x x x - Output

To see clearly, let's assume that x as 1:

x = 1
1 & 1 = 1 
Hence the Output will be x!.

Another, lets assume that x is 0:
x = 0
0 & 1 = 0
Hence the Ouput is again x!

Here, we see that we clear a certain bit without affecting all other bits.


2. Writing to a certain bit

x x x x 0 x x x - The byte of interest
0 0 0 0 1 0 0 0 - MASK
_______________ (OR)
x x x x 1 x x x - Output

To see clearly, let's assume that x as 1:

x = 1
1 | 1 = 1 
Hence the Output will be x!.

Another, lets assume that x is 0:
x = 0
0 | 1 = 0
Hence the Ouput is again x!

Again, we write to a certain bit without affecting others.
*/