#include <stdio.h>

int main()
{
    int num;
    double bonus = 0.0;

    scanf("%d", &num);

    if (num <= 100)
    {
        bonus = 5;
    }
    else if (num <= 1000)
    {
        bonus = num * 0.2;
    }
    else
    {
        bonus = num * 0.1;
    }

    if (num % 2 == 0)
    {
        bonus += 1;
    }

    if (num % 10 == 5)
    {
        bonus += 2;
    }

    printf("%.1lf\n", bonus);
    printf("%.1lf\n", num + bonus);

    return 0;
}
