#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = (int) log10(num) + 1;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return original == sum;
}

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d - число Армстронга.\n", num);
    } else {
        printf("%d - не число Армстронга.\n", num);
    }

    return 0;
}
