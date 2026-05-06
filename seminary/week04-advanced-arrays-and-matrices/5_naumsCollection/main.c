/*Naum is writing software for small children that supports the following commands:

add(x) — add element X to the current collection
delete(x) — delete all occurrences of element X
smallest(x) — print the X-th smallest number from the current collection*/

#include <stdio.h>

#define MAX 1000000

int arr[MAX];
int size = 0;

// Simple sort (needed for smallest)
void sortArray() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Command 1: add x
void add(int x) {
    arr[size] = x;
    size++;
    printf("Added %d.\n", x);
}

// Command 2: delete all occurrences of x
void deleteAll(int x) {
    int newSize = 0;
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            found = 1;       // skip it = delete it
        } else {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    if (found)
        printf("Deleted all occurrences of %d.\n", x);
    else
        printf("Element %d not found.\n", x);
    size = newSize;
}

// Command 3: print the X-th smallest number
void smallest(int x) {
    if (x < 1 || x > size) {
        printf("Invalid: only %d element(s) in collection.\n", size);
        return;
    }
    sortArray();
    // after sorting, x-th smallest is just index x-1
    printf("The %d-th smallest number is: %d\n", x, arr[x - 1]);
}

int main() {
    int command, x;

    printf("=== Naum's Software ===\n");
    printf("1 x -> add(x)\n");
    printf("2 x -> delete(x)\n");
    printf("3 x -> smallest(x)\n");
    printf("0   -> exit\n\n");

    while (1) {
        printf("Enter command: ");
        scanf("%d", &command);

        if (command == 0) break;

        scanf("%d", &x);

        if (command == 1) {
            add(x);
        } else if (command == 2) {
            deleteAll(x);
        } else if (command == 3) {
            smallest(x);
        } else {
            printf("Unknown command.\n");
        }
    }

    return 0;
}
