#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    printf("/");
    for (i = 0; i < n / 2; i++)
        printf("^");
    printf("\\");
    for (i = 0; i < 2 * n - 2 * (n / 2) - 4; i++)
        printf("_");
    printf("/");
    for (i = 0; i < n / 2; i++)
        printf("^");
    printf("\\\n");

    for (i = 0; i < n - 2; i++)
    {
        printf("|");

        if (i == n / 2 - 1)
        {
            for (j = 0; j < n / 2 + 1; j++)
                printf(" ");
            for (j = 0; j < 2 * n - 2 * (n / 2) - 4; j++)
                printf("_");
            for (j = 0; j < n / 2 + 1; j++)
                printf(" ");
        }
        else
        {
            for (j = 0; j < 2 * n - 2; j++)
                printf(" ");
        }

        printf("|\n");
    }

    printf("\\");
    for (i = 0; i < n / 2; i++)
        printf("_");
    printf("/");
    for (i = 0; i < 2 * n - 2 * (n / 2) - 4; i++)
        printf(" ");
    printf("\\");
    for (i = 0; i < n / 2; i++)
        printf("_");
    printf("/\n");

    return 0;
}
