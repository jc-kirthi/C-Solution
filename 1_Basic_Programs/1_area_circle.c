/* 
Write a C program to calculate the radius of a circle by taking radius as the input.
*/


#include <stdio.h>
int main() 
{
    float radius, area;

    // Input the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area=3.14*radius*radius;

    // Display the result
    printf("The area of the circle is: %.2f\n", area);
    // .2 is used to show 2 digits after the decimal

    return 0;
}