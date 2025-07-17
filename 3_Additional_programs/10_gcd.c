/*
This program calculates the GCD (Greatest Common Divisor) and LCM (Least Common Multiple) of two numbers.
It uses the Euclidean algorithm to compute the GCD and then derives the LCM from it.
*/

#include<stdio.h>
int gcd(int num, int den);

void main()
{
  int num, den, rem,lcm;

  printf("Enter two numbers: ");
  scanf("%d %d",&num, &den);

  rem=gcd(num, den); //function is called by passing values

  lcm = (num*den)/rem;

  printf("GCD is %d\n", rem);
  printf("LCM %d",lcm); 
}

//user-defined function to calculate GCD
// It uses the Euclidean algorithm
int gcd(int num, int den)
{
  int rem;
  while(den!=0)
  {
    rem = num % den;
    num = den;
    den = rem;
  }
  return num;
}