/*
This program prints numbers from '0 to 10' using a while loop.
 */

#include<stdio.h>
void main()
{
    int i; //declaration of variable i
    i=0; //initialization of variable i

    printf("Numbers from 1 to 10 are: \n");

    while(i<=10) // loop condition
    {
        printf("%d\t",i);
        i++; // incrementing the value of i by 1
    }
} 

// output is given in horizontal format
// to print in vertical format, replace printf("%d\t",i); with printf("%d\n",i);