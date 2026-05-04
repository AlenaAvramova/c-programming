// Task 7
// A student needs to travel n kilometers.
// Available transport:
// - Taxi: starting fee 0.70, day rate 0.79/km, night rate 0.90/km
// - Bus: 0.09/km (only for distances >= 20 km)
// - Train: 0.06/km (only for distances >= 100 km)
// Read distance and time of day (D = day, N = night).
// Print the price of the cheapest transport.#include <stdio.h>

int main()
{
    int km;
    char time;

    scanf("%d %c", &km, &time);

    double taxi, bus = 1e9, train = 1e9;

    if (time == 'D')
        taxi = 0.70 + km * 0.79;
    else
        taxi = 0.70 + km * 0.90;

    if (km >= 20)
        bus = km * 0.09;

    if (km >= 100)
        train = km * 0.06;

    double min = taxi;

    if (bus < min)
        min = bus;

    if (train < min)
        min = train;

    printf("%.2lf\n", min);

    return 0;
}
