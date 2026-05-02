#include <stdio.h>

/*
Write a function that takes a number and returns
the number of digits in it.

Example:
12345 -> 5 digits
*/
 int countDigits (int n)
 {
     int count = 0;
     while (n != 0)
     {
         n = n / 10;
         count++;

     }
     return count;
 }
}
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of digits: %d\n", countDigits(num));
    return 0;
}
