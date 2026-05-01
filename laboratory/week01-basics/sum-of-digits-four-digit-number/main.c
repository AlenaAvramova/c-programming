/*
Program that reads a four-digit integer from the keyboard
and calculates the sum of its digits without using a loop.
*/
#include <stdio.h>

int main()
{
    int num;

    printf("Enter four digits number: \n");
    scanf("%d", &num);

    int d1 = num /1000;
    int d2 = (num /100)%10;
    int d3 = (num /10)%10;
    int d4 = num%10;

    int sum = d1 + d2 + d3 + d4;

    printf("Sum of digits: %d\n", sum);



    return 0;
}
