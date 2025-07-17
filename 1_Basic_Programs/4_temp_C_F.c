/* 
Write a C program to convert temperature value in celsius(C) to Fahrenheit(F). 
*/

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit - formula: F = (9/5) * C + 32
    // Using 9.0 and 5.0 to ensure floating-point division
    fahrenheit = (9.0 / 5.0) * celsius + 32;

    // Display result
    printf("Temperature in Fahrenheit: %.2f F\n", fahrenheit);

    return 0;
}
