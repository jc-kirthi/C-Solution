/* 
This program finds the smallest element in an array using pointers.
It prompts the user to enter a fixed number of integers,
then identifies and displays the smallest element in the array.
*/

#include<stdio.h>     
#define N 5  //preprocessor directive -- macro constant --replace every occurrence of N with 5 before the actual compilation starts
void main()   
{    
    int a[N], i, *small;  

    printf("Enter %d integer numbers to get the smallest element : \n", N);   
    for(i = 0; i < N; i++)   
        scanf("%d", &a[i]); 

    small = &a[0]; 

    for(i = 1; i < N; i++)   
    {   
        if( *(a + i) < *small)   
            small = (a + i); 
    }   

    printf("Smallest Element In The Array: %d\n", *small); 
}