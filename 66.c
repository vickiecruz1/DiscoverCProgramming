#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int limit;
    
    printf("¬ведите предел: ");
    scanf("%d", &limit);

    int sum = 0;

    for (int i = 2; i <= limit; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    printf("—умма простых чисел до %d: %d\n", limit, sum);

    return 0;
}
