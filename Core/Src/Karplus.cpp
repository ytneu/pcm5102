/*
 * Karplus.cpp
 *
 *  Created on: Apr 30, 2021
 *      Author: michalb
 */

#include "Karplus.h"

#include "wavetable.h"

Karplus::Karplus() {
	// TODO Auto-generated constructor stub

}

Karplus::~Karplus() {
	// TODO Auto-generated destructor stub
}

void Karplus::restore(uint16_t bbound) {
//	bound = (uint16_t)(21000.0f / (float)freq);
	bound = bbound;
	restore_noise();
	locat = 0;
	out = 0.0f;
	last = 0.0f;
	curr = 0.0f;
	last_out = 0.0f;
}

void Karplus::restore_freq(uint16_t freqq) {
	freq = freqq;
	bound = (uint16_t)(42000.0f / (float)freq);
	restore_noise();
	locat = 0;
	out = 0.0f;
	last = 0.0f;
	curr = 0.0f;
	last_out = 0.0f;
	decay = 1.0f;
}

void Karplus::restore_noise() {
    for (int i = 0; i < KARPLUS_DELAY_SIZE; i++) {
    	float rnd = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
      accum = accum - (lowpass * (accum - rnd));
      delay_mem[i] = accum;
    }
}
void Karplus::get_karplus(float adsr_output) {
	delay_mem[locat++] = out;
    if (locat >= bound) locat = 0;
    curr = delay_mem[locat];
//    val = adsr_output * 0.5 * (last + curr);
    val =  0.5 * (last + curr);
    out = last_out + a0 * (val - last_out);
    last = curr;
    last_out = out;

}

void Karplus::get_envelope() {

}
