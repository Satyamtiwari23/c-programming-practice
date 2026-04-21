#include <stdio.h>

int main() {
    int n;

    printf("Enter the limit: ");
    scanf("%d", &n);

    int isPrime[n + 1];

    // Step 1: Assume all numbers are prime
    for (int i = 0; i <= n; i++) {
        isPrime[i] = 1;
    }

    // 0 and 1 are not prime
    isPrime[0] = isPrime[1] = 0;

    // Step 2: Sieve logic
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            // Mark multiples as non-prime
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    // Step 3: Print all prime numbers
    printf("Prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }

    return 0;
}