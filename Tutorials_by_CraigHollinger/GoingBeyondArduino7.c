 /*
LED is being turn ON and OFF during the PWM. The duty cycle is ON time vs the OFF time, which is obviously more ON time will have a brighter LED. And our eyes acts as filter, which filters the pulses. Instead of seeing longer and shorter pulses, what we see is brighter and dimmer LED.
*/

/*
The frequency in which the LED is turned ON and OFF (which is the PWM) is 62.5 KHz. We can replace that LED with a RC (Resistor and Capacitor) to create a low pass filter. 

Note: Look for the RC Low Pass Filter schematic

And we get a varying Output Voltage. We can pick the values for Resistor and Capacitor to get a frequency that we want. In the example, he chose R = 12k and C = 0.01 uF and the cut off frequency is 1326 Hz.  We can check that using the formula fc = 1/2PiRC. 
*/

