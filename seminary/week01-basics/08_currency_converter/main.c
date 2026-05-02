/*Convert BGN (Bulgarian lev) to:

- USD
- EUR
- GBP*/

#include <stdio.h>

int main() {
    float bgn;

    printf("Enter BGN: ");
    scanf("%f", &bgn);

    printf("USD: %.2f\n", bgn / 1.8);
    printf("EUR: %.2f\n", bgn / 1.95);
    printf("GBP: %.2f\n", bgn / 2.2);

    return 0;
}
