#include <stdio.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num, num1;
    
    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num, &num1);
    
    // Ensuring num is smaller than num1
    if (num > num1) {
        int temp = num;
        num = num1;
        num1 = temp;
    }
    
    printf("Prime numbers between %d and %d are: ", num, num1);
    for (int i = num; i <= num1; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
