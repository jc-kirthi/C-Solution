/* 
program to swap two numbers using a temporary variable.
This program takes two integers as input and swaps their values.
 */

#include <stdio.h>

int main() 
{
    int a, b, temp;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Display before swap
    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swap using temp
    temp = a;
    a = b;
    b = temp;

    // Display after swap
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
