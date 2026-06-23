// Q71 Write a program to Binary search. 

#include <stdio.h>

// Iterative binary search
int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // avoid overflow

        if (arr[mid] == key)
            return mid;          // found
        else if (arr[mid] < key)
            left = mid + 1;      // search in right half
        else
            right = mid - 1;     // search in left half
    }
    return -1;   // not found
}

int main() {
    int n, key;

    printf("Enter number of elements (sorted array): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int index = binarySearch(arr, n, key);

    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}