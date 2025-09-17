#include <stdio.h>

void main(){
    float cost_price, selling_price, profit_percentage, loss_percentage, profit, loss;
    printf("Enter the cost price of the product: ");
    scanf("%f",&cost_price);
    printf("Enter the selling price of the product: ");
    scanf("%f",&selling_price);

    if (selling_price > cost_price)
    {
        profit =selling_price - cost_price;
        profit_percentage =(profit/cost_price) *100;
        printf("The profit in number is %.2f \n",profit);
        printf("The profit percentage on the product is %.2f",profit_percentage);
    }
    else
    {
        loss =cost_price - selling_price;
        loss_percentage = (loss *100)/cost_price;
        printf("The loss in number is -%.2f \n",loss);
        printf("The lost percentage on the product is %.2f",loss_percentage);
    }
    
    
    
    
    getch();
}