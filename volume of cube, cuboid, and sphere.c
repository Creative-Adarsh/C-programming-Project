#include <stdio.h>
#define PI 3.14159


void main(){
    int choice, length, breadth, height, cube_result, cuboid_result, side;
    float sphere_result, radius;
    
    read:
    printf("1.Volume of cube\n2.Volume of cuboid\n3.volume of sphere\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1:
        printf("Calculation for volume of cube\n");

        printf("Enter the side length of the cube: ");
        scanf("%d", &side);

        cube_result = side * side * side;
        
        printf("The volume of the cube is: %.d\n", cube_result);
        break;
    
    case 2:
    printf("Calculation for volume of cuboid\n");

    printf("Enter the length of the cuboid: ");
    scanf("%d",&length);

    printf("Enter the breadth of the cuboid: ");
    scanf("%d",&breadth);

    printf("Enter the heigth of the cuboid: ");
    scanf("%d",&height);

    cuboid_result = length * breadth * height;

    printf("The volume of the cuboid is %d",cuboid_result);
    break;

    case 3:
    printf("Calculation for volume of sphere\n");

    printf("Enter the radius of sphere: ");
    scanf("%f", &radius);
    
    sphere_result = PI * 1.33 * radius * radius * radius;

    printf("The volume of the sphere is: %.2f\n", sphere_result);
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