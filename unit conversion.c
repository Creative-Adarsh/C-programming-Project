#include <stdio.h>

void main(){
    int choice;
    float km, m, cm, converted;
    read:
    printf("Unit conversion\n");
    printf("1.Converting kilometer to meter\n2.Converting meter to kiolometer\n3.Converting meter to centimeter\n4.Converting centimeter to meter\n");
    printf("Enter your choice from the given one: ");
    
    
    if (scanf("%d",&choice) != 1)
    {
        printf("Invalid input");
        getch();
    }

    switch (choice)
    {
    case 1:
        printf("Converting kilometer to meter\n");
        printf("Enter kilometer: ");
        scanf("%f",&km);

        converted = km * 1000;

        printf("%.1fkm is equal to %.1fm",km,converted);
        break;
        
    case 2:
        printf("converting meter to kilometer\n");
        printf("Enter meter: ");
        scanf("%f",&m);

        converted = m / 1000;

        printf("%.1fm is equal to %.1fkm",m,converted);
        break;

    case 3:
        printf("Converting meter to centimeter\n");
        printf("Enter meter: ");
        scanf("%f",&m);

        converted = m * 100;

        printf("%.1fm is equal to %.1fcm",m,converted);
        break;

    case 4:
        printf("converting centimeter to meter\n");
        printf("Enter centimeter");
        scanf("%f",&cm);

        converted = cm * 100;

        printf("%.1fcm is equal to %.1fm",cm,converted);
        break;
   
    }

    

    if (choice != 1 && choice != 2 && choice != 3 && choice != 4 )
    {
        goto read;
    }

   
    
    getch();
}