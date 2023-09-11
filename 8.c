#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Введите два числа: ");
    scanf("%d %d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("Первое число: %d\n", a);
    printf("Второе число: %d\n", b);
    
    return 0;
}
