#include <stdio.h>
#include <locale.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int task1(void)
{
    double gr, rad, result;

    printf("Введите угол в градусах: ");

    scanf("%lf", &gr);

    rad = gr * M_PI / 180.0;
    result = sin(rad);

    printf("sin(%.2f) = %.6f\n", gr, result);

    return 0;
}

int task2(void)
{
    double x;
    double t = -6.0;
    double a, b, y;

    printf("Введите x (x > 0): ");

    scanf("%lf", &x);

    a = log(x);
    b = sqrt(x * x + t * t);
    y = pow(fabs(a - b * x), 1.0 / 5.0);

    printf("\nРезультаты:\n");
    printf("x = %.6f\n", x);
    printf("a = %.6f\n", a);
    printf("b = %.6f\n", b);
    printf("y = %.6f\n", y);

    return 0;
}

int task3(void)
{
    double x;
    double t = -6.0;
    double a, b, y;
    int A, B, C;
    int condition1, condition2;

    printf("Введите x (x > 0): ");

    scanf("%lf", &x);

    a = log(x);
    b = sqrt(x * x + t * t);
    y = pow(fabs(a - b * x), 1.0 / 5.0);

    A = (int)a;
    B = (int)b;
    C = (int)y;

    printf("\nA = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    condition1 = ((A % 2 == 0) != (B % 2 == 0));

    printf("\nУсловие а) выполнено (1 - да, 0 - нет): %d\n",
           condition1);

    condition2 = (A % 3 == 0) &&
                 (B % 3 == 0) &&
                 (C % 3 == 0);

    printf("Условие б) выполнено (1 - да, 0 - нет): %d\n",
           condition2);

    return 0;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    task1(); task2(); task3();
} 