/* 
This program prints numbers from 'n to 1' in reverse order using a while loop.
*/


#include<stdio.h>
void main()
{
    int i,n;

    //Dynamic value assignment for n
    printf("enter n: ");
    scanf("%d",&n);

    i=n;
    printf("Numbers from %d to 1 are: \n", n);
    
    // Loop to print numbers in reverse order
    while(i>=1)
    {
        printf("%d\t",i);
        i--;
    }
} 