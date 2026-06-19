// Q61 Write a program to Find missing number in 
// array.

#include <stdio.h>

int findMissing(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5; // numbers from 1 to 5
    int missing = findMissing(arr, n);
    printf("Missing number is: %d\n", missing);
    return 0;
}