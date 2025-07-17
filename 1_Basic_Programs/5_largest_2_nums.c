/* 
Write a C program to find the largest of two numbers.
 */


#include <stdio.h>
int main() 
{
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Check which number is larger
    if (num1 > num2) 
        printf("%d is the largest number\n", num1);
    else if (num2 > num1) 
        printf("%d is the largest number\n", num2);
    else 
        printf("Both numbers are equal\n");

    return 0;
}
