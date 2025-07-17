/* 
Program to find the binomial coefficient using recursion.
*/

#include<stdio.h>
int factorial(int n);

void main()
{
    int n,res,r;

    printf("Enter the value of n and r(r<=n): ");
    scanf("%d%d",&n,&r);

    // test case / error handling
    if(r > n) 
    {
        printf("Invalid input ! r cannot be greater than n\n");
        return;
    }

    res=factorial(n) / factorial(r)*factorial(n-r); // C(n,r) = n! / (r! * (n - r)!)
    
    printf("binomial coefficient is %d",res);
}

int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return(n*factorial(n-1)); //recursive call - calls itself
}