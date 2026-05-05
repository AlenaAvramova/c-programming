// Write a program that receives an array of N elements and reverses the order
// of its elements.
// Print the newly obtained array.
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++) {
                int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("\nReversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
