/*
Given a matrix N×M filled with integers.
Swap the rows that contain the largest and
smallest elements of the entire matrix.*/
#include <stdio.h>

#define MAX 100

void swapRows(int arr[MAX][MAX], int m, int r1, int r2) {
    for (int j = 0; j < m; j++) {
        int temp = arr[r1][j];
        arr[r1][j] = arr[r2][j];
        arr[r2][j] = temp;
    }
}

void printMatrix(int arr[MAX][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%4d", arr[i][j]);
        printf("\n");
    }
}

int main() {
    int n, m;

    printf("Enter N (rows): ");
    scanf("%d", &n);
    printf("Enter M (cols): ");
    scanf("%d", &m);

    int arr[MAX][MAX];

    printf("Enter the matrix (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);

    // Find global min and max and their rows
    int minVal = arr[0][0], maxVal = arr[0][0];
    int minRow = 0, maxRow = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
                minRow = i;
            }
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
                maxRow = i;
            }
        }
    }

    printf("\nLargest element: %d at row %d\n", maxVal, maxRow);
    printf("Smallest element: %d at row %d\n", minVal, minRow);

    // Swap the two rows
    swapRows(arr, m, minRow, maxRow);

    printf("\nMatrix after swapping rows %d and %d:\n", minRow, maxRow);
    printMatrix(arr, n, m);

    return 0;
}
