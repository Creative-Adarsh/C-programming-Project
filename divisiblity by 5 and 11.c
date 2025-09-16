#include <stdio.h>
#include <stdlib.h>

void main(){
    int num;
    printf("Enter any number :");
    scanf("%d",&num);

    if (num % 5==0 && num % 11==0)
    {
        printf("The number %d is divisible by 5 and 11",num);
    }
    else
    {
        printf("The number %d is not divisible by 5 and 11",num);
    }
    
    
    
    getch();
}