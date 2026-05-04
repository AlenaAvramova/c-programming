#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}

