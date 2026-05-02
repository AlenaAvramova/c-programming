/*Calculate:

number of tiles needed to cover a square area (excluding a bench)
time needed (0.2 min per tile)*/
#include <stdio.h>
#include <stdio.h>

int main() {
    double n, w, l, m, o;

    printf("Enter platform side (N): ");
    scanf("%lf", &n);

    printf("Enter tile width (W): ");
    scanf("%lf", &w);

    printf("Enter tile length (L): ");
    scanf("%lf", &l);

    printf("Enter bench width (M): ");
    scanf("%lf", &m);

    printf("Enter bench length (O): ");
    scanf("%lf", &o);

    double area = n * n;
    double benchArea = m * o;
    double tileArea = w * l;

    double coverArea = area - benchArea;
    double tilesNeeded = coverArea / tileArea;
    double timeNeeded = tilesNeeded * 0.2;

    printf("\n--- Results ---\n");
    printf("Total platform area: %.2lf sq.m\n", area);
    printf("Bench area (not covered): %.2lf sq.m\n", benchArea);
    printf("Area to cover: %.2lf sq.m\n", coverArea);
    printf("Area of one tile: %.2lf sq.m\n", tileArea);
    printf("Tiles needed: %.2lf\n", tilesNeeded);
    printf("Time needed: %.2lf minutes\n", timeNeeded);

    return 0;
}
