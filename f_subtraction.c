#include <stdio.h>
#include "main.h"
#include <math.h>

void f_subtraction(void)
{
    double i, j, sub;

    printf("Enter first number:\n");
    scanf("%lf",&i);

    printf("Enter second number:\n");
    scanf("%lf",&j);
    sub = i - j;
    printf("%lf minus %lf is %0.2f\n", i, j, sub);
    f_arithmetic();
}
