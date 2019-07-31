/*
In the schematic of Atmega328, we can see that the pins are connected in every Port. We can see Port B , Port C etc. but for no reason
AVR doesn't have Port A. AVR microcontroller were designed such that every port has 8 pins.

In blinking the stock led of the Arduino Board we can see if we follow the schematic that the led is connected to Port Pin B5.
Atmega328 has 3 Ports : Port B, Port C and Port D. Of each port there is a separate register that controls them. One register is 
called DDR which stands for 'Date Direction Register' which sets and clear bits in that register. Another register associated with
Ports is called Pin, and that is when we read that register, we read whatever the state on that pin whether its a high or a low.
And the third register is called Port and when we write to that register, we write to the IO pin selected. 

If we go to the Atmega328 datasheet and find PortB7 and PortB6, we should take note that this pins are already hooked up in the arduino
since it is where the Crystal Oscillator are connected and so they are not available as IO pins. 
*/