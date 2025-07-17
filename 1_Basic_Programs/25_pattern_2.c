/* 
This program prints a right-angled triangle pattern of asterisks.
The number of rows in the triangle is determined by the outer loop.
Each row contains a decreasing number of asterisks, starting from 3 in the first row.
Output:
   * * * 
   * * 
   * 
   * 
 */

#include<stdio.h>
void main()
{
    int i, j;

    for(i=3; i>0; i--) //reverse outer loop for rows
    {
        for(j=0 ;j<i; j++) 
        {
            printf("*\t");
        }
        printf("\n"); 
    }
}