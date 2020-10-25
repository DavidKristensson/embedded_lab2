#ifndef _LED_H_
#define _LED_H_

#include <avr/io.h>

#define ledGreen PB1
#define ledBlue	PB2
#define ledRed	PB3 

void led_init(void);

#endif

