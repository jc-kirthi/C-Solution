/* 
This program prints numbers from '1 to n' using a while loop.
*/


#include<stdio.h>
void main()
{
    int i;
    int n=20; //static value assignment of n

    printf("Numbers from 1 to %d are: \n", n);
    i=1;
    while(i<=n)
    {
        printf("%d\t",i);
        i++;
    }
} 