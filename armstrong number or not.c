#include <stdio.h>
void main(){
    int n, r, c, arm=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    c=n;
    while(n > 0){
        r = n%10;
        arm = (r * r * r) + arm;
        n = n/10;
        
    }
    if (arm == c){
        printf("%d is an armstrong number",c);
        
    }
    else{
        printf("%d is not an armstrong number",c);
    }
   getch();
}
