#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}

int isTriangleNumber(int num) {
    return isPerfectSquare(8 * num + 1);
}

int main() {
    int num;
    
    printf("¬ведите число: ");
    scanf("%d", &num);

    if (isTriangleNumber(num)) {
        printf("%d - полный квадрат треугольного числа.\n", num);
    } else {
        printf("%d - не полный квадрат треугольного числа.\n", num);
    }

    return 0;
}
