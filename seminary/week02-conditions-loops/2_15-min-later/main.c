// Task 2
// Write a program that reads hours and minutes (24-hour format) from the user
// and calculates the time after 15 minutes.
// Print the result in format hh:mm.
// Hours are between 0 and 23, minutes between 0 and 59.
// Minutes must always be printed with two digits (leading zero if needed).#include <stdio.h>

int main() {
    int hours, minutes;
    printf("Enter hours: ");

    scanf("%d %d", &hours, &minutes);

    minutes = minutes + 15;

    if (minutes >= 60) {
        minutes = minutes - 60;
        hours = hours + 1;
    }

    if (hours >= 24) {
        hours = hours - 24;
    }

    printf("%d:%02d", hours, minutes);

    return 0;
}
