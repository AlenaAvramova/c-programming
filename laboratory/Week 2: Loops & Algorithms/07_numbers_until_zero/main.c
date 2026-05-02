#include <stdio.h>

/*
Enter numbers until the user enters 0.
After that the program should print:
- the count of numbers entered
- their sum
- their average
*/

int main()
{
    int num;
    int count = 0;
    int sum = 0;
    float average;

    printf("Enter numbers (0 to stop): ");

    scanf("%d", &num);

    while (num != 0)
    {
        sum = sum + num;
        count = count + 1;

        scanf("%d", &num);
    }

    if (count > 0)
    {
        average = (float)sum / count;

        printf("Count: %d\n", count);
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    }
    else
    {
        printf("No numbers were entered.\n");
    }

    return 0;
}
