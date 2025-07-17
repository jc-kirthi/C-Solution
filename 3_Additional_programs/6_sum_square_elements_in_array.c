/* 
This program calculates the sum of squares of elements in an array.
It prompts the user to enter the size of the array and its elements,
then computes and displays the sum of squares of those elements.
*/

#include <stdio.h>
void main()
{
    int n,i=0,a[10],sum=0;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for(i;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        sum=sum+a[i]*a[i]; //store the square of each element in sum
    }
    
    printf("The sum  is %d ",sum);
}
