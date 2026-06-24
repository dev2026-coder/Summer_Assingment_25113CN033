// Q75 Write a program to Transpose matrix.

#include <stdio.h>

int main() {
    int rows, cols;

    // Input dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Declare original matrix (C99 variable-length array)
    int mat[rows][cols];

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Declare transposed matrix – dimensions are swapped
    int trans[cols][rows];

    // Compute transpose: trans[j][i] = mat[i][j]
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    // Display transposed matrix
    printf("\nTransposed matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}