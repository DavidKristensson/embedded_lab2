#include "timer.h"

void timer_init() {
	/*
		WGMO1 bit set high in TCCR0A register activates CTC mode
		With CS00 and CS02 bits set we get a 1024 prescaler 

		Max value set to 155 in OCR0A register
		Counter initated at TCNT0 register
	*/
	
	TCCR0A |= (1 << WGM01);
	TCCR0B |= (1 << CS00) | (1 << CS02);

	OCR0A = 155;
	TCNT0 = 0;

}

