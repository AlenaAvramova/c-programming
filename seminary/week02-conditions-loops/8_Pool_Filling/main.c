#include <stdio.h>

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
