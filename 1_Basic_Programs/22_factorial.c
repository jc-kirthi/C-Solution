/* 
This program calculates the factorial of a number using a while loop.
*/

/*
The factorial of a non-negative integer n is the product of all positive integers less than or equal to n.
It is denoted as n! and defined as:
n! = n * (n-1) * (n-2) * ... * 1
For example, 5! = 5 * 4 * 3 * 2 * 1 = 120
*/

#include<stdio.h>
void main()
{
    int i,n,f=1;

    printf("enter n: ");
    scanf("%d",&n);

    // Check if n is negative
    // Factorial is not defined for negative numbers
    if(n < 0) 
    {
        printf("Factorial is not defined for negative numbers\n");
        return;
    }

    // Factorial of 0 is defined as 1
    if(n == 0) 
    {
        printf("Factorial of 0 is 1\n");
        return;
    }

    // Loop to calculate factorial for n > 0
    printf("Factorial of %d is: \n", n);
    
    i=1;
    while(i<=n)
    {
        f=f*i;
        i=i+1;
    }
    printf("factorial of %d =%d",n,f);
} 