/* 
This program checks if a number is prime.
It prompts the user to enter an integer and checks if it is prime by testing divisibility.
If the number is prime, it prints a message indicating so; otherwise, it indicates that the number is not prime.
*/

#include <stdio.h>
int prime(int n);

void main()
{
    int n, res;

    printf("Enter an integer: ");
    scanf("%d",&n);

    res = prime(n); // function is called by passing value

    //condition checking
    if (res == 1 )
        printf("The number is prime");
    else
        printf("The number is not prime");
}

//user-defined function to check if a number is prime
int prime(int n)
{
    int i;
    for ( i = 2 ; i < n ; i++ )
    { 
        if ( n%i == 0 )
            return 0;
    }
    return 1;
}