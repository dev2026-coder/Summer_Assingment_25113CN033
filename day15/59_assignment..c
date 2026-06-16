// Q59 Write a program to Rotate array right

#include <stdio.h>

// Helper function to reverse a segment of the array from index 'start' to 'end' (inclusive)
void reverse(int nums[], int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

// Rotate array 'nums' of length 'n' to the right by 'k' steps
void rotateRight(int nums[], int n, int k) {
    if (n == 0) return;                // empty array – nothing to do
    k = k % n;                         // handle cases where k >= n
    if (k == 0) return;                // no rotation needed

    // 1. Reverse the whole array
    reverse(nums, 0, n - 1);
    // 2. Reverse the first k elements
    reverse(nums, 0, k - 1);
    // 3. Reverse the remaining n-k elements
    reverse(nums, k, n - 1);
}

// Example usage
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Original array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    rotateRight(arr, n, k);

    printf("After rotating right by %d: ", k);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}