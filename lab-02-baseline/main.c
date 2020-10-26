#include "led.h"
#include "serial.h"
#include "timer.h"
#include <util/delay.h>

int main (void) {
	/*
		Setting duty cycle/led brightness with OCR0A register
	*/
	timer_init();
	led_init();

	while (1) {
		OCR0A = 50;
		_delay_ms(1000);
		OCR0A = 150;
		_delay_ms(1000);
		OCR0A = 250;
		_delay_ms(1000);
	}
	return 0;
}
