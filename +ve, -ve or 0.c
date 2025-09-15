#include <stdio.h>
void main(){
   int a;
    printf("Enter any number:-");
    scanf("%d",&a);
    if (a>0)
    {
        printf("Number is positive");
    }
    else if (a<0)
    {
        printf("Number is negative");
    }
    else{
        printf("Number is Zero");
    }
    
    
    getch();
}