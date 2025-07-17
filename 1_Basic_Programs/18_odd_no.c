/* 
This program prints all odd numbers from 1 to n using a while loop.
*/

#include<stdio.h>
void main()
{
   int i,n;
   printf("enter n: ");
   scanf("%d",&n);

   printf("Odd numbers from 1 to %d are: \n", n);
   i=1;
   while(i<=n)
   {
      printf("%d\t",i);
      i=i+2; // incrementing by 2 to get the next odd number
   } 
} 

