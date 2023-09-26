#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int maxPalindrome = 0;

    for (int i = 100; i <= 999; ++i) {
        for (int j = 100; j <= 999; ++j) {
            int product = i * j;
            if (isPalindrome(product) && product > maxPalindrome) {
                maxPalindrome = product;
            }
        }
    }

    printf("Наибольший палиндром, полученный умножением двух трехзначных чисел: %d\n", maxPalindrome);

    return 0;
}
