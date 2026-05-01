/*
Program that reads an integer and prints whether the number
is even or odd.
*/
#include <stdio.h>
int main()
{
    int i;

    printf("Enter an integer: ");
    scanf("%d", &i);

    if (i % 2 == 0)
    {
        printf("%d is even number\n", i);
    }

    else
    {
        printf("%d is odd number\n", i);
    }
    return 0;
}
