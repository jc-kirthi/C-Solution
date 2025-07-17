/* 
This program performs a linear search to find the position of a key element in an array.
It iterates through the array and checks if the key matches any of the elements.
If found, it prints the position; otherwise, it indicates that the element is not found.
*/


#include<stdio.h>
int main()
{
    int n, i,a [10], key, found=0;

    printf("Enter the no of the elements to be stored in an array: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for(i=0;i<n;i++) // {} is not required as it is a single statement
        scanf("%d",&a[i]);

    printf("Enter the key element to serach: ");
    scanf("%d",&key);  //value from the input is stored in key

    for(i=0;i<n;i++)
    {
        if(key == a[i])
        {
            found=1;
            break;
        }
    }

    if(found==1)
        printf("The element found  at %d  location", i+1);
    else
        printf("Element not found");
    return 0;    
}

// we can use exit(0) instead of found variable which reduces memory space.