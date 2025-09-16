#include <stdio.h>

void main(){
    char letter;
    printf("Enter any thing:");
    scanf("%c",&letter);
    
    if ((letter >= 'a' && letter <='z') || (letter >='A' && letter <='Z'))
    {
        printf("%c is an alphabet",letter);
    }
    else
    {
        printf("%c is not an alphabet",letter);
    }
    
    
    getch();
}