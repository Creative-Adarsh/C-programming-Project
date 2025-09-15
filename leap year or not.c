#include <stdio.h>
void main(){
    int a;
    printf("Enter a year:-");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("Year %d is a leap year",a);
    }
    else
    {
        printf("Year %d is not a leap year",a);
    }
  
    getch();
}