#include <stdio.h>
#include <conio.h>
void main(){
    char letter;
    printf("Enter any letter of English alphabet:- ");
    scanf(" %c",&letter);
    if (letter=='a' || letter=='A' || letter=='e' || letter=='E' || letter=='i' || letter=='I' || letter=='o' || letter=='O' ||letter=='u' || letter=='U')
    {
        printf(" %c is a vowel",letter);
    }
    else
    {
        printf(" %c is a consonant",letter);
    }

    getch();
}