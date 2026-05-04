// Task 3:
// Given a square matrix n x n, create a new matrix that is obtained
// by rotating the original matrix 90 degrees clockwise.

#include <stdio.h>

int main() {
    int n;
    printf("Enter matrix size N: ");
    scanf("%d", &n);

    int A[n][n];
    int B[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[j][n - 1 - i] = A[i][j];
        }
    }

    printf("\nMatrix after 90 degrees clockwise rotation:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
