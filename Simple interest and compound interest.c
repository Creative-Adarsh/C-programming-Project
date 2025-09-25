#include <stdio.h>
#include <math.h>

void main(){
    int choice;
    float principle_amount, rate, time, n, SI, CI;

    read:
    printf("1.Simple Interest\n2.Compound Interst\n");
    printf("Enter your choice from the given one: ");
    
    if (scanf("%d",&choice) != 1)
    {
        printf("Invalid input");
        getch();
    }

    switch (choice)
    {
    case 1:
        printf("Calculation for simple interse\n");
        printf("Enter principle amount: ");
        scanf("%f",&principle_amount);
        printf("Enter rate of interest");
        scanf("%f",&rate);
        printf("Enter time in years: ");
        scanf("%f",&time);

        SI = (principle_amount * time * rate) / 100;

        printf("The simple interest calculated is %.2f",SI);
        break;

    case 2:
        printf("Calculation for compound interest\n");
        printf("Enter principle amount: ");
        scanf("%f",&principle_amount);
        printf("Enter rate of interest: ");
        scanf("%f",&rate);
        printf("Enter time in year: ");
        scanf("%f",&time);
        printf("Enter no. of times interest should be compounded per year: ");
        scanf("%f",&n);

        CI = principle_amount * pow((1 + rate / n) , n * time);

        printf("Compound interest calculated is %.2f",CI);
    
        break;
    }

    if (choice != 1 && choice != 2)
    {
        goto read;
    }
    
    
   
   
    
    getch();
}