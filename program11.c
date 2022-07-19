#include<stdio.h>

void circle()
{
    int radius;
    printf("\nEnter the radius of the circle: ");
    scanf("%d", &radius);
    float area= 3.14*radius*radius;
    float perimeter= 2*3.14*radius;
    printf("\nThe area of the circle is %f square units and the perimeter is %f units.", area, perimeter);
}

void rectangle()
{
    int length, breadth;
    printf("\nEnter the length of the rectangle: ");
    scanf("%d", &length);
    printf("\nEnter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    int area=length*breadth;
    int perimeter=2*(length*breadth);
    printf("\nThe area of the rectangle is %f square units and the perimeter is %d units.", area, perimeter);
}

void main()
{
    int choice;
    printf("\nEnter 1 for area and perimeter of circle and 2 for rectangle: ");
    scanf("%d", &choice);

    if (choice==1)
    circle();
    else
    rectangle();
}