//Print all enum names and integer values using a loop.
#include <stdio.h>
enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};

int main() {
    enum Colors color;

    printf("Colors and their integer values:\n");
    for (color = RED; color <= ORANGE; color++) {
        switch (color) {
            case RED:
                printf("RED: %d\n", color);
                break;
            case GREEN:
                printf("GREEN: %d\n", color);
                break;
            case BLUE:
                printf("BLUE: %d\n", color);
                break;
            case YELLOW:
                printf("YELLOW: %d\n", color);
                break;
            case ORANGE:
                printf("ORANGE: %d\n", color);
                break;
        }
    }

    return 0;
}