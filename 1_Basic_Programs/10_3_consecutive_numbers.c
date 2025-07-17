/* 
Write a C program to print three consecutive numbers starting from a given number.
*/


#include <stdio.h>
int main() 
{
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print three consecutive numbers
    printf("Three consecutive numbers: %d, %d, %d\n", num, num + 1, num + 2);

    return 0;
}
