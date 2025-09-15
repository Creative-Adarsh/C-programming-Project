#include <stdio.h>
void main(){
   int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
    getch();
}