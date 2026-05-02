//Given three points, calculate the area of the triangle.
#include <stdio.h>

#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    printf("Enter coordinates (x1 y1 x2 y2 x3 y3): ");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

    float area = (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2;

    if (area < 0) area = -area;

    printf("\n--- Result ---\n");
    printf("Triangle area: %.2f\n", area);

    return 0;
}
