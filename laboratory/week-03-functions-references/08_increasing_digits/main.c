//Check if digits are increasing + modify (reference)
#include <stdio.h>

void checkOrder(int n, int *isIncreasing)
{
    n = (n < 0) ? -n : n;
    int lastDigit = 10;
    *isIncreasing = 1;

    while (n > 0)
    {
        int currentDigit = n % 10;

        if (currentDigit > lastDigit)
        {
            *isIncreasing = 0;
            break;
        }

        lastDigit = currentDigit;
        n /= 10;
    }
}

void modifyNumber(int *n)
{
    int temp = (*n < 0) ? -*n : *n;
    int newNum = 0;

    while (temp > 0)
    {
        newNum = newNum * 10 + (temp % 10);
        temp /= 10;
    }

    *n = newNum;
}

int main()
{
    int N, result;

    printf("Enter N: ");
    scanf("%d", &N);

    checkOrder(N, &result);

    if (result == 1)
    {
        printf("%d -> yes\n", N);
    }
    else
    {
        printf("%d -> no\n", N);

        modifyNumber(&N);
        printf("Modified number: %d\n", N);
    }

    return 0;
}
