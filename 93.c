#include <stdio.h>

int isAbundant(int num) {
    int sum = 1;

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }

    return sum > num;
}

int main() {
    int limit;
    
    printf("¬ведите предел: ");
    scanf("%d", &limit);

    int sum = 0;

    for (int i = 12; i <= limit; ++i) {
        if (isAbundant(i)) {
            sum += i;
        }
    }

    printf("—умма всех абундантных чисел до %d: %d\n", limit, sum);

    return 0;
}
