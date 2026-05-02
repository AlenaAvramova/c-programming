//Draw a hollow triangle using a user-defined symbol.
//Then print the triangle upside down as well.
#include <stdio.h>

int main() {
    char c;
    int i, j, n = 5;

    scanf(" %c", &c);

    // Normal
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) printf(" ");
        for (j = 1; j <= i; j++) printf("%c ", c);
        printf("\n");
    }

    printf("\n");

    // Reversed
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) printf(" ");
        for (j = 1; j <= i; j++) printf("%c ", c);
        printf("\n");
    }

    return 0;
}
