#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int n;
    printf("Введите количество элементов массива: ");
    scanf("%d", &n);

    int arr[100];
    int i;

    printf("Введите элементы массива:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int count = 0;

    for (i = 1; i < n; i = i + 2) {
        if (arr[i] > 0) {
            sum = sum + arr[i];
            count = count + 1;
        }
    }

    printf("\n--- Результат ---\n");
    if (count > 0) {
        float average = (float)sum / count;
        printf("Среднее значение: %.2f\n", average);
    }
    else {
        printf("Положительных элементов на нечетных индексах нет.\n");
    }

    system("pause");
    return 0;
}