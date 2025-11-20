// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
int maxSumOfSubarrays(int arr[], int size, int k) {
    int maxSum = 0;

    // Calculate the sum of the first subarray of size k
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int currentSum = maxSum;

    // Slide the window over the array
    for (int i = k; i < size; i++) {
        currentSum += arr[i] - arr[i - k]; // Add next element and remove the first element of the previous window
        if (currentSum > maxSum) {
            maxSum = currentSum; // Update maxSum if currentSum is greater
        }
    }

    return maxSum;
}