#include <stdio.h>
#include "main.h"

void f_arithmetic(void)
{
    int arithmetic;

    printf("1 - addition\n");
    printf("2 - subtraction\n");
    printf("3 - multiplication\n");
    printf("4 - division\n");
    printf("5 - modulo\n");
    printf("6 - home\n");
    printf("0 - quit\n");
    scanf("%d", &arithmetic);

    switch(arithmetic)
    {
        case 1:
            f_addition();
            break;
        
        case 2:
            f_subtraction();
            break;
        
        case 3:
            f_multiplication();
            break;
        
        case 4:
            f_division();
            break;
        
        case 5:
            //modulo
            break;

        case 6:
            //square
            break;

        case 7:
            f_home();
            break;
        case 0:
            printf("Bye ;^)");
            break;
        
        default:
        printf("invalid !");
        f_arithmetic;
    }

}
