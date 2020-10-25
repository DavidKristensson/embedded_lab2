#include "led.h"
#include "serial.h"
#include "timer.h"

int main (void) {
	/*
		OCF0A bit is set when TCNTO(Counter) == OCR0A(Max value)
		Setting OCF0A bit clears the flag
	*/
	timer_init();
	led_init();

	int counter = 0;

	while (1) {
		if (TIFR0 & (1 << OCF0A)) {
			TIFR0 |= (1 << OCF0A);
			if (counter == 10) {
				PORTB ^= (1 << ledGreen);
				counter = 0;
			}
			else {
				counter++;
			}		
		}
	}
	return 0;
}
