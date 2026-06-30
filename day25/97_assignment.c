#include <stdio.h>

void merge(int a[], int m, int b[], int n, int res[]) {
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] < b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    while (i < m) res[k++] = a[i++];
    while (j < n) res[k++] = b[j++];
}

int main() {
    int a[100], b[100], res[200], m, n;
    printf("Enter size of first sorted array: "); scanf("%d", &m);
    printf("Enter elements: ");
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    printf("Enter size of second sorted array: "); scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    merge(a, m, b, n, res);
    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) printf("%d ", res[i]);
    printf("\n");
    return 0;
}