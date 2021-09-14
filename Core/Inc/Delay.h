/*
 * Delay.h
 *
 *  Created on: Sep 13, 2021
 *      Author: michalb
 */

#ifndef SRC_DELAY_H_
#define SRC_DELAY_H_

#include "stdint.h"

class Delay {
public:
	Delay();
	virtual ~Delay();

	float delta = 0.5f;
	float feedback = 0.6f;

	const uint16_t size = 20000;

	uint16_t buffer[20000];

	float cursor = 0.0f;

	float lastout1 = 0.0f;
	float lastout2 = 0.0f;
	float lastout3 = 0.0f;

	float y = 0.0f;

	uint16_t out = 0;

	void process(uint16_t x);




};

#endif /* SRC_DELAY_H_ */
