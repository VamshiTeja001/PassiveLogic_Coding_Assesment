#include "traffic_light.h"  
#include "stdio.h"

// Wait times as defined in traffic_light.h : Green Time 5 Seconds, Yellow Time 2 seconds

// State Machine to print the Current State of Traffic Lights
void print_state(TrafficLightState state) {
    switch (state) {
        case NS_GREEN_EW_RED:
            printf("North-South: GREEN  --- East-West: RED\n");  
            break;
        case NS_YELLOW_EW_RED:
            printf("North-South: YELLOW --- East-West: RED\n");
            break;
        case NS_RED_EW_GREEN:
            printf("North-South: RED    --- East-West: GREEN\n");
            break;
        case NS_RED_EW_YELLOW:
            printf("North-South: RED    --- East-West: YELLOW\n");
            break;
    }
}

// State Machine to run and transistion the traffic light 
void run_traffic_light(int cycles) {
    TrafficLightState state = NS_GREEN_EW_RED;

    for (int i = 0; i < cycles; i++) {
        print_state(state);
        switch (state) {
            case NS_GREEN_EW_RED:  // Turn Green on North South line and Red on East West line
                sleep(GREEN_TIME); // Wait 5 seconds
                state = NS_YELLOW_EW_RED; // Transition to next state
                break;
            case NS_YELLOW_EW_RED: // Turn Yellow on North South line and keep Red on East West line
                sleep(YELLOW_TIME); // Wait 2 seconds
                state = NS_RED_EW_GREEN; // Transition to next state
                break;
            case NS_RED_EW_GREEN: // Turn Red on North South line and Green on East West line
                sleep(GREEN_TIME); // Wait 5 seconds
                state = NS_RED_EW_YELLOW; // Transition to next state
                break;
            case NS_RED_EW_YELLOW: // Keep Red on North South line and turn Yellow on East West line
                sleep(YELLOW_TIME); //Wait 2 seconds
                state = NS_GREEN_EW_RED; // Transition to next state
                break;
        }
    }
}
