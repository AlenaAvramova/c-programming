/*
 Write a program that reads 7 integers from the range
 $[-5000, 5000]$ and stores them in a one-dimensional array.
-> The program should calculate and display:The maximum value in
the array
-> The average of the numbers (formatted
to 3 decimal places)
-> The value closest to the average and its position
(index) in the array
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int numbers[7];
    int sum = 0;
    int max;
    float average;

    float min_diff;
    int closest_val;
    int position;

    printf("Enter 7 integers:\n");
    for(int i = 0; i < 7; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    max = numbers[0];
    for(int i = 1; i < 7; i++){
        if(numbers[i] > max){
            max = numbers[i] ;
        }
    }

    average = (float)sum/7;

    min_diff = fabs(numbers[0] - average);
    closest_val = numbers[0];
    position = 1;

    for(int i = 1; i < 7; i++) {
        float current_diff = fabs(numbers[i] - average);
        if(current_diff < min_diff) {
            min_diff = current_diff;
            closest_val = numbers[i];
            position = i + 1;
        }
    }

    printf("\n--- RESULTS ---\n");
    printf("1. Maximum value: %d\n", max);
    printf("2. Average value: %.3f\n", average);
    printf("3. Closest to average: %d (at position %d)\n", closest_val, position);

    return 0;
}

