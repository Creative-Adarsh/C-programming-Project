#include <stdio.h>

void main(){
    float usages, bill;
    printf("The standard price of per unit electricity used in India is ranging from 2 to 8\nFor better calculation we are taking 5 rupees per unit rate !");
    printf("How much units did you consumed : ");
    scanf("%f",&usages);

    bill = usages * 5;

    printf("You have consumed %.2f units \n",usages);
    printf("Your electricity bill is %.2f",bill);


    
    getch();
}