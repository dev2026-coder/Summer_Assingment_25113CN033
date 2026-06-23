#include <stdio.h>

int isPresent(int arr[], int size, int key) {
    for (int i = 0; i < size; i++)
        if (arr[i] == key) return 1;
    return 0;
}

int main() {
    int n, m;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter %d elements: ", m);
    for (int i = 0; i < m; i++) scanf("%d", &arr2[i]);

    int inter[(n < m) ? n : m];   // ✅ fixed
    int interSize = 0;

    for (int i = 0; i < n; i++) {
        if (isPresent(arr2, m, arr1[i]) && !isPresent(inter, interSize, arr1[i]))
            inter[interSize++] = arr1[i];
    }

    printf("Intersection: ");
    if (interSize == 0) printf("(empty)");
    else for (int i = 0; i < interSize; i++) printf("%d ", inter[i]);
    printf("\n");
    return 0;
}