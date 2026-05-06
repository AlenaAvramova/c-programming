/*Create a dynamic array of integers with N elements,
where N and the values are read from the keyboard.
Remove the prime numbers from this array and store
them in a second dynamic array. Print both arrays.*/

#include <stdio.h>
#include <stdlib.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void printArray(int* arr, int size) {
    if (size == 0) {
        printf("(empty)\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int primeCount = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) primeCount++;
    }

    int* primes = (int*)malloc(primeCount * sizeof(int));

    int primeIndex = 0;
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primes[primeIndex] = arr[i];
            primeIndex++;
        } else {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    printf("\nArray without primes (%d elements): ", newSize);
    printArray(arr, newSize);

    printf("Primes array (%d elements):          ", primeCount);
    printArray(primes, primeCount);

    free(arr);
    free(primes);

    return 0;
}
