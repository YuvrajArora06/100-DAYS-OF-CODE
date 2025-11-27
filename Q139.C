// Show that enums store integers by printing assigned values.

#include <stdio.h>
enum SampleEnum {
    FIRST = 10,
    SECOND = 20,
    THIRD = 30
};

int main() {
    printf("FIRST: %d\n", FIRST);
    printf("SECOND: %d\n", SECOND);
    printf("THIRD: %d\n", THIRD);

    return 0;
}   