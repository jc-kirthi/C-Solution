/* 
Program demonstrating pointer arithmetic 
*/

#include <stdio.h> 
int main() 
{ 
   // Initialize an array of integers 
   int i, arr[] = {10, 20, 30, 40, 50}; 

   int *ptr = arr; // Pointer to the first element of the array 

   // Display initial values using pointer arithmetic 
   printf("Initial values in the array:\n"); 

   for (i = 0; i < 5; i++) 
  {    
     printf("arr[%d] = %d\n", i, *(ptr + i)); // Using pointer arithmetic to access array elements 
  } 

  // Incrementing the pointer 
  ptr++; // Now points to the second element 
  printf("\nAfter incrementing pointer:\n"); 

  printf("Value at ptr (second element): %d\n", *ptr); // Output: 20 

  // Decrementing the pointer 
  ptr--; // Now points back to the first element 
  printf("After decrementing pointer:\n"); 

  printf("Value at ptr (first element): %d\n", *ptr); // Output: 10 

  // Adding an integer to the pointer 
  ptr += 3; // Now points to the fourth element 
  printf("\nAfter adding 3 to pointer:\n"); 

  printf("Value at ptr (fourth element): %d\n", *ptr); // Output: 40 

  // Subtracting an integer from the pointer 
  ptr -= 2; // Now points back to the second element 
  printf("After subtracting 2 from pointer:\n"); 

  printf("Value at ptr (second element): %d\n", *ptr); // Output: 20 

  // Demonstrating pointer subtraction 
  int *ptr1 = &arr[1]; // Pointer to the second element 
  int *ptr2 = &arr[4]; // Pointer to the fifth element 
  int difference = ptr2 - ptr1; // Calculate difference between two pointers 
  printf("\nDifference between ptr2 and ptr1: %d\n", difference); // Output: 3 

return 0; 

}