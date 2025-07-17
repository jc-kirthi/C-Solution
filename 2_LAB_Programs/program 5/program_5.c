/*
Title: Design and Develop a C program to arrange the elements in ascending order using bubble sort.  
Problem Description: The program should prompt the user to input elements into a one dimensional array and sort in descending order 
Method: Bubble Sort.
*/ 

#include<stdio.h>

int main()
{
    int n,i,j,a[10],temp=0; 

    //input
    printf("Enter the number of elements: ");
    scanf("%d",&n); 
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n-1;i++) 
    {
        for(j=0;j<n-1-i;j++) //n-1-i is used to reduce the number of comparisons
        {
            if(a[j]>a[j+1]) // for descending order change to a[j]<a[j+1]
            {
                //swapping
                temp=a[j]; 
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }   
    }
    printf("\nThe sorted elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;   
}
