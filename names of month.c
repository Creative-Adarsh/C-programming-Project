#include <stdio.h>
void main(){
    int choice;
    read:
    printf("Enter a number from 1 to 12 so that the respective months can be printed:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("January");
        break;
   
    case 2:
    printf("February");
    break;

    case 3:
    printf("March");
    break;

    case 4:
    printf("April");
    break;

    case 5:
    printf("May");
    break;

    case 6:
    printf("June");
    break;

    case 7:
    printf("July");
    break;

    case 8:
    printf("August");
    break;

    case 9:
    printf("September");
    break;

    case 10:
    printf("October");
    break;

    case 11:
    printf("November");
    break;

    case 12:
    printf("December");
    break;

    
    default:
    printf("Enter your choice from 1 to 12\n");
        break;
    }
    if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7 && choice != 8 && choice != 9 && choice != 10 && choice != 11 && choice != 12)
    {
        goto read;
    }

    getch();
}
