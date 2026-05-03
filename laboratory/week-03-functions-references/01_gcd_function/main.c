//GCD of Two Numbers. Build with function.
#include <stdio.h>


int gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
      temp = a % b;
      a = b;
      b = temp;
    }
    return a;
}

int main()
{
    int a;
    int b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);


    printf("The GCD of the numbers %d and %d is %d \n", a, b, gcd(a, b));

    return 0;
}
