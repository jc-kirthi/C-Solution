/* 
This program checks if a character is a vowel or consonant.
A character is considered a vowel if it is one of 'A', 'E', 'I', 'O', 'U' (case insensitive).
All other alphabetic characters are considered consonants.
*/

#include <stdio.h>
int main() 
{
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if it is a vowel or consonant
    if ((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) 
        printf("%c is a vowel.\n", ch);
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
        printf("%c is a consonant.\n", ch);
    else
        printf("%c is not a valid alphabet letter.\n", ch);

    return 0;
}
