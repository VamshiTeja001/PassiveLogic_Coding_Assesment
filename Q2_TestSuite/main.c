// Coding assessment for Passive logic Platform Embedded Engineer
// Raghavendra Chathurajupalli 

#include "traffic_light.h"
#include "stdio.h"

int main() {
    int cycles = 5;  // Number of traffic light cycles, increase as necessary
    

    printf("Traffic Light System Simulation\n");
    run_traffic_light(cycles); //  process function defined in traffic_light.c file, in which the state machines are present.
    printf("Simulation Ended.\n");
    return 0;
}
