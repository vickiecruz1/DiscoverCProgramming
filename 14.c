#include <stdio.h>

void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int n;
    printf("¬ведите размер массива: ");
    scanf("%d", &n);

    int arr[n];
    printf("¬ведите %d элементов массива:\n", n);
    
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    printf("ѕеревернутый массив:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
