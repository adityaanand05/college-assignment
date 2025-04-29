// Write a C program to find the sum of individual digits of a positive integer. The number has to be taken
// as input from the keyboard. The total number of digits in the number may be four.

#include <stdio.h>

int main() {
    int num, digit, sum=0;
    printf("Enter your four digit number: ");
    scanf("%4d",&num);
    printf("\n Thank you for giving number system has taken your first four degits.\n \n");
    while (num > 0) {
        digit = num % 10;   
        sum += digit;          
        num = num / 10;  
    }
    printf("Sum of digits: %d\n",sum);
    return 0;
}