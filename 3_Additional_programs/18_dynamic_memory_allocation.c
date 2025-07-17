/* 
This function calculates the sum of elements in an array.
It takes a pointer to the array and its size as parameters.
*/

#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
    int *arr; 
    int n, i; 

    // Prompt user for the number of elements 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 

    // Memory allocation using malloc 
    arr = (int *)malloc(n * sizeof(int)); 
    if (arr == NULL) 
    { 
    printf("Memory allocation failed for malloc.\n"); 
    return 1; 
    } 
    printf("Memory allocated using malloc.\n"); 

    // Initialize array elements 
    for (i = 0; i < n; i++) 
    { 
    arr[i] = i + 1; 
    } 
    
    // Display the array 
    printf("Array after malloc:\n"); 
    for (i = 0; i < n; i++) 
    { 
    printf("%d ", arr[i]); 
    } 
    printf("\n");

    // Reallocate memory using realloc 
    printf("Enter the new size for the array: "); 
    int new_size; 
    scanf("%d", &new_size); 
    arr = (int *)realloc(arr, new_size * sizeof(int)); 
    if (arr == NULL) { 
    printf("Memory reallocation failed.\n"); 
    return 1; 
    } 
    printf("Memory reallocated using realloc.\n"); 

    // Initialize any new elements if the array size increases 
    for (i = n; i < new_size; i++) { 
    arr[i] = i + 1; 
    } 
    // Display the resized array 
    printf("Array after realloc:\n"); 
    for (i = 0; i < new_size; i++) { 
    printf("%d ", arr[i]); 
    } 
    printf("\n"); 

    // Free the memory 
    free(arr); 
    printf("Memory freed.\n"); 
    
return 0; 
} 