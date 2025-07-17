/* 
Write a C program to check if a number is odd or even. 
*/

#include <stdio.h>
int main() 
{
    int num;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd using modulus operator
    if (num % 2 == 0) 
        printf("The number %d is even\n", num);
    else 
        printf("The number %d is odd\n", num);

    return 0;
}