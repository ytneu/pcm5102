/*
 * Karplus.h
 *
 *  Created on: Apr 30, 2021
 *      Author: michalb
 */

#ifndef SRC_KARPLUS_H_
#define SRC_KARPLUS_H_

#include <stdio.h>
#include <cstdlib>

#define KARPLUS_DELAY_SIZE 1024



class Karplus {
public:
	Karplus();
	virtual ~Karplus();

	uint8_t active = 0;

	float val = 0.0f;
	float last = 0.0f;
	float curr = 0.0f;
	float delay_mem[KARPLUS_DELAY_SIZE];
	uint16_t locat = 0;
	uint16_t freq = 0;
	uint16_t next_freq = 0;
	uint16_t bound = 0;
	uint16_t next_bound = 0;
	float accum = 0.0f;
	float lowpass = 0.5f;

	float signal = 0.0f;
	uint16_t out_val = 0;

	float decay = 1.0f;
	float decay_step = 0.0000238f * 0.01f;

	// one pole filter
	float out = 0.0f;
	float last_out = 0.0f;
	float a0 = 0.5f;
	float b1 = 1.0f - a0;

	void restore(uint16_t bbound);
	void restore_freq(uint16_t freq);
	void restore_noise();
	void get_karplus(float adsr_output);
	void get_envelope();
};

#endif /* SRC_KARPLUS_H_ */
