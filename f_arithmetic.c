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
            printf("6 - back\n");
            scanf("%d", &arithmetic);
    switch(arithmetic)
    {
        case 1:
            //addition
            break;
        
        case 2:
            //subtraction
            break;
        
        case 3:
            //multiplication
            break;
        
        case 4:
            //division
            break;
        
        case 5:
            //modulo
            break;

        case 6:
            void f_home(void);
            break;
        
        default:
        printf("invalid !");
    }

}
