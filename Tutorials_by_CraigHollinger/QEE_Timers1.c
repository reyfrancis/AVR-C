#include <avr/io.h>

int main(void) {
	while(1) {
		TCCR0 = (1 << CS01) | (1 << CS00)   // Set Pre Scaler to clk/64

		while ((TIFR & (1 << TOV0)) > 0) {
			//   Wait for the overflow event. Do nothing while the TOV0 is not set to 1.
		}/* while ((TIFR & (1 << TOV0)) > 0) */

        TIFR |= (1 << TOV0);
	}/* while(1) */
}/* int main(void) */