/*Calculate total revenue in EUR:

given prices for vegetables and fruits
given quantities in kg
convert from BGN to EUR (1 EUR = 1.95 BGN)*/
#include <stdio.h>

int main() {
    double vegPrice, fruitPrice;
    int vegKg, fruitKg;

    printf("Enter price per kg of vegetables (BGN): ");
    scanf("%lf", &vegPrice);

    printf("Enter price per kg of fruits (BGN): ");
    scanf("%lf", &fruitPrice);

    printf("Enter total kg of vegetables: ");
    scanf("%d", &vegKg);

    printf("Enter total kg of fruits: ");
    scanf("%d", &fruitKg);

    double totalBGN = vegPrice * vegKg + fruitPrice * fruitKg;
    double totalEUR = totalBGN / 1.95;

    printf("\n--- Results ---\n");
    printf("Vegetables revenue (BGN): %.2lf\n", vegPrice * vegKg);
    printf("Fruits revenue (BGN): %.2lf\n", fruitPrice * fruitKg);
    printf("Total revenue (BGN): %.2lf\n", totalBGN);
    printf("Total revenue (EUR): %.2lf\n", totalEUR);

    return 0;
}
