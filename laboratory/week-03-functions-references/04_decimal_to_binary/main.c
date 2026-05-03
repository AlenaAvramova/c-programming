//Convert decimal to binary
#include <stdio.h>

void toBinary(int n) {
    long binary = 0;
    int place = 1;

    while (n > 0) {
        int remainder = n % 2;
        binary += remainder * place;
        n = n / 2;
        place *= 10;
    }

    printf("Binary: %ld\n", binary);
}

int main() {
    int num = 13;
    toBinary(num);
    return 0;
}
