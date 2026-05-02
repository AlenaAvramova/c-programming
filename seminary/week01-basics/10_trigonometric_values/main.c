/*Given an angle in degrees, calculate:
-sin
-cos
-tan
-cot*/

#include <stdio.h>
#include <math.h>

int main() {
    double degrees;

    printf("Enter angle in degrees: ");
    scanf("%lf", &degrees);

    double radians = degrees * M_PI / 180;

    double s = sin(radians);
    double c = cos(radians);
    double t = tan(radians);

    printf("\n--- Results ---\n");
    printf("sin: %.4lf\n", s);
    printf("cos: %.4lf\n", c);

    if (c == 0) {
        printf("tan: undefined\n");
        printf("cot: undefined\n");
    } else {
        printf("tan: %.4lf\n", t);
        printf("cot: %.4lf\n", 1 / t);
    }

    return 0;
}
