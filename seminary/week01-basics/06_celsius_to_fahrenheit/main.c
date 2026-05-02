//Convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    float celsius;

    printf("Enter Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
