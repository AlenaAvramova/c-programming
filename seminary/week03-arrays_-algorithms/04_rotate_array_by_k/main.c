// Write a program that receives a sequence of N integers.
// Then the user enters an integer K.
// Shift all elements of the sequence by K positions using rotation:
// when an element moves past the last position, it goes to the first position.
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements (N): ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter shift positions (K): ");
    scanf("%d", &k);

    k = k % n;

    for (int rotation = 0; rotation < k; rotation++) {

        int temp = a[n - 1];

        for (int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }

        a[0] = temp;
    }

    printf("Result after shift:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
