// Q58 Write a program to Rotate array left. 

#include <stdio.h>

/* Rotate array left by d positions using Reversal Algorithm */

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp   = arr[start];
        arr[start] = arr[end];
        arr[end]   = temp;
        start++;
        end--;
    }
}

void rotateLeft(int arr[], int n, int d) {
    d = d % n;          /* handle d >= n */
    if (d == 0) return;

    reverse(arr, 0, d - 1);   /* Step 1: reverse first d elements  */
    reverse(arr, d, n - 1);   /* Step 2: reverse remaining elements */
    reverse(arr, 0, n - 1);   /* Step 3: reverse entire array       */
}

void printArray(int arr[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf(" ]\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3;   /* rotate left by 3 positions */

    printf("Original array  : ");
    printArray(arr, n);

    rotateLeft(arr, n, d);

    printf("After rotating left by %d: ", d);
    printArray(arr, n);

    return 0;
}