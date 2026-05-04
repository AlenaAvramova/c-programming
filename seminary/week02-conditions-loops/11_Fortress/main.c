// Task 11
// Write a program that reads an integer n and draws a fortress
// with width 2*n columns and height n rows.
// The left and right towers are n/2 wide.
// Print the fortress using ASCII characters as shown in the examples.
#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    printf("/");
    for (i = 0; i < n / 2; i++)
        printf("^");
    printf("\\");
    for (i = 0; i < 2 * n - 2 * (n / 2) - 4; i++)
        printf("_");
    printf("/");
    for (i = 0; i < n / 2; i++)
        printf("^");
    printf("\\\n");

    for (i = 0; i < n - 2; i++)
    {
        printf("|");

        if (i == n / 2 - 1)
        {
            for (j = 0; j < n / 2 + 1; j++)
                printf(" ");
            for (j = 0; j < 2 * n - 2 * (n / 2) - 4; j++)
                printf("_");
            for (j = 0; j < n / 2 + 1; j++)
                printf(" ");
        }
        else
        {
            for (j = 0; j < 2 * n - 2; j++)
                printf(" ");
        }

        printf("|\n");
    }

    printf("\\");
    for (i = 0; i < n / 2; i++)
        printf("_");
    printf("/");
    for (i = 0; i < 2 * n - 2 * (n / 2) - 4; i++)
        printf(" ");
    printf("\\");
    for (i = 0; i < n / 2; i++)
        printf("_");
    printf("/\n");

    return 0;
}
