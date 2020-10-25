#include "led.h"

void led_init() {
	DDRB |= (1 << ledGreen);
}

