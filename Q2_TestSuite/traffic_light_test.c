#include <stdio.h>
#include "unity/unity.h"
#include "traffic_light.h"


void setUp(void) {
    // Empty fucntion created as linker for Unity needs setUp
}


void tearDown(void) {
    // Same as before, empty fucntion created as linker for Unity needs teardown
}

// Test if initial state is NS_GREEN_EW_RED
void test_initial_state(void) {
    TrafficLightState state = NS_GREEN_EW_RED;
    TEST_ASSERT_EQUAL(NS_GREEN_EW_RED, state);
}

// Test if transition from GREEN is to YELLOW
void test_transition_from_green(void) {
    TrafficLightState state = NS_GREEN_EW_RED;
    state = NS_YELLOW_EW_RED;
    TEST_ASSERT_EQUAL(NS_YELLOW_EW_RED, state);
}

// Test if transition from YELLOW is to RED
void test_transition_from_yellow(void) {
    TrafficLightState state = NS_YELLOW_EW_RED;
    state = NS_RED_EW_GREEN;
    TEST_ASSERT_EQUAL(NS_RED_EW_GREEN, state);
}

// Test if transition from RED is to GREEN
void test_transition_from_red(void) {
    TrafficLightState state = NS_RED_EW_YELLOW;
    state = NS_GREEN_EW_RED;
    TEST_ASSERT_EQUAL(NS_GREEN_EW_RED, state);
}

// Main test runner
int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_initial_state);
    RUN_TEST(test_transition_from_green);
    RUN_TEST(test_transition_from_yellow);
    RUN_TEST(test_transition_from_red);

    return UNITY_END();
}
