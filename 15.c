#include <stdio.h>

int main() {
    int rows, cols;
    printf("¬ведите количество строк и столбцов: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("¬ведите элементы матрицы:\n");
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += matrix[i][j];
        }
    }

    printf("—умма элементов: %d\n", sum);

    return 0;
}
