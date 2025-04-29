//  Write a C program that can take three integer numbers as input from the user and prints the largest
// among them

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);
    printf("Enter your third number: ");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("Your greatest munber is %d ",a);
    }
    else if (b>a && b>c)
    {
        printf("Your greatest munber is %d ",b);
    }
    else if (c>b && c>a){
        printf("Your greatest munber is %d ",c);
    }
    
    return 0;
}