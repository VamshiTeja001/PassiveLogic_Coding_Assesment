#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // For sleep()

// Define traffic light states
typedef enum {
    NS_GREEN_EW_RED,
    NS_YELLOW_EW_RED,
    NS_RED_EW_GREEN,
    NS_RED_EW_YELLOW
} TrafficLightState;

// Define time delays (in seconds)
#define GREEN_TIME 5
#define YELLOW_TIME 2

// Function prototypes
void print_state(TrafficLightState state);
void run_traffic_light(int cycles);

#endif
