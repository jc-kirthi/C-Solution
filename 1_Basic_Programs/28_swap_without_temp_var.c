/* 
program to swap two numbers without using a temporary variable.
 */

#include <stdio.h>

int main() 
{
    int a, b;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Display before swap
    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swapping without temp variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display after swap
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
