/*The user enters 10 numbers into a dynamic array.
Then they enter pairs of (number, index) — each number is
inserted at the given index, shifting the rest to the right.
Input stops when the number 0 is entered. Print the final array.*/

#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insertAt(int** arr, int* size, int value, int index) {
    *arr = (int*)realloc(*arr, (*size + 1) * sizeof(int));

    for (int i = *size; i > index; i--) {
        (*arr)[i] = (*arr)[i - 1];
    }

    (*arr)[index] = value;
    (*size)++;
}

int main() {
    int size = 10;

    int* arr = (int*)malloc(size * sizeof(int));

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("\nInitial array: ");
    printArray(arr, size);

    printf("\nEnter pairs (number index). Enter 0 to stop:\n");

    while (1) {
        int number;
        scanf("%d", &number);

        if (number == 0) break;

        int index;
        scanf("%d", &index);

        if (index < 0 || index > size) {
            printf("Invalid index! Must be between 0 and %d\n", size);
            continue;
        }

        insertAt(&arr, &size, number, index);

        printf("After inserting %d at index %d: ", number, index);
        printArray(arr, size);
    }

    printf("\nFinal array: ");
    printArray(arr, size);

    free(arr);
    return 0;
}
