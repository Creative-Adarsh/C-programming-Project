#include <stdio.h>

void main(){
    int side_1, side_2, side_3, choice=1;
    printf("Enter the first side: ");
    scanf("%d",&side_1);
    printf("Enter the second side: ");
    scanf("%d",&side_2);
    printf("Enter the third side: ");
    scanf("%d",&side_3);

    switch (choice)
    {
    case 1:
        if (side_1 == side_2 && side_3 == side_2 && side_1 == side_3)
        {
           printf("It is an equilateral triangle");
        }

        else if ((side_1 == side_2 && side_2 != side_3) || (side_2 == side_3 && side_1 != side_2) || (side_1 == side_3 && side_1 != side_2))
        {
            printf("It is an Isosceles Triangle");
        }

        else
        {
            printf("It is a Scalene Triangle");
        }
        
        break;
    
    default:
        break;
    }
    

    getch();
}