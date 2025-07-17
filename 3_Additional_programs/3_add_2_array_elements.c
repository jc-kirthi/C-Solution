/* 
This program adds two arrays element-wise and stores the result in a third array.
It prompts the user to enter the size of the arrays and their elements, then computes the sum of corresponding elements.
Finally, it prints the resulting sum array.
*/

#include<stdio.h>
void main()
{
    int a[5], b[5], sum[5] , i, n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements of 1st array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    printf("Enter the elements of 2nd array: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n;i++) // addition of two array
        sum[i] = a[i] + b[i];

    printf("Sum of two array is: \n");
    
    for(i=0;i<n;i++)
        printf("%d\t",sum[i]);
}
