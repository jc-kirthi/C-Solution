/*
This program calculates the sum of the first n natural numbers using a while loop.
*/

#include<stdio.h>
void main()
{
    int i,n,sum=0;

    printf("enter n: ");
    scanf("%d",&n);

    printf("Sum of first %d natural numbers is: \n", n);
    i=1;
    while(i<=n)
    {
        sum=sum+i; // adding the current number to sum
        i=i+1; // incrementing i by 1 to move to the next number
    }
    printf("sum=%d",sum);
}