//Print a triangle of stars from 1 to 10 rows:


#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
