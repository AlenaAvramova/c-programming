//Write a function that takes a number and returns the sum of its digits
#include <stdio.h>

int sumDigits(int num)
{
    int sum = 0;

    if(num < 0)
{
    num = num * (-1);
}
    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    return sum;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The sum of digtis of the written number is: %d\n", sumDigits(num));

    return 0;
}
