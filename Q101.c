//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>
void findFirstAndLastOccurrence(int nums[], int size, int target, int *first, int *last) {
    *first = -1;
    *last = -1;

    // Find first occurrence
    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            *first = i;
            break;
        }
    }

    // Find last occurrence
    for (int i = size - 1; i >= 0; i--) {
        if (nums[i] == target) {
            *last = i;
            break;
        }
    }
}
int main() {
    int nums[100], size, target;
    int first, last;

    // Read size of the array
    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    // Read elements of the sorted array
    printf("Enter %d elements of the sorted array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    // Read the target value
    printf("Enter the target value: ");
    scanf("%d", &target);

    // Find first and last occurrence
    findFirstAndLastOccurrence(nums, size, target, &first, &last);

    // Print the result
    printf("First and Last occurrence of %d: %d, %d\n", target, first, last);

    return 0;
}