/*
Title: Design and Develop a C program to perform binary Search using user defined functions. 
Problem Description: The program should prompt the user to input elements into a onedimensional array and a target value to search for within the array.  
Method: Use 1D array to store the integer elements. Also, use user defined functions to implement the logic of binary search by passing reference
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],key;
    int n,i,low,high,mid;

    //input
    printf("enter the number of elements to read\n");
    scanf("%d",&n); 
    printf("enter the elements in ascending order\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element to search\n");
    scanf("%d",&key);
    
    low=0;
    high=n-1;

    while(low<=high) 
    {
        mid=(low+high)/2; //finding the middle element
        if(a[mid] == key)
        {
            printf("The element is found at position at %d",mid+1);
            exit(0);
        }
        else if(a[mid]<key) 
        low=mid+1;
        else
        high=mid-1;
    }
    printf("The element is not found");
    return 0;
}
