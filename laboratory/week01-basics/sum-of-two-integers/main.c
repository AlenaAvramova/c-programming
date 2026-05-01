/*
Program that reads two integers from the user and prints their sum.
*/
#include <stdio.h>

int main()
{
    int c;
    int z;

    printf("Enter two integers: ");
    scanf("%d %d", &c, &z);

    printf("The sum of %d and %d is: %d\n", c, z, c + z);
    return 0;
}
