// Q76 Write a program to Find diagonal sum.

#include <stdio.h>

int main() {
    int n;

    // Input size (must be a square matrix)
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n];   // variable‑length array (C99)

    // Input matrix elements
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Compute sum of main diagonal
    int diagSum = 0;
    for (int i = 0; i < n; i++) {
        diagSum += mat[i][i];
    }

    printf("Sum of main diagonal = %d\n", diagSum);

    return 0;
}