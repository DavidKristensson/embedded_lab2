#ifndef _LED_H_
#define _LED_H_

#include <avr/io.h>

#define ledGreen PB1 // Arduino pin 9
#define ledBlue	PB2 // Arduino pin 10
#define ledRed	PB3 // Arduino pin 11
#define ledYellow PD6 // Arduino pin 6

void led_init(void);

void simple_ramp(uint8_t *direction, uint8_t *pwmValue);

#endif

