#include <stdio.h>

int main() {
    int num, reversed = 0;
    
    printf("Введите число: ");
    scanf("%d", &num);
    
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    printf("Обратное число: %d\n", reversed);
    
    return 0;
}
