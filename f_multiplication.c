#include <stdio.h>
#include "main.h"
#include <math.h>

void f_multiplication(void)
{
    double i, j, mult;

    printf("Enter first number:\n");
    scanf("%lf",&i);

    printf("Enter second number:\n");
    scanf("%lf",&j);
    mult = i * j;
    printf("%lf multiplied by %lf is %0.2f\n", i, j, mult);
    f_arithmetic();
}
