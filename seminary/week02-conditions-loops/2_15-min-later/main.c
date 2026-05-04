#include <stdio.h>

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
