#include <stdio.h>
#include "main.h"
#include <math.h>

void f_division(void)
{
    double i, j, div;

    printf("Enter first number:\n");
    scanf("%lf",&i);

    printf("Enter second number:\n");
    scanf("%lf",&j);
    div = i / j;
    printf("%lf divided by %lf is %0.2f\n", i, j, div);
    f_arithmetic();
}
