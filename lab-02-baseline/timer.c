#include "timer.h"

void timer_init() {
	/*
		WGMO0-1 bit set high in TCCR0A register activates PWM fast mode
		COM0A1 set high activates clear on match(start from bottom), non inverted
		With CS00 and CS01 bits set we get a 64 prescaler 
	*/
	
	TCCR0A |= (1 << WGM00) |(1 << WGM01) | (1 << COM0A1);
	TCCR0B |= (1 << CS00) | (1 << CS01); 
}

