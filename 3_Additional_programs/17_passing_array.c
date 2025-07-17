/* 
This program demonstrates how to pass an array to a function in C.
It calculates the sum of elements in an array and returns the result.
*/


#include <stdio.h>

//user-defined function to calculate the sum of array elements
float calculateSum(float *p, int size)  
{  
    int i; 
    float sum = 0.0; 
    for (i = 0; i < size; ++i)  
    { 
        sum += *(p+i); 
    } 
    return sum; 
} 

// main function
int main() 
{ 
    float num[] = {23.4, 55, 22.6, 3, 40.5, 18}; 

    int size = sizeof(num) / sizeof(num[0]); 

    float result = calculateSum(num, size); //passing the array and size to the function

    printf("Result = %.2f\n", result); 
    return 0; 
}