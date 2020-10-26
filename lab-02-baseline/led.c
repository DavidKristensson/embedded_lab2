#include "led.h"

void led_init() {
	DDRD |= (1 << ledYellow);
}

void simple_ramp(uint8_t *direction, uint8_t *pwmValue) {
	if (*pwmValue == 255) {
		*direction *= -1;
	}
	else if (*pwmValue == 0) {
		*direction *= -1;
	}

	*pwmValue += *direction;
}
