#include <stdio.h>
#include <stdbool.h>

#define MAX 10

bool isSymmetric(int mat[MAX][MAX], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (mat[i][j] != mat[j][i])
                return false;
    return true;
}

int main() {
    int mat[MAX][MAX], n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    if (isSymmetric(mat, n))
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is NOT symmetric.\n");

    return 0;
}