#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);  // Correct format specifier for two integers
    sum = num1 + num2;
    printf("Sum = %d\n", sum);  // Correct format specifier for an integer
    return 0;
}
