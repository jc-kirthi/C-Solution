/* 
This program checks if a character is a vowel or not using Switch-case.
*/


#include <stdio.h>
#include <ctype.h>  // to use tolower function if not then we have to do it for both upper and lower case vowels
int main()
{
    char a; 

    printf("Enter a character: ");                             
    scanf("%c", &a);
    a=tolower(a);
    switch(a)
    {
        case 'u':
        case 'a':
        case 'e':
        case 'i':
        case 'o': printf("%c is a vowel", a);      
                break;
        default:printf("%c is not a vowel or consonant", a);      
    } 
    return 0;      
}