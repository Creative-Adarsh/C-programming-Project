#include <stdio.h>
#include <string.h>

void main(){
    int Month_Number;
    read:
    printf("Enter any month number (1 to 12): ");
    scanf("%d",&Month_Number);
    
    switch (Month_Number)
    {
    case 1:
        printf("january\tDays = 31");
        break;
    
    case 2:
    printf("February\tDays = 28 or 29");
    break;

    case 3:
    printf("March\tDays = 31");
    break;

    case 4:
    printf("April\tDays = 30");
    break;

    case 5:
    printf("May\tDays = 31");
    break;

    case 6:
    printf("June\tDays = 30");
    break;

    case 7:
    printf("July\tDays = 31");
    break;

    case 8:
    printf("August\tDays = 31");
    break;

    case 9:
    printf("September\tDays = 30");
    break;

    case 10:
    printf("October\tDays = 31");
    break;

    case 11:
    printf("November\tDays = 30");
    break;

    case 12:
    printf("December\tDays = 31");
    break;


    default:
    printf("Wrong Input\n");
    goto read;
        break;
    }

    getch();
}