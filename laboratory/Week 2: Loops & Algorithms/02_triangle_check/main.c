#include <stdio.h>

/*
Read three numbers and check whether they can form a triangle.
If they can, determine the type of triangle:
equilateral, isosceles, or scalene.
*/

int main(){
    int a;
    int b;
    int c;

    printf("Enter 3 numbers to check if they can form a triangle: \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a+b>c && b+c>a && a+c>b){
        printf("The numbers can form a triangle!\n");
        printf("Type of triangle: \n");

        if (a == b && b == c)
        {
            printf("The triangle with sides %d %d %d is Equilateral!\n", a, b, c);
        }
        else if (a == b || b ==  c || a == c){
            printf("The triangle with sides %d %d %d is Isosceles!\n", a, b, c);

        }
        else{
            printf("The triangle is Scalene!\n ");
        }
    }
else {
    printf("The numbers can NOT form a triangle.\n");
}
return 0;

}
