#include "led.h"

void led_init() {
	DDRB |= (1 << ledGreen);
	DDRD |= (1 << ledYellow);
}

