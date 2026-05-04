// Task 5
// Three athletes finish a race in a given number of seconds (1 to 50).
// Read their times and calculate the total time.
// Print the result in format minutes:seconds.
// Seconds must always have two digits (leading zero if needed).

#include <stdio.h>

int main()
{
    int a, b, c;
    int total, minutes, seconds;

    scanf("%d %d %d", &a, &b, &c);

    total = a + b + c;
    minutes = total / 60;
    seconds = total % 60;

    printf("%d:%02d\n", minutes, seconds);

    return 0;
}
