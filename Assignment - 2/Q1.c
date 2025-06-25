//Write a C program that takes an integer as input from the keyboard and display it in words. As for
//example, If the integer is 235, the output will be Two Three Five.
#include <stdio.h>

int main() {
    char arr[100]; // array to hold input as a string

    printf("Enter your number: ");
    scanf("%s", arr);

    for (int i = 0; arr[i] != '\0'; i++) {
        switch(arr[i]) {
            case '0': printf("Zero "); break;
            case '1': printf("One "); break;
            case '2': printf("Two "); break;
            case '3': printf("Three "); break;
            case '4': printf("Four "); break;
            case '5': printf("Five "); break;
            case '6': printf("Six "); break;
            case '7': printf("Seven "); break;
            case '8': printf("Eight "); break;
            case '9': printf("Nine "); break;
            default: printf("Invalid "); break;
        }
    }

    printf("\n");
    return 0;
}
