#include <stdio.h>

void main(){
    int marks, answer;
    read:
    printf("Enter the marks of the student: ");
    if (scanf("%d",&marks) != 1)
    {
        printf("Enter marks in numbers");
        getch();
    }

    switch (marks <=100 && marks >=90)
    {
    case 1:
        printf("Student has scored A grade ");
        break;
    
    }
    
    switch (marks <=89 && marks >=75)
    {
    case 1:
        printf("Student has scored B grade");
        break;
    
    }

    switch (marks <=74 && marks >=70)
    {
    case 1:
        printf("Student has scored C grade");
        break;
   
    }

    switch (marks <=69 && marks >=60)
    {
    case 1:
        printf("Student has scored D grade");
        break;
    
    }

    switch (marks <=59 && marks >=50)
    {
    case 1:
        printf("Student has scored E grade");
        break;
    
    }

    switch (marks <=49)
    {
    case 1:
        printf("Student has scored F grade");
        break;
    
    
    }

    printf("\nWant to enter more marks?\nEnter 1 for yes and 2 for no: ");
    scanf("%d",&answer);
    if (answer == 1)
    {
        goto read;
    }
    
    

    
    getch();
}