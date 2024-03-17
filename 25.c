#include <stdio.h>

int isPowerOfTwo(int num) {
    if (num <= 0) {
        return 0;
    }
    return (num & (num - 1)) == 0;
}

int main() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num)) {
        printf("%d - степень двойки.\n", num);
    } else {
        printf("%d - не степень двойки.\n", num);
    }

    return 0;
}
