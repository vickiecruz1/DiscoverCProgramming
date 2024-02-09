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
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d - простое число.\n", num);
    } else {
        printf("%d - не простое число.\n", num);
    }
    
    return 0;
}
