// Q73 Write a program to Add matrices. 

#include <stdio.h>

int main() {
    int rows, cols;

    // Get matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Declare matrices (C99 variable-length arrays)
    int mat1[rows][cols];
    int mat2[rows][cols];
    int sum[rows][cols];

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("mat1[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("mat2[%d][%d] = ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Compute sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Display sum matrix
    printf("\nSum of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}