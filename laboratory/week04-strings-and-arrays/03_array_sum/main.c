    #include <stdio.h>

/*
 * Task: Write a program that reads 7 integers from the interval [-5000, 5000]
 * and stores them in a one-dimensional array.
 * The program should calculate and print the total sum of the entered numbers.
 */

int main() {
    int numbers[7];
    int sum = 0;
    int i;

    printf("Enter 7 numbers: ");
    for(i = 0; i < 7; i++){
        scanf("%d",&numbers[i]);
    }

    for(i = 0; i < 7; i++)
    {
        sum += numbers[i];
    }

    printf("Total sum: %d\n", sum);

    return 0;
}
