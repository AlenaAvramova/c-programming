//Calculate the area of a trapezoid using given parameters.
#include <stdio.h>

int main() {
    double a, b, h;

    printf("Enter trapezoid sides and height (a b h): ");
    scanf("%lf %lf %lf", &a, &b, &h);

    double area = ((a + b) / 2) * h;

    printf("\n--- Result ---\n");
    printf("Trapezoid area: %.2lf\n", area);

    return 0;
}
