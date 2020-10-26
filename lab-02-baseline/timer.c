#include "timer.h"

void timer_init() {
	/*
		WGMO0-1 bit set high in TCCR0A register activates PWM fast mode
		COM0A1 set high activates clear on match(start from bottom), non inverted
		With CS00 and CS01 bits set we get a 64 prescaler 

		WGM21 bit set in TCCR2A register activates CTC mode
		Bit CS20 and CS22 is set in TCCR0B register sets a 1024 prescaler

		Top value of OCR2A is set to 249
		TCNT2 is initated to a value of 0
	*/
	
	TCCR0A |= (1 << WGM00) |(1 << WGM01) | (1 << COM0A1);
	TCCR0B |= (1 << CS00) | (1 << CS01); 

	TCCR2A |= (1 << WGM21);
	TCCR2B |= (1 << CS20) | (1 << CS21) | (1 << CS22);

	OCR2A = 249;
	TCNT2 = 0;
}

