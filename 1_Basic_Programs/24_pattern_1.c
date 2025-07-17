/* 
This program prints a right-angled triangle pattern of asterisks.
The number of rows in the triangle is determined by the outer loop.
Each row contains an increasing number of asterisks, starting from 1 in the first row.
Output:
   *
   * * 
   * * *
*/

#include<stdio.h>
void main()
{
    int i, j;

    for(i=0;i<3;i++) // outer loop for rows
    {
        for(j=0;j<=i;j++) // inner loop for columns
        {
            printf("*\t");
        }
        printf("\n"); // move to the next line after each row
    }
}