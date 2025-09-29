#include <stdio.h>
#include <ctype.h>
void main(){
    char letter;
    printf("Enter any thing:");
    scanf("%c",&letter);

    if (letter >='a' && letter <='z')
    {
        printf("%c is a lowercase ",letter);
    }
    else if (letter >='A' && letter <='Z')
    {
        printf("%c is a uppercase ",letter);
    }
    else if (isdigit(letter))
    {
        printf("%c is a number",letter);
    }
    else
    {
        printf("%c is a special character",letter);
    }
    
    
    getch();

}
