// Write a C program to add three numbers and print the result. Here the three numbers have to be taken
// from the user
#include <stdio.h>

int main() {
    int num1, num2, num3, sum;
    printf("Enter Your First Number: ");
    scanf("%d", &num1);
    printf("\nEnter Your Second Number: ");
    scanf("%d", &num2);
    printf("\nEnter Your Third Number: ");
    scanf("%d", &num3);
    sum = num1+num2+num3;
    printf("Sum of your three numbers are : %d",sum);
    
    return 0;
}