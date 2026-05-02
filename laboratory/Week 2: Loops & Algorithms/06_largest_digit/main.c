#include <stdio.h>

/*
Enter a number N and find the largest digit in it.

Example:
N = 39572
Largest digit = 9
*/

int main()
{
    int N;
    int digit;
    int max_digit = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    while (N > 0)
    {
        digit = N % 10;

        if (digit > max_digit)
        {
            max_digit = digit;
        }

        N = N / 10;
    }

    printf("The largest digit is: %d\n", max_digit);

    return 0;
}
