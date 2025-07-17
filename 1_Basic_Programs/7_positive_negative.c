/* 
Write a C program to check if a number is positive, negative, or zero. 
*/


#include <stdio.h>
int main() 
{
    float num;

    // Input a number
    printf("Enter a number: ");
    scanf("%f", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0)
        printf("The entered number is positive\n");
    else if (num < 0) 
        printf("The entered number is negative\n");
    else 
        printf("The entered number is zero\n");

    return 0;
}
