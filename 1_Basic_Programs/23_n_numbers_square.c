/* 
This program calculates the sum of squares of the first n natural numbers using a while loop.
*/

/*
The sum of squares is defined as:
sum = 1^2 + 2^2 + 3^2 + ... + n^2
For example,
if n = 3, the sum would be 1^2 + 2^2 + 3^2 = 1 + 4 + 9 = 14
*/


#include<stdio.h>
void main()
{
    int i,n,sum=0;

    printf("enter n: ");
    scanf("%d",&n);

    printf("Sum of squares of first %d natural numbers is: \n", n);

    i=1;
    while(i<=n)
    {
        sum=sum+i*i; // adding the square of the current number to sum
        i=i+1;
    }
    printf("sum=%d",sum);
}