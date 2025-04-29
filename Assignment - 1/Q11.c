// Write a program that takes as input a single character from the user and check whether the entered
// character is a vowel or consonant.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is a vowel.\n", ch);
    }
    else if (isalpha(ch))
    {
        printf("%c is a consonant.\n", ch);
    }
    else
    {
        printf("%c is not a valid alphabet letter.\n", ch);
    }

    return 0;
}

/*ctype header
it allow user to check -- 

Character Classification Functions
These functions return non-zero (true) if the condition is met:


Function	Description	                            Example
isalpha(c)	Checks if c is a letter (A–Z or a–z)	isalpha('G') → true
isdigit(c)	Checks if c is a digit (0–9)	        isdigit('5') → true
islower(c)	Checks if c is lowercase	            islower('a') → true
isupper(c)	Checks if c is uppercase	            isupper('Z') → true
isspace(c)	Checks if c is a whitespace	            isspace(' ') → true
isalnum(c)	Checks if c is alphanumeric	            isalnum('a') → true
ispunct(c)	Checks if c is a punctuation mark	    ispunct('!') → true 

Character Conversion Functions
These convert the character to a different case:


Function	Description	                    Example
tolower(c)	Converts uppercase to lowercase	tolower('B') → 'b'
toupper(c)	Converts lowercase to uppercase	toupper('x') → 'X'


*/