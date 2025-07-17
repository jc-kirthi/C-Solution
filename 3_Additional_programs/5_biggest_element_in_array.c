/* 
This program finds the biggest element in an array.
It prompts the user to enter the size of the array and its elements,
then iterates through the array to find and display the largest element.
*/

#include<stdio.h>
void main()
{
    int n, i, a[5] ,big=0;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]>big)
        big=a[i]; // Update big if current element is greater
    }
    
    printf("Biggest element is %d ",big);
}