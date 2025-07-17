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
        sum=sum+i;
        i=i+1;
    }
    printf("sum=%d",sum);
} 