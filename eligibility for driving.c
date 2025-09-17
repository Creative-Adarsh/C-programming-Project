#include <stdio.h>

void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if (age >=18)
    {
        printf("You are eligible for driving");
    }
    else
    {
        printf("You are not eligible for driving as your age is not equal to 18");
    }
    


    getch();
}