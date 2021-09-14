/*
 * Delay.cpp
 *
 *  Created on: Sep 13, 2021
 *      Author: michalb
 */

#include "Delay.h"

Delay::Delay() {
	// TODO Auto-generated constructor stub

}

Delay::~Delay() {
	// TODO Auto-generated destructor stub
}

void Delay::process(uint16_t x) {
	x = (float)x;
	if (cursor >= size)
		cursor -= size;
	y = (float)buffer[(uint16_t)cursor];

	y = 0.13f*y + 0.87f*lastout1;
    lastout1 = y;
	y = 0.13f*y + 0.87f*lastout2;
    lastout2 = y;
	y = 0.13f*y + 0.87f*lastout3;
	lastout3 = y;

	buffer[(uint16_t)cursor] = (uint16_t)(x + y * feedback);

	cursor += delta;

	out = (uint16_t)(x + y * 1.2f);
}
