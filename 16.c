#include <stdio.h>

int main() {
    int rows, cols;
    printf("������� ���������� ����� � ��������: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("������� �������� �������:\n");
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int max = matrix[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    printf("������������ �������: %d\n", max);

    return 0;
}
