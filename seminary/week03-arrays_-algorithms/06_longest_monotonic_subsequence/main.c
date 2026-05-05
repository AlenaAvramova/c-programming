// Given a sequence of numbers, write a program that finds and prints
// the longest monotonically increasing or decreasing consecutive subsequence.
#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int incLen = 1, decLen = 1;
    int maxLen = 1;
    int start = 0, tempStart = 0;
    int type = 0;

    for(int i = 1; i < n; i++) {

        if(arr[i] > arr[i - 1]) {
            incLen++;
            decLen = 1;
            tempStart = i - incLen + 1;

            if(incLen > maxLen) {
                maxLen = incLen;
                start = tempStart;
                type = 1;
            }
        }
        else if(arr[i] < arr[i - 1]) {
            decLen++;
            incLen = 1;
            tempStart = i - decLen + 1;

            if(decLen > maxLen) {
                maxLen = decLen;
                start = tempStart;
                type = -1;
            }
        }
        else {
            incLen = decLen = 1;
        }
    }

    printf("Longest subsequence: ");
    for(int i = start; i < start + maxLen; i++) {
        printf("%d ", arr[i]);
    }

    if(type == 1)
        printf("\nType: Increasing\n");
    else if(type == -1)
        printf("\nType: Decreasing\n");
    else
        printf("\nType: Equal/Single\n");

    return 0;
}
