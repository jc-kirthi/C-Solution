/* 
This program demonstrates the use of a user-defined function to add two integers.
The function `add` takes two integers as parameters, computes their sum, and returns the result.
The main function prompts the user for input, calls the `add` function, and displays the result.
*/

#include<stdio.h>
int add(int a,int b);  // function/prototype declaration

void main()
{
    int a,b,c;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    c=add(a,b);  // function is called by passing values
    printf("Addition of %d and %d is %d",a,b,c);
}

//user-defined function
int add(int a,int b)  // function definition
{
    int c;
    c=a+b;
    return c;
}