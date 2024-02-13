#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}

int isFibonacci(int num) {
    return isPerfectSquare(5 * num * num + 4) || isPerfectSquare(5 * num * num - 4);
}

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("%d - число Фибоначчи.\n", num);
    } else {
        printf("%d - не число Фибоначчи.\n", num);
    }

    return 0;
}
