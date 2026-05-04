// Task 6
// Write a program that checks if a point (x, y) is inside a rectangle
// defined by (x1, y1) and (x2, y2).
// Input: x1, y1, x2, y2, x, y (x1 < x2 and y1 < y2).
// A point is inside if it is inside or on the border.
// Print "Inside" or "Outside".#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, x, y;

    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x, &y);

    if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
        printf("Inside\n");
    else
        printf("Outside\n");

    return 0;
}
