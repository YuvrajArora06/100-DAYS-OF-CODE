//wap to calculate the electricity bill based on the following criteria:
//for first 100 units - Rs. 5/unit
//for next 100 units - Rs. 7/unit
//for next 100 units - Rs. 10/unit
//for units above - Rs. 12/unit

#include <stdio.h>
int main() {    
    int units;
    float billAmount;

    // Input number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate bill amount based on units consumed
    if (units <= 100) {
        billAmount = units * 5.0;
    } else if (units <= 200) {
        billAmount = (100 * 5.0) + ((units - 100) * 7.0);
    } else if (units <= 300) {
        billAmount = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
    } else {
        billAmount = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
    }

    // Output the bill amount
    printf("The electricity bill is: %.2f\n", billAmount);

    return 0;
}