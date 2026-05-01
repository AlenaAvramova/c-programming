/*
Program that reads an integer and prints its digits
in reverse order.
*/

#include <stdio.h>

int main()
{
    int i;
    printf("enter an integer: \n");
    scanf("%d",&i);

    while (i != 0)
    {
        printf("%d", i % 10);
        i = i/10;
    }
    printf("\n");
    return 0;
}
