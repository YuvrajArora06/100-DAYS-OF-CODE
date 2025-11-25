// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int findMissingNumber(int arr[], int size) {
    int total = size * (size + 1) / 2; // Sum of first n natural numbers
    int sum = 0;

    // Calculate the sum of the elements in the array
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // The missing number is the difference between the total and the sum
    return total - sum;
}   
int main() {
    int n;

    // Read the size of the array
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[100];

    // Read the elements of the array
    printf("Enter %d integers between 0 to %d (one number will be missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the missing number
    int missingNumber = findMissingNumber(arr, n - 1);
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}