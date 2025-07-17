/*
Write a C program to check voting eligibility based on age.
 */


#include <stdio.h>
int main() 
{
    int age;

    // Input age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check voting eligibility
    if (age >= 18) 
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\nYou need to wait %d more years.\n", 18 - age);

    return 0;
}
