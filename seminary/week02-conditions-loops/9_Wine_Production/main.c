#include <stdio.h>

int main()
{
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    double grapes = X * Y * 0.4;
    double wine = grapes / 2.5;

    if (wine >= 600)
    {
        double leftover = wine - 600;
        printf("Good harvest this year! Total wine: %.0lf liters.\n", wine);
        printf("%.0lf liters left -> %.0lf liters per person.\n", leftover, leftover / Z);
    }
    else
    {
        printf("It will be a tough winter! More %.0lf liters wine needed.\n", 600 - wine);
    }

    return 0;
}
