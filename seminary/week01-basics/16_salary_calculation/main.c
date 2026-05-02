/*Calculate average daily income in BGN:

given monthly working days and daily salary (USD)
include yearly bonus (2.5 months)
subtract 25% tax
convert to BGN*/
#include <stdio.h>

int main() {
    int daysPerMonth;
    double dollarsPerDay, dollarRate;

    printf("Enter working days per month: ");
    scanf("%d", &daysPerMonth);

    printf("Enter dollars earned per day: ");
    scanf("%lf", &dollarsPerDay);

    printf("Enter dollar to BGN exchange rate: ");
    scanf("%lf", &dollarRate);

    double monthlySalary = daysPerMonth * dollarsPerDay;
    double yearlyIncome = monthlySalary * 12 + monthlySalary * 2.5;
    double afterTax = yearlyIncome * 0.75;
    double incomeBGN = afterTax * dollarRate;
    double averagePerDay = incomeBGN / 365;

    printf("\n--- Results ---\n");
    printf("Monthly salary (USD): %.2lf\n", monthlySalary);
    printf("Yearly income before tax (USD): %.2lf\n", yearlyIncome);
    printf("Yearly income after tax (USD): %.2lf\n", afterTax);
    printf("Yearly income in BGN: %.2lf\n", incomeBGN);
    printf("Average daily income (BGN): %.2lf\n", averagePerDay);

    return 0;
}
