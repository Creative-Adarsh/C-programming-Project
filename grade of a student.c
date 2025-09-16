#include <stdio.h>

void main(){
    float marks;
    printf("Enter the overall marks of the student ");
    scanf("%f",&marks);

    if (marks <=100 && marks >=95)
    {
        printf("Student has scored A+ grade");
    }
    else if (marks <=94  && marks >=85)
    {
        printf("Student has scored A grade");
    }
    else if (marks <=84 && marks >=70)
    {
        printf("Student has scored B grade");
    }
    else if (marks <=69 && marks >=60)
    {
        printf("Student has scored C grade");
    }
    else if (marks <=59 && marks >=40)
    {
        printf("Student has scored D grade");
    }
    else if (marks <=39 && marks >=20)
    {
        printf("Student has scored E grade");
    }
    else if (marks <=19 && marks >=0)
    {
        printf("Student has scored F grade");
    }

    else
    {
        printf("Enter marks between 0 to 100");
    }
    
    
    
    
    getch();
}