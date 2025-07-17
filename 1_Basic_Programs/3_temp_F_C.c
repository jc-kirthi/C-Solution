/*
Write a C program to convert temperature value in Fahrenheit(F) to celsius(C). 
*/


#include <stdio.h>
int main() 
{
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert to Celsius- formula: C = (5/9) * (F - 32)
    // Using 5.0 and 9.0 to ensure floating-point division
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // Display result
    printf("Temperature in Celsius: %.2f C\n", celsius);

    return 0;
}
