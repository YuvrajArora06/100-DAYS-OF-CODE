// Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
#include <stdio.h>
void findTwoSumIndices(int nums[], int size, int target, int *index1,
                        int *index2) {
        *index1 = -1;
        *index2 = -1;
    
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] == target) {
                    *index1 = i;
                    *index2 = j;
                    return; // Return as soon as we find the first valid pair
                }
            }
        }
    }
int main() {
    int nums[100], size, target;
    int index1, index2;
    // Read size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Read elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    // Read the target value
    printf("Enter the target value: ");
    scanf("%d", &target);
    // Find two sum indices
    findTwoSumIndices(nums, size, target, &index1, &index2);
    // Print the result
    printf("Indices of the two numbers that add up to %d: %d %d\n", target,
           index1, index2);
    return 0;
}