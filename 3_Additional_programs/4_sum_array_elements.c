/* 
This program calculates the sum of elements in an array.
It prompts the user to enter the size of the array and its elements,
then computes and displays the sum of those elements.
*/

#include<stdio.h>
void main()
{
    int n,i,a[5],sum=0;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        sum=sum+a[i]; // or sum += a[i];---shorthand operator
    }
    
    printf("The sum  is %d ",sum);
}