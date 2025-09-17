#include <stdio.h>
void main(){
    int choice;
    read:
    printf("Enter a number from 1 to 7 so that the respective day can be printed:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Monday");
        break;
   
    case 2:
    printf("Tuesday");
    break;

    case 3:
    printf("Wednesday");
    break;

    case 4:
    printf("Thrusday");
    break;

    case 5:
    printf("Friday");
    break;

    case 6:
    printf("Saturday");
    break;

    case 7:
    printf("Sunday");
    break;

    
    default:
    printf("Enter your choice from 1 to 7\n");
        break;
    }
    if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7)
    {
        goto read;
    }
    
}