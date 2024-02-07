#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str) {
    int len = strlen(str);
    
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    
    return 1;
}

void convertToBase(int num, int base, char *result) {
    int index = 0;

    while (num > 0) {
        int digit = num % base;
        result[index++] = digit < 10 ? '0' + digit : 'A' + (digit - 10);
        num /= base;
    }

    result[index] = '\0';

    int len = strlen(result);
    for (int i = 0; i < len / 2; ++i) {
        char temp = result[i];
        result[i] = result[len - i - 1];
        result[len - i - 1] = temp;
    }
}

int main() {
    int num, base;
    char result[100];
    
    printf("¬ведите число: ");
    scanf("%d", &num);

    printf("¬ведите базу (2-16): ");
    scanf("%d", &base);

    convertToBase(num, base, result);

    if (isPalindrome(result)) {
        printf("%d в %d-й системе счислени€ - палиндром.\n", num, base);
    } else {
        printf("%d в %d-й системе счислени€ - не палиндром.\n", num, base);
    }

    return 0;
}
