#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);

    int fact = factorial(num);
    int result = sumOfDigits(fact);

    printf("Сумма цифр факториала %d: %d\n", num, result);

    return 0;
}
