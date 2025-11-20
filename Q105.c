// Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>
int findMajorityElement(int nums[], int size) {
    int count = 0;
    int candidate = -1;

    // Boyer-Moore Voting Algorithm to find a candidate for majority element
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verify if the candidate is actually the majority element
    count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > size / 2) {
        return candidate; // Majority element found
    } else {
        return -1; // No majority element
    }
}

int main() {
    int nums[100], size;

    // Read size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Read elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    // Find the majority element
    int majorityElement = findMajorityElement(nums, size);

    // Print the result
    printf("Majority element: %d\n", majorityElement);

    return 0;
}