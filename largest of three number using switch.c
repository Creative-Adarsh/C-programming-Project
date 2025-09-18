#include <stdio.h>

void main(){
    int num1, num2, num3;

    printf("Enter first integer: ");
    if (scanf("%d",&num1) != 1)
    {
        printf("First input is invalid");
        getch();
    }

    printf("Enter second integer: ");
    if (scanf("%d",&num2) != 1)
    {
        printf("second input is invalid");
        getch();
    }

    printf("Enter third integer: ");
    if (scanf("%d",&num3) != 1)
    {
        printf("Third input is invalid");
        getch();
    }

    switch (num1 > num2)
    {
    case 1:
        switch (num1 > num3)
        {
        case 1:
            printf("%d is largest",num1);
            break;
        case 0:
        printf("%d is largest",num3);
        break;
        
        }
        break;

    
    case 0:
        switch (num2 > num3)
        {
        case 1:
            printf("%d is largest",num2);
            break;
        case 0:
        printf("%d is largest",num3);
        break;

        }
        break;
    }

    
    
    getch();
}