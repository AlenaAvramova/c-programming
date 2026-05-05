// Write a program that finds a consecutive sequence of numbers in an array
// whose sum is equal to a number entered by the user, if such a sequence exists.
// Example:
// Array: 4 3 1 4 2 5 8
// Target sum: 11
// Output: 4 2 5
#include <stdio.h>

int main() {
    int n, target_sum;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target_sum);

    int found = 0;

    for (int start = 0; start < n; start++) {
        int current_sum = 0;

        for (int end = start; end < n; end++) {
            current_sum += a[end];

            if (current_sum == target_sum) {
                printf("Sequence found: ");
                for (int k = start; k <= end; k++) {
                    printf("%d ", a[k]);
                }
                printf("\n");
                found = 1;
                break;
            }

            if (current_sum > target_sum) {
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        printf("No sequence with sum %d found.\n", target_sum);
    }

    return 0;
}
