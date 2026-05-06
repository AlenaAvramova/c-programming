/*Write a program that creates a rectangular matrix of size N×M.
The dimensions and values are read from the keyboard. Find the 3×3
submatrix with the maximum sum and print it.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

    printf("Enter N (rows): ");
    scanf("%d", &n);
    printf("Enter M (cols): ");
    scanf("%d", &m);

    if (n < 3 || m < 3) {
        printf("Matrix must be at least 3x3!\n");
        return 1;
    }

    int** mat = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        mat[i] = (int*)malloc(m * sizeof(int));
    }

    printf("Enter the matrix (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);

    int maxSum = 0;
    int startRow = 0, startCol = 0;
    int first = 1;

    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= m - 3; j++) {

            int sum = 0;
            for (int di = 0; di < 3; di++)
                for (int dj = 0; dj < 3; dj++)
                    sum += mat[i + di][j + dj];

            if (first || sum > maxSum) {
                maxSum = sum;
                startRow = i;
                startCol = j;
                first = 0;
            }
        }
    }

    printf("\nMax 3x3 submatrix (sum = %d) at row %d, col %d:\n",
           maxSum, startRow, startCol);

    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
        free(mat[i]);
    free(mat);

    return 0;
}
