// Task 5:
// Given a main matrix A[m][n] and a smaller matrix B[p][q],
// write a program that checks whether B exists as a submatrix in A.
// All elements of B must appear in the same arrangement inside A.
// If found, print the starting row and column of B in A.
#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter dimensions of matrix A (m n): ");
    scanf("%d %d", &m, &n);
    int A[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter dimensions of matrix B (p q): ");
    scanf("%d %d", &p, &q);
    int B[p][q];
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int found = 0;
    for (int i = 0; i <= m - p; i++) {
        for (int j = 0; j <= n - q; j++) {
            int match = 1;
            for (int bi = 0; bi < p; bi++) {
                for (int bj = 0; bj < q; bj++) {
                    if (A[i + bi][j + bj] != B[bi][bj]) {
                        match = 0;
                        break;
                    }
                }
                if (!match) break;
            }
            if (match) {
                printf("Matrix B is contained in A, starting at row %d, column %d.\n", i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Matrix B is NOT contained in A.\n");
    }

    return 0;
}
