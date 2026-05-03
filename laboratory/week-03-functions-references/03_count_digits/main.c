//Count digits in a number with a function


#include <stdio.h>

int countDigits(int n)
{
int count = 0;

while( n != 0)
{
    count++;
    n = n / 10;

}
    return count;
}
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits = %d\n", countDigits(num));

    return 0;
}
