/*Given a 2D array of size N×M filled with integers.
Find the element whose sum of neighbors is the largest.
A neighbor is any element that is adjacent horizontally,
vertically, or diagonally at a distance of at most 1 cell.*/

#include <stdio.h>

#define MAX 100

int neighborSum(int arr[MAX][MAX], int n, int m, int row, int col) {
    int sum = 0;

    for (int di = -1; di <= 1; di++) {
        for (int dj = -1; dj <= 1; dj++) {
            if (di == 0 && dj == 0) continue;

            int ni = row + di;
            int nj = col + dj;

            if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                sum += arr[ni][nj];
            }
        }
    }

    return sum;
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

    int bestRow = 0, bestCol = 0;
    int bestSum = neighborSum(arr, n, m, 0, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int s = neighborSum(arr, n, m, i, j);
            if (s > bestSum) {
                bestSum = s;
                bestRow = i;
                bestCol = j;
            }
        }
    }

    printf("Element with largest neighbor sum:\n");
    printf("Value: %d at position [%d][%d]\n", arr[bestRow][bestCol], bestRow, bestCol);
    printf("Neighbor sum: %d\n", bestSum);

    return 0;
}
