/*
UART 

RS 232 - A serial port complying with the RS-232 standard was once a standard feature of many types of computers. Personal computers used them for connections not only to modems, but also to printers, computer mice, data storage, uninterruptible power supplies, and other peripheral devices.

Sadly today these COM Ports are being replaced by USB Ports. Luckily today we have devices like FTDI which is a USB to Serial converter. So we plug this into the PC and plug the other end to the microcontroller and communicate with the USB Port.

The RS 232

- No signal timing
- Signals - Rx, Tx, DTR, CTS, RTS . . .
- Connections - DB25, DE9

*/

/*

Minimal Signals needed for the connection to a microcontroller

Rx - Data received by a device
Tx - Data transmitted by a device
GND - Electrical Ground

To hook them up. The Rx of the PC goes to the Tx of the microcontroller and the Tx of the PC goest to the Rx of the microconroller. GND stays the same. 

The RS 232 is a point-to-point only which means it can communicate 1 at a time. No multi-DROP or no Multi slaves in a single master. 

*/

/*

Signal Timing

RS 232 - The clock bits is implied it means that both sides, the transmitter and the receiver have to agree on the same bit rate in order to communicate. You might also heard the term baud rate, well it means the same thing (the bit rate). 

The typical Baud Rate used in the day is 9600 Bits/s, another is 19200 Bits/s, 38400 Bits/s. We can't go a lot higher than this because the timing becomes very critical and any kind of distance that we have to transmit the data will trash the data and becomes noise. And that is one of the reasons why USb is developed, to transmit data at much much higher speed. 
*/

/*

How do we know that something is going to transmit data. Normally if no one is transmitting data from the line. It's idle. Idle means the data line is always high. The first thing that happens is a start bit is sent, just a low. And it stays low for a appropriate bit time. 

For a 9600 Bits/s is 104.2 us/bit. Which means that the it will send a low signal for a 104.2 us or START bit before it really starts transmitting data. The LSB or Low Significant Bit is the first bit to be transmitted and the MSB or the Most Significant Bit is the last bit to the transmitted. After the MSB is transmitted then another 104.2 us of HIGH or STOP bit then it goes to IDLE again.

The whole data from START bit to STOP bit is called a Frame. Parity is for error correction. Say for example that we have ODD parity, the number of 1 bits should be ODD. Say we have even 1's in our transmission then we would have to add another 1 bit after the MSB and before the STOP bit. And the reverse for the EVEN parity.  

*/

/*

In Arduino when we are talking about Serial Ports we always hear UART which stands for Universal Asynchronous Receiver Transmitter. However Atmel calls it USART which stands for Universal Synchronous Asynchronous Receiver Transmitter since it get used to another type of data transmission where clock coordinates the transmitted data. 

In the case of COM Port there is no clock and the transmission is Asynchronous. 

*/