// Find the sum of array elements.
#include <stdio.h>

int main() {
    int arr[100], n, sum = 0;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("Sum of the elements: %d\n", sum);

    return 0;
}
