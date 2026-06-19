// Q64 Write a program to Remove duplicates from 
// array. 

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Remove duplicates
    int result[n];
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == result[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            result[newSize] = arr[i];
            newSize++;
        }
    }

    // Print original array
    printf("\nOriginal Array:  ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Print result array
    printf("\nAfter Removing Duplicates: ");
    for (int i = 0; i < newSize; i++)
        printf("%d ", result[i]);

    printf("\nNew size: %d\n", newSize);

    return 0;
}

