#include <stdio.h>
void main(){
    int a, b, c;
    printf("Enter three numbers:-\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("%d is greatest",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is greatest",b);
    }
    else
    {
        printf("%d is greatest",c);
    }

    getch();
}