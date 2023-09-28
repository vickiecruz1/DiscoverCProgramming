#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int limit;
    
    printf("Введите предел: ");
    scanf("%d", &limit);

    int fib1 = 0, fib2 = 1, fib3;
    int sum = 0;

    while (fib2 <= limit) {
        sum += sumOfDigits(fib2);
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("Сумма цифр чисел Фибоначчи до %d: %d\n", limit, sum);

    return 0;
}
