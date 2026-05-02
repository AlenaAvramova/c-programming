//Convert degrees to radians.
#include <stdio.h>

int main() {
    float degrees;

    printf("Enter degrees: ");
    scanf("%f", &degrees);

    float radians = degrees * 3.14159 / 180;

    printf("Radians: %.4f\n", radians);

    return 0;
}
