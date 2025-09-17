#include <stdio.h>

void main(){
    int angle_1, angle_2, angle_3;
    printf("Enter the first angle: ");
    scanf("%d",&angle_1);
    printf("Enter the second angle: ");
    scanf("%d",&angle_2);
    printf("Enter the third angle: ");
    scanf("%d",&angle_3);

    

    if (angle_1+angle_2+angle_3 == 180)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is not valid");
    }
    
    
    getch();
}