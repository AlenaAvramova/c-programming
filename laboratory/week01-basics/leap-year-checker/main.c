/*
Program that reads a year and checks whether it is a leap year.
*/
#include <stdio.h>

//the condition for leap year is it can be divided by 4, cannot be divided by 100, but can be divided by 400

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf ("%d is not a leap year\n",year);
    }


    return 0;
}
