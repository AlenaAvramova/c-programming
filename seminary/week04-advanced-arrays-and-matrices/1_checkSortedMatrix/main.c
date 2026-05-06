/*Given a 2D array of size N×M filled with integers.
 Check whether every row contains numbers sorted in ascending order,
  and every column contains numbers sorted in descending order.*/

#include <stdio.h>

#define MAX 100

int checkMatrix(int arr[MAX][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (arr[i][j] >= arr[i][j + 1]) {
                return 0;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i][j] <= arr[i + 1][j]) {
                return 0;
            }
        }
    }

    return 1;
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

    if (checkMatrix(arr, n, m))
        printf("YES - rows are ascending and columns are descending.\n");
    else
        printf("NO - conditions are not met.\n");

    return 0;
}
