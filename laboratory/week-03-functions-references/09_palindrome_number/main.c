//Make number palindrome by adding 1 (reference)
#include <stdio.h>
#include <stdio.h>

int isPalindrome(int n)
{
    int original = n;
    int reversed = 0;
    int temp = (n < 0) ? -n : n;

    while (temp > 0)
    {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }

    return original == reversed;
}

void makePalindrome(int *n)
{
    while (!isPalindrome(*n))
    {
        (*n)++;
    }
}

int main()
{
    int N;

    printf("Enter a positive integer N: ");
    if (scanf("%d", &N) != 1 || N < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    makePalindrome(&N);

    printf("The palindrome value is: %d\n", N);

    return 0;
}
