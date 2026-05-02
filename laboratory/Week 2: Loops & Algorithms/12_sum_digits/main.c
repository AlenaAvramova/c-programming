/*Write a function that takes a number and returns the sum of its digits.

Example:
Input: 234
Output: 9 (2 + 3 + 4)*/

#include <stdio.h>

int sumDigits(int n){
    int sum = 0;
    while (n > 0)
        {
            sum += n % 10;
            n = n / 10;
    }
    return sum;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The sum of digits in %d is %d.", num, sumDigits(num));

    return 0;
}
