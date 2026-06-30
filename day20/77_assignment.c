#include <stdio.h>

#define MAX 10

void multiplyMatrix(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m, n, p;

    printf("Enter rows and columns of A (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter columns of B (p): ");
    scanf("%d", &p);

    printf("Enter elements of A (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of B (%dx%d):\n", n, p);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    multiplyMatrix(A, B, C, m, n, p);

    printf("Resultant Matrix (%dx%d):\n", m, p);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}