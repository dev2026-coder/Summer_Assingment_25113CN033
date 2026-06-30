#include <stdio.h>

#define MAX 10

void columnWiseSum(int mat[MAX][MAX], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++)
            sum += mat[i][j];
        printf("Sum of column %d = %d\n", j + 1, sum);
    }
}

int main() {
    int mat[MAX][MAX], rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    columnWiseSum(mat, rows, cols);
    return 0;
}