#include <stdio.h>


void main(){
    char letter;
    printf("Enter any value 'alphabet', 'number' or 'special character': ");
    scanf("%c",&letter);
    
    switch (1)
    {
    case 1:
        if (letter >='a'&& letter <='z'|| letter >='A' && letter <='Z')
        {
            printf("'%c' is an alphabet",letter);
        }
        
        break;
    case 2:
    if (letter >='0' && letter <='9')
    {
        printf("'%c' is a number",letter);
    }
    break;
    
    
    default:
    printf("'%c' is a special character",letter);
        break;
    }

    getch();
}