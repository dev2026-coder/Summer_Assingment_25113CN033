// Q60 Write a program to Move zeroes to end.

#include <stdio.h>

// Moves all zeros to the end of the array, preserving order of non-zeros
void moveZeroes(int nums[], int n) {
    int pos = 0;  // position to write the next non-zero element

    // First pass: shift all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[pos++] = nums[i];
        }
    }

    // Second pass: fill the remaining positions with zeros
    while (pos < n) {
        nums[pos++] = 0;
    }
}

// Example usage
int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    moveZeroes(arr, n);

    printf("After moving zeroes: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}