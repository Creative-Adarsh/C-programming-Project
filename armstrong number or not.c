#include <stdio.h>
#include <math.h>

void main(){
    int num, a, b, c,num1, num2, num3;
    printf("Enter a 3 digit integer: ");
    scanf("%d",&num);

    a = num % 10;
    num1 = num / 10;

    b = num1 % 10;
    num2 = num1 / 10;

    c = num2 % 10;
    num3 = c / 10;

    if ((pow(a,3))+(pow(b,3))+(pow(c,3)) == num)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not a armstrong number", num);
    }
    
    

    getch();
}