#include <stdio.h>

void main(){
    int choice, a, b, result;
    read:
    printf("1.Additon\n2.Substraction\n3.Multiplication\n4.Division\n");
    printf("Enter your Choice: ");
    scanf("%d",&choice);

    
    switch (choice)
    {
    case 1:
        printf("You have choosen for Addition\n");
        printf("Enter two digits for addition: ");
        scanf("%d %d",&a,&b);
        result = a+b;
        printf("The addition of %d and %d is %d",a,b,result);
        break;
    
    case 2:
    printf("You have choosen for Substraction\n");
    printf("Enter two digits for substraction: ");
    scanf("%d %d",&a,&b);
    result = a-b;
    printf("The substraction of %d and %d is %d",a,b,result);
    break;

    case 3:
    printf("You have choosen for Multiplication\n");
    printf("Enter numbers for multiplication: ");
    scanf("%d %d",&a,&b);
    result = a*b;
    printf("The multiplication of %d and %d is %d",a,b,result);
    break;

    case 4:
    printf("You have choosen for Division\n");
    printf("Enter the dividend: ");
    scanf("%d",&a);
    printf("Enter the divisor: ");
    scanf("%d",&b);
    result = a/b;
    printf("The division of %d by %d is %d",a,b,result);
    break;


    
    default:
    printf("Enter your choice between 1 and 4");
        break;
    }

    if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
    {
        goto read;
    }
    
    
    getch();
}