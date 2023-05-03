#include <stdio.h>
#include "main.h"
#include <math.h>

void f_addition(void)
{
    double i, j, sum;

    printf("Enter first number:\n");
    scanf("%lf",&i);

    printf("Enter second number:\n");
    scanf("%lf",&j);
    sum = i + j;
    printf("the sum of %lf and %lf is %0.2f\n", i, j, sum);
    f_arithmetic();
}
