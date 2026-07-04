/* Write a C program to enter length and breadth of a rectangle and radius of a circle. Find
perimeter and area of rectangle and circumference and area of circle.  */

#include <stdio.h>
int main() {   
    
    float length, breadth, radius;
    float rectangle_perimeter, rectangle_area;
    float circle_circumference, circle_area;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    rectangle_perimeter = 2 * (length + breadth);
    rectangle_area = length * breadth;

    circle_circumference = 2 * 3.14159 * radius;
    circle_area = 3.14159 * radius * radius;

    printf("\nRectangle Perimeter: %.2f\n", rectangle_perimeter);
    printf("Rectangle Area: %.2f\n", rectangle_area);
    printf("Circle Circumference: %.2f\n", circle_circumference);
    printf("Circle Area: %.2f\n", circle_area);

    return 0;
}