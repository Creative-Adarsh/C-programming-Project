#include <stdio.h>

void main(){
    int table, i;
    printf("Table from 2 to 10\nWhich table you want to print: ");
    if (scanf("%d",&table) != 1)
    {
        printf("Invalid input");
        getch();
    }
    
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",table,i,table*i);
    }
    
    
    
    getch();
}