//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int findRepeatedElement(int arr[], int size) {
    int seen[1000] = {0}; // Assuming the elements are in the range 0-999

    for (int i = 0; i < size; i++) {
        if (seen[arr[i]] == 1) {
            return arr[i]; // Return the repeated element
        }
        seen[arr[i]] = 1; // Mark the element as seen
    }

    return -1; // If no repeated element is found
}
int main() {
    int n;

    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100];

    // Read the elements of the array
    printf("Enter %d integers (one element will be repeated):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the repeated element
    int repeatedElement = findRepeatedElement(arr, n);
    if (repeatedElement != -1) {
        printf("The repeated element is: %d\n", repeatedElement);
    } else {
        printf("No repeated element found.\n");
    }

    return 0;
}