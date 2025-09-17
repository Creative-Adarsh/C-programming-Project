#include <stdio.h>
#define PI 3.14159


void main(){
    int choice, length, breadth, result;
    float circle_result, triangle_result, base, height, radius;
    
    read:
    printf("1.Area of Circle\n2.Area of rectangle\n3.Area of triangle\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1:
        printf("Calculation for Area of Circle\n");

        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);

        circle_result = PI * radius * radius;
        
        printf("The area of the circle is: %.2f\n", circle_result);
        break;
    
    case 2:
    printf("Calculation for Area of rectangle\n");

    printf("Enter the length of the rectangle: ");
    scanf("%d",&length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&breadth);

    result = length * breadth;

    printf("The area of the rectanlge is %d",result);
    break;

    case 3:
    printf("Calculation for area of triangle\n");

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    triangle_result = 0.5 * base * height;

    printf("The area of the triangle is: %.2f\n", triangle_result);
    break;


    default:
    printf("Wrong choice\n");
    if (choice !=1 && choice !=2 && choice !=3)
    {
        goto read;
    }
    
        break;
    }
    
    getch();
}