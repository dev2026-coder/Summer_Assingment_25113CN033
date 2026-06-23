#include <stdio.h>

// Helper function to check if an element exists in an array
int isPresent(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return 1;   // found
    }
    return 0;           // not found
}

int main() {
    int n, m;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter %d elements of first array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter %d elements of second array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    // Union array – worst-case size is n + m (if all elements are distinct)
    int unionArr[n + m];
    int unionSize = 0;

    // Copy all elements from first array
    for (int i = 0; i < n; i++) {
        unionArr[unionSize++] = arr1[i];
    }

    // Add elements from second array only if not already present
    for (int i = 0; i < m; i++) {
        if (!isPresent(unionArr, unionSize, arr2[i])) {
            unionArr[unionSize++] = arr2[i];
        }
    }

    // Display the union
    printf("Union of the two arrays: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}