// 1. Write a function that takes two numbers and returns the larger one.
//    Write another function that returns the smaller one.
//    Demonstrate the functions by reading multiple numbers from the user
//    until 0 is entered, and print the largest and the smallest number entered.#include <stdio.h>

int bigger(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int smaller(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num;
    int max, min;

    printf("Enter numbers (0 to stop): ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("No numbers were entered.\n");
        return 0;
    }

    max = num;
    min = num;


    while (1)
    {
        printf("Enter numbers (0 to stop): ");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        max = bigger(max, num);
        min = smaller(min, num);
    }

    printf("Biggest entered number: %d\n", max);
    printf("Smallest entered number: %d\n", min);

    return 0;
}
