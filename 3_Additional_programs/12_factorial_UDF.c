/*
This program calculates the factorial of a number using a user-defined function.
It prompts the user to enter a number and then computes the factorial using the `fact` function.
The result is displayed to the user.
*/

#include<stdio.h>
int fact(int n);

void main()
{
      int n;

      printf("Enter the value of n: ");
      scanf("%d",&n);
      
      // function is called by passing value
      printf("factorial of %d is %d",n, fact(n));
}

//user-defined function to calculate factorial
int fact(int n)
{ 
      int i, f=1;
      if(n == 0)
            return 1;
      for(i = 1;i <= n; i++)
         f = f * i;
      return f;
}