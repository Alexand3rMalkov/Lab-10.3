#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

float halfMeter(float a, float b, float z, float d);

float quadrilateral(float a, float b, float z, float d);

int draw_quadrilateral(int x, int y, char c);

void main() {
    float a, b, z, d, p;
    int a1, b1, z1, d1, n;
    int v = 1;
    char c;
    while (v == 1) {

        setlocale(LC_ALL, "rus");
        printf("Четырехугольник\n");
        printf("1)Площадь\n");
        printf("2)Рисунок\n");
        printf("3)Определение\n");
        printf("4)Свойства\n");
        printf("5)Завершить выполнение программы\n");
        scanf("%d", &n);
        switch (n) {
        case 1:
            puts("Введите стороны a, b, c, d\n");
            scanf("%f %f %f %f", &a, &b, &z, &d);
            printf("Площадь четырехугольника = %.4f\n", quadrilateral(a, b, z, d));
            break;
        case 2:
            puts("Введите стороны a, b, c, d и символ: \n");
            scanf("%d %d %d %d %c", &a1, &b1, &z1, &d1, &c);
            draw_quadrilateral(a1, b1, z1, d1, c);
            break;
        case 3:
            printf("Четырёхугольник — это геометрическая фигура, состоящая из четырёх точек, никакие три из которых не лежат на одной прямой, и четырёх отрезков, последовательно соединяющих эти точки.\n");
            break;
        case 4:
            printf("Не существует четырёхугольников, у которых все углы острые или все углы тупые.\n");
            printf("Каждый угол четырёхугольника всегда меньше суммы трёх остальных углов.\n");
            printf("Сумма углов четырёхугольника равна 360°\n");
            break;
        case 5:
            puts("     Выполнение программы завершено    ");
            v = 0;
            break;
        }
    }
}

float halfMeter(float a, float b, float z, float d) {
    float p;
    p = (a + b + z + d) / 2;
    return p;
}

float quadrilateral(float a, float b, float z, float d) {
    float S, p = halfMeter(a, b, z, d);
    S = sqrt((p - a) * (p - b) * (p - z) * (p - d));
    return S;
}

int draw_quadrilateral(int x, int y, char c) {
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
