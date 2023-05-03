#include <stdio.h>
#include "main.h"

void f_home(void)
{
    int home;

    printf("Hi :)\n");
    printf("lets do some math\n on numpad, press\n");
    printf("1 - arithmetic\n");
    printf("2 - conversion\n");
    printf("3 - sorting\n");
    printf("4 - help\n");
    scanf("%d", &home);

    switch(home)
    {
        case 1:
            f_arithmetic();
            break;
        
        case 2:
            //conversion
            break;

        case 3:
            //sorting
            break;

        case 4:
            //help
            break;
        
        default:
            printf("invalid!");
            f_home();

    }
    printf("\n");
}
