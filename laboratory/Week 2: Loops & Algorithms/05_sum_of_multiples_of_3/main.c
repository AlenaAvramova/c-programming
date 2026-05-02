#include <stdio.h>

/*
Enter two integers A and B and print the sum of all numbers
between them that are multipled of 3.

Example:
A = 5, B = 15
Result: 6 + 9 + 12 + 15 = 42
*/
int main()
{
    int A;
    int B;
    int sum = 0;
    int i;

    printf("Enter A and B: ");
    scanf("%d %d", &A, &B);
    for(i=A; i<=B; i++)
    {
        if( i % 3 == 0)
        {
            sum = sum + i;
        }
    }

    printf("Sum of the numbers divisible by 3: %d\n", sum);

    return 0;
}







/*
int main()
{
    int A;
    int B;
    int sum = 0;
    int i;

    printf("Enter A and B: ");
    scanf("%d %d", &A, &B);

    for (i = A; i <= B; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }

    printf("Sum of numbers divisible by 3: %d\n", sum);

    return 0;
}*/
