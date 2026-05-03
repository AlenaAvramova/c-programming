//Special number check + modify using largest digit (reference)
#include <stdio.h>

// Special number check + modify using largest digit (reference)
#include <stdio.h>

int isSpecial(int n)
{
    int sum = 0;
    int product = 1;
    int temp = (n < 0) ? -n : n;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    if (sum % 2 == 0 && product > 35)
        return 1;

    return 0;
}

void makeSpecial(int *num)
{
    if (isSpecial(*num))
    {
        printf("The number is special.\n");
    }
    else
    {
        int maxDigit = 0;
        int temp = (*num < 0) ? -*num : *num;

        while (temp > 0)
        {
            int digit = temp % 10;

            if (digit > maxDigit)
                maxDigit = digit;

            temp /= 10;
        }

        *num = *num + maxDigit;

        printf("The number has been changed. New value: %d\n", *num);
    }
}

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    makeSpecial(&num);

    printf("Final value in main: %d\n", num);

    return 0;
}
