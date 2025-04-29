// Write C Program to check whether a given year entered from the keyboard is a leap year or not.
#include <stdio.h>

int main() {
    int year;
    printf("Enter your year: ");
    scanf("%d", &year);

    if (year < 0) {
        printf("Invalid input! Year cannot be negative.\n");
    } 
    else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Your year is a Leap year.\n");
    } 
    else {
        printf("Your year is Not a Leap year.\n");
    }

    return 0;
}
