#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

float parall(float a, float H);

int drawParall(int x, int y, char c);

void main() {
    float a, H;
    int x, y, n;
    int v = 1;
    char c;
    while (v == 1) {

        setlocale(LC_ALL, "rus");
        printf("Параллелограмм\n");
        printf("1)Площадь\n");
        printf("2)Рисунок\n");
        printf("3)Определение\n");
        printf("4)Свойства\n");
        printf("5)Завершить выполнение программы\n");
        scanf("%d", &n);
        switch (n) {
        case 1:
            puts("Введите стороны a, H\n");
            scanf("%f %f", &a, &H);
            printf("Площадь параллелограмма = %.4f\n", parall(a, H));
            break;
        case 2:
            puts("Введите стороны a, b и символ: \n");
            scanf("%d %d %c", &x, &y, &c);
            drawParall(x, y, c);
            break;
        case 3:
            printf("Параллелограмм - это четырехугольник, противоположные стороны которого попарно параллельны.\n");
            break;
        case 4:
            printf("Не существует четырёхугольников, у которых все углы острые или все углы тупые.\n");
            printf("Противолежащие углы параллелограмма равны.\n");
            printf("Сумма углов четырёхугольника(параллелограмма) равна 360°\n");
            break;
        case 5:
            printf("..........Выполнение программы завершено..........");
            v = 0;
            break;
        default:
            printf("");
        }
    }
}

float parall(float a, float H) {
    float S;
    S = a * H;
    return S;
}

int drawParall(int x, int y, char c) {
    int i, j;
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= x + i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= y; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}
