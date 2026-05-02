//Draw a 10x5 rectangular frame using a user-defined character.
#include <stdio.h>

int main() {
    char symbol;
    int rows = 5, cols = 10;
    int i, j;

    printf("Enter symbol: ");
    scanf(" %c", &symbol);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("%c", symbol);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
