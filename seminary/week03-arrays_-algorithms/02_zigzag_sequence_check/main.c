// Write a program that checks whether the elements of the sequence a0, a1, ..., an
// satisfy the relations: a0 < a1 > a2 < a3 > ...
// The user enters N and then the elements of the sequence.
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int isZigZag = 1;

    for (int i = 0; i < n - 1; i++) {

        if (i % 2 == 0) {
            if (a[i] >= a[i+1]) {
                isZigZag = 0;
                break;
            }

        } else {
            if (a[i] <= a[i+1]) {
                isZigZag = 0;
                break;
            }
        }
    }

    if (isZigZag == 1) {
        printf("The sequence satisfies the zig-zag condition!\n");
    } else {
        printf("The sequence DOES NOT satisfy the zig-zag condition!\n");
    }

    return 0;
}
