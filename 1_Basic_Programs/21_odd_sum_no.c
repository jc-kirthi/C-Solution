/* 
This program calculates the sum of all odd numbers from 1 to n using a while loop.
*/

#include<stdio.h>
void main()
{
    int i,n,sum=0;

    printf("enter n: ");
    scanf("%d",&n);

    printf("Sum of odd numbers from 1 to %d is: \n", n);
    
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2; // incrementing by 2 to get the next odd number
    }
    printf("sum=%d",sum);
}