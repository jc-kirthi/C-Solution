/* 
This program calculates the binomial coefficient C(n, r) using the formula:
C(n, r) = n! / (r! * (n - r)!)
It prompts the user to enter values for n and r, computes the factorials,
and then calculates and displays the binomial coefficient.
*/

#include<stdio.h>
int fact(int n);

void main()
{
    int n,r,res;

    printf("Enter the value of n and r (r<=n): ");
    scanf("%d %d",&n,&r);

    res = fact(n) / ( fact(n-r) * fact(r) );  // C(n,r)=n!/(r!*(n-r)!)

    printf("Binomial Coefficient is %d", res);
}

int fact(int n)
{ 
    int i, f=1;
    if(n == 0)
        return 1;
    for(i = 1;i <= n; i++)
        f = f * i;
    return f;
}

