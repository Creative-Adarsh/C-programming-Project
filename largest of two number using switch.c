#include <stdio.h>

void main(){
    int num1, num2;
    printf("Enter an integer: ");
    if (scanf("%d",&num1) != 1)
    {
        printf("Invalid input");
        getch();
    }
    
    printf("Enter an another integer: ");
    if (scanf("%d",&num2) != 1)
    {
        printf("Invalid input");
        getch();
    }
    

    switch (1)
    {
    case 1:
        if (num1 > num2)
        {
            printf("%d is largest",num1);
        }
        else
        {
            printf("%d is largest",num2);
        }
        
        
        break;
    
    default:
        break;
    }
    
    getch();
}