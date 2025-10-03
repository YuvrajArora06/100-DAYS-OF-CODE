//wap to calculate library fine based on the late days as follows
//for first 5 days - Rs.2/day
//for next 5 days - Rs.4/day
//for next 20 days - Rs.6/day
//after 30 days - membership cancelled

#include <stdio.h>
int main() {    
    int lateDays;
    int fine = 0;

    // Input number of late days
    printf("Enter the number of late days: ");
    scanf("%d", &lateDays);

    // Calculate fine based on late days
    if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("The fine is: Rs.%d\n", fine);
    } else if (lateDays <= 10) {
        fine = (5 * 2) + ((lateDays - 5) * 4);
        printf("The fine is: Rs.%d\n", fine);
    } else if (lateDays <= 30) {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
        printf("The fine is: Rs.%d\n", fine);
    } else {
        printf("Membership cancelled.\n");
    }

    return 0;
}