/* 
This program finds the smallest of two numbers using a conditional operator.
*/

/*
The conditional operator (also known as the ternary operator) is used to evaluate a condition and return one of two values based on whether the condition is true or false.
In this case, it compares two integers and assigns the smaller one to the variable 'small'.
*/


#include <stdio.h>
int main()
{
    int a,b,small;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    small=(a<b)?a:b; //ternary operator to find the smallest number
    // If a is less than b, small is assigned a; otherwise, small is assigned

    printf("%d is smallest",small);

    return 0;
}