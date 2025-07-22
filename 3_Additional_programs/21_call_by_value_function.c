/*
Program to demonstrate call by value in C.
This program swaps two integers using a function that takes parameters by value.
 */

#include <stdio.h>

// Function to swap values ---- Call by Value
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function:\n a = %d, b = %d\n", a, b);
}

int main() {
    int x = 5, y = 10;

    printf("Before swapping:\n x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After function call:\n x = %d, y = %d\n", x, y);

    return 0;
}
