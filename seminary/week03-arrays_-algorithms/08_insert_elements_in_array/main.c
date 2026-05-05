// The user enters 10 numbers into an array with a capacity of 20 elements.
// Then the user enters pairs: a number and the index where this number should be inserted.
// The inserted number shifts the remaining elements to the right.
// Input stops when the user enters 0 or when the array becomes full.
//
// Example:
// Initial data: 5 1 3 6 2 6
// Insertions:
// 77 0
// 33 2
// 88 5
// 0
// Output: 77 5 33 1 3 88 6 2 6
#include <stdio.h>

int main() {
    int arr[20];
    int n = 10;

    printf("Enter 10 initial numbers:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(n < 20) {
        int value;
        printf("Enter value (0 to stop): ");
        scanf("%d", &value);

        if(value == 0) break;

        int pos;
        printf("Enter position: ");
        scanf("%d", &pos);

        if(pos < 0 || pos > n) {
            printf("Invalid position!\n");
            continue;
        }

        for(int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[pos] = value;
        n++;
    }

    printf("Final array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
