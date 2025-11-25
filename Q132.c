// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};
int main() {
    enum TrafficLight light;

    // Assign a value to the traffic light
    light = RED; // You can change this to YELLOW or GREEN to test other cases

    // Print action based on the traffic light color
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light color\n");
            break;
    }

    return 0;
}