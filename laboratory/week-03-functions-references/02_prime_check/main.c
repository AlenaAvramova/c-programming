//Check if a number is prime
#include <stdio.h>

int isPrime(int num)
{
    int i;

     if(num < 2)
    {
        return 0;
    }

    for(i = 2; i < num ; i++)
    {
        if (num % i == 0)
        {
           return 0;
        }
    }
    return 1;

}
int main()
{
    int num;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num);



    result = isPrime(num);

    printf("%d\n", result);

    return 0;
}
