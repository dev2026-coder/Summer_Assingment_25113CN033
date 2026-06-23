#include <stdio.h>

// Helper function: checks if 'key' exists in 'arr' of given 'size'
int exists(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return 1;   // found
    }
    return 0;           // not found
}

int main() {
    int n, m;

    // --- Input first array ---
    printf("Enter size of first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // --- Input second array ---
    printf("Enter size of second array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter %d elements: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    // --- Find common elements ---
    // Maximum possible common elements = min(n, m)
    int common[m < n ? m : n];   // variable‑length array (C99)
    int commonSize = 0;

    for (int i = 0; i < n; i++) {
        // If arr1[i] exists in arr2 AND not already added to common
        if (exists(arr2, m, arr1[i]) && !exists(common, commonSize, arr1[i])) {
            common[commonSize++] = arr1[i];
        }
    }

    // --- Print result ---
    printf("Common elements: ");
    if (commonSize == 0) {
        printf("(none)");
    } else {
        for (int i = 0; i < commonSize; i++) {
            printf("%d ", common[i]);
        }
    }
    printf("\n");

    return 0;
}