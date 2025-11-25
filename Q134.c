// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main() {
    enum Status currentStatus;

    // Assign a value to currentStatus
    currentStatus = SUCCESS; // You can change this to FAILURE or TIMEOUT to test other cases

    // Print message based on the current status
    switch (currentStatus) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }

    return 0;
}