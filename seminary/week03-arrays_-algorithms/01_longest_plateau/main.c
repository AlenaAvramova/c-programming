// In a sorted one-dimensional array, every sequence of equal numbers is called a plateau.
// Write a program that finds the starting index and the length of the longest plateau
// in a given array sorted in ascending order.
// The user enters N and then the elements of the array.
#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements (sorted):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxLen = 1, currLen = 1;
    int startIndex = 0, tempStart = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1]) {
            currLen++;
        } else {
            currLen = 1;
            tempStart = i;
        }

        if(currLen > maxLen) {
            maxLen = currLen;
            startIndex = tempStart;
        }
    }

    printf("Longest plateau starts at index: %d\n", startIndex);
    printf("Length: %d\n", maxLen);

    return 0;
}
