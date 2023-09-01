#include <stdio.h>
#include <math.h>

int sumOfDigitsToPower(int num, int power) {
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, power);
        num /= 10;
    }
    
    return sum;
}

int main() {
    int num, power;
    
    printf("¬ведите число: ");
    scanf("%d", &num);

    printf("¬ведите степень: ");
    scanf("%d", &power);

    int result = sumOfDigitsToPower(num, power);
    printf("—умма цифр числа %d, возведенных в степень %d: %d\n", num, power, result);

    return 0;
}
