/* 
Write a C program to calculate the area of a triangle by taking base and height as the input. 
*/


#include <stdio.h>
int main() 
{
    float base, height, area;

    // Input base and height from user
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    
    // Calculate area
    area = 0.5 * base * height;

    // Display the result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}