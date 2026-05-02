#include <stdio.h>
/*
Write a function that takes two numbers and returns
their Greatest Common Divisor (GCD).

Example:
GCD(48, 18) = 6
*/
int gcd(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int a;
    int b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d\n", gcd(a, b));

    return 0;
}
