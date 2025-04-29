// Write a C program to check whether a number entered by the user is even or odd.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("%d is nither Odd nor Even", a);
        
    }else if (a%2 == 0){
        printf("%d is Even", a);
    }else{
        printf("%d is Odd", a);
    }

    return 0;
}