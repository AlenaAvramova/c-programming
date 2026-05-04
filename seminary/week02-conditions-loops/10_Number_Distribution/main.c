// Task 10
// Given n integers in the range [1…1000],
// calculate the percentage of numbers in these ranges:
// p1: < 200
// p2: 200–399
// p3: 400–599
// p4: 600–799
// p5: >= 800
// Print all percentages.#include <stdio.h>

int main()
{
    int n, num;
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        if (num < 200)
            p1++;
        else if (num <= 399)
            p2++;
        else if (num <= 599)
            p3++;
        else if (num <= 799)
            p4++;
        else
            p5++;
    }

    printf("%.2lf%%\n", p1 * 100.0 / n);
    printf("%.2lf%%\n", p2 * 100.0 / n);
    printf("%.2lf%%\n", p3 * 100.0 / n);
    printf("%.2lf%%\n", p4 * 100.0 / n);
    printf("%.2lf%%\n", p5 * 100.0 / n);

    return 0;
}
