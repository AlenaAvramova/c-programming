
/*
Program that reads three numbers and prints the largest
of the three.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    int max;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &x, &y,&z);

    max = x;

    if (y > max)
        max = y;

    if (z > max)
        max = z;

    printf("The largest number is: %d\n", max);

    return 0;
}
