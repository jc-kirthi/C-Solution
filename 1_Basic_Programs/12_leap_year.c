/* 
This program checks if a given year is a leap year or not.
ogic: A year is a leap year if it is divisible by 4, except for end-of-century years, which must be divisible by 400.
 */


#include <stdio.h>
int main() {
    int year;

    // Input year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year conditions
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
        printf("%d is a leap year.\n", year);
    else 
        printf("%d is not a leap year.\n", year);

    return 0;
}
