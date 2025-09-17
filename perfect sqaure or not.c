#include <stdio.h>
#include <math.h>

void main(){
    int num, sqrt_Value;
    printf("enter a number: ");
    scanf("%d",&num);

    sqrt_Value = sqrt(num);
    
    if (num < 0)
    {
        printf("%d is not a perfect square",num);
    }
    else if (sqrt_Value * sqrt_Value == num)
    {
        printf("%d is a perfect square",num);
    }
    
    else
    {
        printf("%d is not a perfect square",num);
    }
    
    
    getch();
}