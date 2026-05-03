//Sum, difference, product using call by reference
#include <stdio.h>
#include <stdio.h>
void operations(int a, int b, int *pSum, int *pDiff, int *pProd)
{
    *pSum = a + b;
    *pDiff = a - b;
    *pProd = a * b;
}

int main()
{
    int A, B;
    int s, d, p;

    printf("Enter A and B: ");
    scanf("%d %d", &A, &B);

    operations(A, B, &s, &d, &p);

    printf("Sum = %d\n", s);
    printf("Diff = %d\n", d);
    printf("Prod = %d\n", p);

    return 0;
}
