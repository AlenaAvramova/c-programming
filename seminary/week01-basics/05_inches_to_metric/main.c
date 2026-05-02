/*Convert input inches to:
-millimeters
-centimeters
-decimeters
-meters*/

#include <stdio.h>

int main() {
    float inches;

    printf("Enter inches: ");
    scanf("%f", &inches);

    printf("Millimeters: %.2f\n", inches * 25.4);
    printf("Centimeters: %.2f\n", inches * 2.54);
    printf("Decimeters: %.2f\n", inches * 0.254);
    printf("Meters: %.2f\n", inches * 0.0254);

    return 0;
}
