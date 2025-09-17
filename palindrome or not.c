#include <stdio.h>

void main(){
    int num, reaminder, original, reverse=0;
    printf("Enter an integer: ");
    scanf("%d",&num);

    original = num;

    while (num !=0)
    {
        reaminder = num % 10;
        reverse = reverse *10 + reaminder;
        num /= 10;
    }

    if (original == reverse)
    {
        printf("%d is a palindrome",original);
    }
    else
    {
        printf("%d is not a palindrome",original);
    }
    
    

    
    getch();
}