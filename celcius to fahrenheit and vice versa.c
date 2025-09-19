#include <stdio.h>

void main(){
    int choice;
    float celcius, fahrenheit, converted;
    read:
    printf("1.Converting celcius to fahrenheit\n2.Converting fehrenheit to celcius\n");
    printf("Enter your choice from the given one: ");
    
    
    if (scanf("%d",&choice) != 1)
    {
        printf("Invalid input");
        getch();
    }

    switch (choice)
    {
    case 1:
        printf("Converting celcius to fahrenheit\n");

        printf("Enter celcius: ");
        scanf("%f",&celcius);

        converted = (celcius * 1.80) + 32;

        printf("%.1f celcius is equal to %.1f fahrenheit",celcius,converted);

        break;
    
    case 2:
        printf("Converting fahrenheit to celcius\n");

        printf("Enter fahrenheit: ");
        scanf("%f",&fahrenheit);

        converted = (fahrenheit - 32) * 0.55;

        printf("%.1f fahrenheit is equal to %.1f celcius",fahrenheit,converted);

        break;

    }

    if (choice != 1 && choice != 2 )
    {
        goto read;
    }

   
    
    getch();
}