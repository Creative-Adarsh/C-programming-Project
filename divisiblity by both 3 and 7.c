#include <stdio.h>
#include <math.h>

void main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    if (num % 3 == 0 && num % 7 ==0)
    {
        printf("%d is divisible by both 3 and 7",num);
    }
    else
    {
        printf("%d is not divisible by both 3 and 7",num);
    }
    
    


    getch();
}