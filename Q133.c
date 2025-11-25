// Create an enum for months and print how many days each month has.
#include <stdio.h>
enum Months {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};
int main() {
    enum Months month;
    int days;

    // Print number of days in each month
    for (month = JANUARY; month <= DECEMBER; month++) {
        switch (month) {
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                days = 31;
                break;
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                days = 30;
                break;
            case FEBRUARY:
                days = 28; // Not accounting for leap years
                break;
            default:
                days = 0; // Invalid month
                break;
        }
        printf("Month %d has %d days.\n", month, days);
    }

    return 0;
}