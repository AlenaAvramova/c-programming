#include <stdio.h>

/*
Write a program that prints all Fibonacci numbers
up to a given number N.

Example:
N = 50
Output: 1, 1, 2, 3, 5, 8, 13, 21, 34
*/

int main()
{
    int N;
    int a = 1;
    int b = 1;
    int c;

    printf("Enter N: \n");
    scanf("%d", &N);

    printf("Fibonacci numbers: \n");

    while (a <= N){
            printf("%d, ", a);
            c = a + b;
            a = b;
            b = c;
    }



    return 0;
}
