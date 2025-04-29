//This program add the given two integer

#include<stdio.h>
int main(){
    int num1, num2, sum;
    printf("Welcome to Sum Calculator\n");
    //input a number
    printf("Please enter your number : ");
    scanf("%d", &num1);
    //input the second number
    printf("Now enter the second number : ");
    scanf("%d", &num2);

    //sum of the two number
    sum = num1 + num2;
    printf("Sum of the two number is : %d", sum);


    return 0;
}

