#include <stdio.h>

/*
Task 1: Integer Properties

Read an integer from the keyboard and determine whether:
- it is even or odd
- it is positive, negative, or zero
- it is divisible by both 3 and 5
*/
int main(){
    int i;

    printf("Enter an integer: \n\t");
    scanf("%d", &i);

    if (i % 2 == 0)
    {
        printf("The number %d is even!\n", i);
    }
    else{
        printf("The number %d is odd!\n", i);
    }
    if (i > 0){
        printf("%d is a positive number!\n", i);
    }
    else if (i < 0){
        printf("%d is a negative number!\n", i);
    }
    else{
        printf("%d is zero!\n", i);
    }
    if (i % 3 == 0 && i % 5 == 0){
        printf ("The number %d is divisible by both 3 and 5!", i);
    }
    else{
        printf("The number %d is not divisible by the numbers 3 and 5!", i);
    }

return 0;

}
