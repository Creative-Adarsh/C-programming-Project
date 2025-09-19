#include <stdio.h>

void main(){
    int choice, num1, num2, result;
    read:
    printf("1.Addition (+)\n2.Substraction (-)\n3.Multiplication (*)\n4.Division (/)\n5.Modulus (%%)\n");
    printf("Enter your choice from the given one: ");
    
    
    if (scanf("%d",&choice) != 1)
    {
        printf("Invalid input");
        getch();
    }

    switch (choice)
    {
    case 1:
        printf("Addition is in progress\n");

        printf("Enter an integer for addition: ");
        scanf("%d",&num1);

        printf("Enter another integer for addition: ");
        scanf("%d",&num2);

        result = num1 + num2;

        printf("The addition of %d and %d is %d",num1,num2,result);

        break;
    
    case 2:
        printf("Substraction is in progress\n");

        printf("Enter an integer for substraction: ");
        scanf("%d",&num1);

        printf("Enter another integer for substraction: ");
        scanf("%d",&num2);

        result = num1 - num2;

        printf("The substraction of %d and %d is %d",num1,num2,result);

        break;

    case 3:
        printf("Multiplication is in progress\n");

        printf("Enter an integer for multiplication: ");
        scanf("%d",&num1);

        printf("Enter another integer for multiplication: ");
        scanf("%d",&num2);

        result = num1 * num2;

        printf("The multiplication of %d and %d is %d",num1,num2,result);
        break;

    case 4:
        printf("Division is in progress\n");

        printf("Enter dividend: ");
        scanf("%d",&num1);

        printf("Enter divisior: ");
        scanf("%d",&num2);

        result = num1/num2;

        printf("%d is divided by %d and gives result equal to %d",num1,num2,result);
        break;

    case 5:
        printf("Modulus is in progress\n");

        printf("Enter dividend: ");
        scanf("%d",&num1);

        printf("Enter divisior: ");
        scanf("%d",&num2);

        result = num1 % num2;

        printf("The remainder produced when %d divided %d is %d",num1,num2,result);

    
    
        break;
    }

    if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5)
    {
        goto read;
    }

   
    
    getch();
}