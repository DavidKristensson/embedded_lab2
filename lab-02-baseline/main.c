#include "led.h"
#include "serial.h"
#include "timer.h"
#include <util/delay.h>

int main (void) {
	/*
		Checking OCF2A flag in TIFR2 register if match has occurred
		Flag is cleared by setting bit

		Function simple_ramp is run and updated pmwValue is set to OCR0A register 
		changing the duty cycle/led brightness 1 step at a time
	*/
	timer_init();
	led_init();

	uint8_t direction = 1;
	uint8_t pwmValue = 1;

	while (1) {
		if (TIFR2 & (1 << OCF2A)) {
			simple_ramp(&direction, &pwmValue);
			OCR0A = pwmValue;
			TIFR2 |= (1 << OCF2A);
		}
	}
	return 0;
}
