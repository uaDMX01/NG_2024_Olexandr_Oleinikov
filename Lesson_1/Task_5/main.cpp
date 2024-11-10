#include <stdio.h>

int main() {
    int n;
    printf("Введіть число: ");
    scanf("%d", &n);

    // Верхня частина
    for (int i = 1; i <= n; i++)
    {
        // Виведення пробілів
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        // Виведення зірочок
        for (int k = 0; k < (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Нижня частина ромба (одна зірочка по центру)
    for (int j = 0; j < n - 1; j++)
    {
        printf(" ");
    }
    printf("*\n");

    return 0;
}
