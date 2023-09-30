#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);

    if (isPerfect(num)) {
        printf("%d - совершенное число.\n", num);
    } else {
        printf("%d - не совершенное число.\n", num);
    }

    return 0;
}
