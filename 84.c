#include <stdio.h>

int main() {
    int n;
    
    printf("Введите n: ");
    scanf("%d", &n);

    int sumOfSquares = 0;
    int squareOfSum = 0;

    for (int i = 1; i <= n; ++i) {
        sumOfSquares += i * i;
        squareOfSum += i;
    }

    squareOfSum *= squareOfSum;

    int result = squareOfSum - sumOfSquares;
    printf("Разница: %d\n", result);

    return 0;
}
