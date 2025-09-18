#include <stdio.h>

void main(){
    int integer;
    printf("Enter an integer: ");
    if (scanf("%d",&integer) != 1)
    {
        printf("Invalid input\n");
        getch();
    }
    
    switch (integer % 2)
    {
    case 0:
        printf("%d is an even number",integer);
        break;
    case 1:
    case -1:
    printf("%d is an odd number",integer);
    break;
    
    default:
    printf("Unexpected error");
        break;
    }


    getch();
}