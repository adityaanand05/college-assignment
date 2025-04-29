// Write a program that takes as input a single character from the user; If the character is an English alphabet
// in small case, it is converted to upper case and printed out. If the character is an English alphabet in
// upper case, it is converted to lower case and printed out, and If the character is not an English alphabet,
// then it is kept unchanged and printed out.

#include <stdio.h>
#include<ctype.h>

int main() {
    char a;

    printf("enter your character :");
    scanf("%c", &a);

    if (islower(a))
    {
        a = toupper(a);
        printf("converted character is %c", a);
    }
    

    else if (isupper(a))
    {
        a = tolower(a);
        printf("converted character is %c", a);
    }

    else{
        printf("invalid charater");
    }
    
    return 0;
}