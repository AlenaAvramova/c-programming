// Task 1:
// Write a program that creates an N x N matrix and fills it with numbers.
// - Print the elements on the main diagonal
// - Print the elements on the secondary diagonal
// - Print the elements above the main diagonal
// - Print the elements below the main diagonal
#include <stdio.h>

int main() {
    int n;
    printf("Enter matrix size (N x N): ");
    scanf("%d", &n);

    int matrix[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMain Diagonal: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }

    printf("\nSecondary Diagonal: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - 1 - i]);
    }

    printf("\nElements above Main Diagonal: ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j > i) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\nElements below Main Diagonal: ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i > j) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}
