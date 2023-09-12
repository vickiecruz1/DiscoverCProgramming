#include <stdio.h>

int main() {
    int firstTerm, commonDifference, n;

    printf("¬ведите первый член прогрессии: ");
    scanf("%d", &firstTerm);

    printf("¬ведите разность прогрессии: ");
    scanf("%d", &commonDifference);

    printf("¬ведите количество членов прогрессии: ");
    scanf("%d", &n);

    int sum = (n * (2 * firstTerm + (n - 1) * commonDifference)) / 2;

    printf("—умма прогрессии: %d\n", sum);

    return 0;
}
