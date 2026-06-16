// Q57 Write a program to Reverse array. 

#include <stdio.h>

void reverseArray(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 34, 7, 56, 23, 89, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array : ");
    printArray(arr, n);

    reverseArray(arr, n);

    printf("Reversed array : ");
    printArray(arr, n);

    return 0;
}