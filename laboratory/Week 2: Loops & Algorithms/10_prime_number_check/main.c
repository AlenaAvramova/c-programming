#include <stdio.h>

/*
Write a function that takes an integer and returns:
1 if the number is prime
0 if the number is not prime.

Example:
Input: 7  -> Output: 1
Input: 10 -> Output: 0
*/

int isPrime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i*i<= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d\n", isPrime(num));

    return 0;
}
