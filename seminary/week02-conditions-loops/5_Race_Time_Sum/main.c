#include <stdio.h>

int main()
{
    int a, b, c;
    int total, minutes, seconds;

    scanf("%d %d %d", &a, &b, &c);

    total = a + b + c;
    minutes = total / 60;
    seconds = total % 60;

    printf("%d:%02d\n", minutes, seconds);

    return 0;
}
