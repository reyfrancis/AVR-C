/*
In C, all the programs are written in 'void main(void)'. However in Arduino we can't really see this 'void main(void)' unless we find it in the source code. And if we do, we can see that it encapsulates void setup() and void loop():
*/

void main(void) {
	setup()
	loop()
}


/*
I2C.c

Now, most of the accelerometer, gyroscope, magnetometer are communicated in I2C communicatio bus which is commonly known in Arduino as 'Wire' or Wire.h, Wire.c. In Atmel Studio this I2C bus is known as TWI or Two Wire Interface. Atmega328 has an I2C peripheral to communicate with other devices using the I2C bus.
*/

/*
SPI.c

For devices such as display might use the SPI bus. It is another form of communication and has another format from I2C.
*/

/*
UART.c

For devices such as GPS, there is another peripheral for that which is UART.
*/


/*
adxl3245.c

Aside from communication files, we also need diver files or the codes that run specific devices. We also need to write them so we can communication with such device.
*/

/*
HEADER files

Header or '.h' files are the files that produced when we compile our '.c' code and those .h are the ones being included in our 'main'. These '.h' files are being written in #include. Sometimes we also need to specify where the address/path of this '.h' files.

The #include <avr/io.h> is automatically included in Atmel Studio. What it does is that it defines all the registers and bits in the registers in the MCU you selected.
*/


