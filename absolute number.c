#include <stdio.h>
#include <stdlib.h>

void main(){
    float num,absnumber;
    printf("Enter any number including +ve, -ve, decimal values :");
    scanf("%f",&num);

    absnumber= abs(num);

    printf("The absolute value of %.3f is %.3f",num,absnumber);
    
    
    
    getch();
}