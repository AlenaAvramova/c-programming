// Write a program that finds the longest sequence of consecutive equal elements
// in an array and prints it.
//
// Example:
// Input: 2 1 1 2 3 3 2 2 2 1
// Output: 2 2 2
//
// Scan the array. Every time the current number is different from the next one,
// a new sequence starts. Every time the current number is equal to the next one,
// it continues the current sequence.
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int currentLength = 1;
    int bestLength = 1;

    int bestStart = 0;
    int currentStart = 0;

    for (int i = 1; i < n; i++) {

        if (arr[i] == arr[i - 1]) {
            currentLength++;
        } else {
            currentLength = 1;
            currentStart = i;
        }

        if (currentLength > bestLength) {
            bestLength = currentLength;
            bestStart = currentStart;
        }
    }

    printf("Longest sequence: ");
    for (int i = bestStart; i < bestStart + bestLength; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
