// Patrick Musau
// 4-2014
// Simulate Header for plotting

#ifndef SIMULATE_H_
#define SIMULATE_H_

#include "dynamics_bicycle_model.h"
#include "geometry.h"
#include "main.h"
#include <stdbool.h>


extern double maxTime;

// simulate dynamics using Euler's method
void simulate_bicycle_plots(REAL point[NUM_DIMS], REAL heading_input, REAL throttle,
			  REAL stepSize,
			  bool (*shouldStop)(REAL state[NUM_DIMS], REAL simTime, void* p),
			  void* param);

#endif