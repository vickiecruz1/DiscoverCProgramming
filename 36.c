#include <stdio.h>

void convertToBase(int num, int base) {
    if (num == 0) {
        return;
    }
    convertToBase(num / base, base);
    printf("%d", num % base);
}

int main() {
    int num, base;
    
    printf("Введите число: ");
    scanf("%d", &num);

    printf("Введите базу (2, 8, 16): ");
    scanf("%d", &base);

    if (base == 2 || base == 8 || base == 16) {
        printf("Число %d в %d-й системе счисления: ", num, base);
        convertToBase(num, base);
        printf("\n");
    } else {
        printf("Неподдерживаемая база.\n");
    }

    return 0;
}
