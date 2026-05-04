// Task 8
// A pool with volume V (cubic meters) is filled by two pipes.
// Each pipe has a flow rate (liters per hour).
// Both pipes are opened and the worker leaves for N hours.
// Write a program that prints the pool status when the worker returns.#include <stdio.h>

int main()
{
    int V, p1, p2, N;
    scanf("%d %d %d %d", &V, &p1, &p2, &N);

    int total = (p1 + p2) * N;

    if (total <= V)
    {
        int percent = total * 100 / V;
        int p1_percent = p1 * N * 100 / total;
        int p2_percent = p2 * N * 100 / total;

        printf("The pool is %d%% full. Pipe 1: %d%%. Pipe 2: %d%%.\n", percent, p1_percent, p2_percent);
    }
    else
    {
        printf("For %d hours the pool overflows with %d liters.\n", N, total - V);
    }

    return 0;
}
