/*
Program that reads two numbers and prints their sum, difference,
product, and quotient.
*/
#include <stdio.h>

int main()
{
    int x, y;
    float quotient;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int sum;
    int dif;
    int product;

    sum = x + y;
    dif = x - y;
    product = x * y;
    quotient = (float)x / (float)y;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", dif);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;

}
