/*
Timer is 1 function and counter is another function they are just basically the same, just the clock is different.

TCNT0 - Timer Counter Zero, is a special register that we can write to it and read from it. It can also modified by two taps, a clock and 
a direction. We can increment the TCNT0 by 1 or decrement it by everytime we give a pulse on it and depending on the direction. The source
of this clock determines whether it is a timer or a counter can come from an IO pin outside the chip. It can run asynchronously, which means
its not timed with the main timer in the microcontroller or the F_CPU.

This register becomes a counter if the 'clk' pulse is not a regular frequency, say we have a sensor that gives a signal whenever it detects
a car that pass bay. Then TCNT0 would be a counter. However if a clk pulse is a regular pulse then it is being used as a timer. And the 
signal from that comes from the microprocessor main oscillator or F_CPU. 

F_CPU can be divided into lower speeds when we tap into it. It is called pre scaler and what it does is it divides the F_CPU by 2 or by 4
or by 8, etc. We just have to set high some of the taps so the correct pre scaler can be set. So summing it up, a microcontroller can have
a clock internally by F_CPU which can be divided depending on what pre scaler was set. Also we can have an external clock. Of which, these
clocks will be used as our timer and counter.

The TCNT0 is an 8-bit counter which means it holds values from (0 -> 255). Which means these register can count up to 255 and when it reach 
the 255, or 0b11111111, on the next clock pulse it restarts all over again to 0b00000000. That is called a roll over or an overflow. 
And there is some logic in the TCNT register that detects an overflow which sets a flag which can be used as an interrupt, an interrupt 
on a counter timer overflow. 


OCRA and OCRB - OCR stands for Output Compare Register. So what happens is there is logic that connects the OCR to TCNT and it is constantly
comparing OCR with TCNT and when they get a match, you get a signal, or specifically, you get another flag set (Ouput Compare Flag). 
*/

/*
The external oscillator can be whatever it is up to 20 MHz or depending on the board specification. However, if take 'clk' as 16 MHz or 
higher, the TNCT will overflow very quickly or get an interrupt very frequently. So we need to use the pre scaler, to slow down the F_CPU.
*/ 
