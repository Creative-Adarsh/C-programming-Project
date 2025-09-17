#include <stdio.h>

void main(){
    int age_1, age_2, age_3;
    printf("Enter the age of the first person: ");
    scanf("%d",&age_1);
    printf("Enter the age of the second person: ");
    scanf("%d",&age_2);
    printf("Enter tthe age of the third person: ");
    scanf("%d",&age_3);

    if (age_1 < age_2 && age_1 < age_3)
    {
        printf("The person of %d years is youngest",age_1);
    }
    else if (age_2 < age_1 && age_2 < age_3)
    {
        printf("The person of %d years is youngest",age_2);
    }
    else
    {
        printf("The person of %d years is youngest",age_3);
    }
    
    
    


    getch();
}