// Task 4
// Given an integer (points), calculate bonus points based on the following rules:
// - If the number is up to 100 (inclusive), bonus = 5
// - If the number is greater than 100, bonus = 20% of the number
// - If the number is greater than 1000, bonus = 10% of the number
// Additional bonus:
// - If the number is even → +1
// - If the number ends in 5 → +2
// Print the bonus and the total points (number + bonus).#include <stdio.h>

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
