/*Calculate number of workspaces in a classroom:

given width and height
account for corridor (≥ 1m)
subtract:
1 place (door)
2 places (teacher desk)*/

#include <stdio.h>

int main() {
    double w, h;

    printf("Enter classroom width and height (m): ");
    scanf("%lf %lf", &w, &h);

    int rows = (int)(w / 1.2);
    int desksPerRow = (int)((h - 1.0) / 0.7);
    int totalDesks = rows * desksPerRow;
    int finalDesks = totalDesks - 3;

    if (finalDesks < 0) finalDesks = 0;

    printf("\n--- Results ---\n");
    printf("Rows: %d\n", rows);
    printf("Desks per row: %d\n", desksPerRow);
    printf("Workspaces: %d\n", finalDesks);

    return 0;
}
