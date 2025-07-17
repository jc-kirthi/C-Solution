/* 
This program calculates the factorial of a number using recursion.
It prompts the user to enter a number and then computes the factorial recursively.
The result is displayed to the user.
*/

#include<stdio.h>
int factorial(int n);
void main()
{
    int n,res;

    printf("\n enter the value of n: ");
    scanf("%d",&n);

    res=factorial(n);
    printf("factorial of %d is %d",n,res);
}

int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return(n*factorial(n-1)); //recursive call- calls itself
}