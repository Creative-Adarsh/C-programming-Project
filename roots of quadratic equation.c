#include <stdio.h>
#include <math.h>
void main(){
    float a, b, c, discriminat, root1, root2, realpart, imaginarypart;
    printf("Form a quadratic equation \n");
    printf("The format of quadratic equation is: ");
    printf("a(x)^2 - b(x) + c\n");
    printf("Where a,b,c are the coefficients of x^2, x and constant part respectively \n");
    
    printf("Enter the coefficient of x^2, i.e. a= ");
    scanf("%f",&a);
    printf("Enter the coefficient of x, i.e. b= ");
    scanf("%f",&b);
    printf("Enter the coefficient part of constant part, i.e. c= ");
    scanf("%f",&c);

    printf("Your Quadratic equation is\n");
    printf("%.2f(x)^2 - %.2f(x) + %.2f\n",a,b,c);

    discriminat = b*b - 4*a*c ;

    if (discriminat >0)
    {
        printf("Your quadratic equation has real and distinct root\n");
        root1 = (-b + sqrt(discriminat))/(2*a);
        root2 = (-b - sqrt(discriminat))/(2*a);
        printf("The real and distinct roots are %.2f and %.2f",root1,root2);
    }
    else if (discriminat==0)
    {
        printf("Your quadratic equation has equal roots\n");
        root1 = root2= (-b/2*a);
        printf("Equal roots are %.2f ",root1);
    }
    else
    {
        printf("Your quadratic equation has imaginary roots\n");
        realpart =-b/(2*a);
        imaginarypart =sqrt(-discriminat)/(2*a);
        printf("Imaginary roots are : %.2lf + %.2lf amd %.2lf - %.2lf",realpart, imaginarypart, realpart, imaginarypart);
    }
    
    
    getch();
}