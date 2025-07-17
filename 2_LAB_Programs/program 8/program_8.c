/*
Title: Design and Develop a C program using pointers to compute the sum, mean and standard deviation of all elements stored in an array of n real numbers. 
Problem Description: The program should prompt the user to input the number of elements n and the array elements. Using pointer arithmetic and mathematical formulas, the program should calculate the sum, mean, and standard deviation of the array elements.  
Method: Exploration of pointers and pointer arithmetic in C.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float a[10],*ptr,mean,std,sum=0,sumstd=0;
    int n,i; 

    printf("Enter the number of elements:");
    scanf("%d",&n); 
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);

    ptr=a; // ptr points to the first element of the array

    for(i=0;i<n;i++)
    {
        sum+=*ptr;
        ptr++;
    }

    mean=sum/n;

    ptr=a; 

    for(i=0;i<n;i++)
    {
        sumstd+=pow((*ptr-mean),2);
        ptr++;
    }

    std=sqrt(sumstd/n);
    
    //output
    printf("Sum = %f\n",sum);
    printf("Mean = %f\n",mean);
    printf("Standard Deviation = %f\n",std);
    return 0;
}
