//Given two opposite points (A and B), calculate the area of a rectangle.
#include <stdio.h>

int main() {
    double x1, y1, x2, y2;

    printf("Enter coordinates (x1 y1 x2 y2): ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    double width = x2 - x1;
    if (width < 0) width = -width;

    double height = y2 - y1;
    if (height < 0) height = -height;

    double area = width * height;

    printf("\n--- Result ---\n");
    printf("Rectangle area: %.2lf\n", area);

    return 0;
}
