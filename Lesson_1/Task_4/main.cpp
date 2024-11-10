#include <stdio.h>

int main()
{
    double salary;
    printf("Введите вашу зарплату: ");
    scanf("%lf", &salary);

    if (salary < 1000)
    {
        printf("Вы должны работать больше!\n");
    }
    if (salary > 1000)
    {
        if (salary < 1000000)
        {
            printf("Вы молодец!\n");
        }
    }
    if (salary > 1000000) {
        printf("Вы миллионер :3\n");
    }

    return 0;
}
