// 3. Write a C program for temperature conversion. Use the following formula for conversion.
// c/5 = (f-31)/9
// (a) Convert the equivalent temperature in Fahrenheit (F) to Celsius (C). Where F have to be taken
// from the keyboard.

#include <stdio.h>

int main() {
    int f;
    float c;
    printf("Enter your temprature in degree Fahrenhite: ");
    scanf("%d",&f);
    c = ((f-31)*5)/9;
    printf("your temprature in degree Celsius is %f",c);
    return 0;
}

// (b) Convert the equivalent temperature in Celsius (C) to Fahrenheit (F). Where C have to be taken
// from the keyboard.
#include <stdio.h>

int main() {
    float f,c;
    printf("Enter your temprature in degree Celsius: ");
    scanf("%f",&c);
    f = (c*9/5)+32;
    printf("your temprature in degree Fahrenheit is %f",f);
    return 0;
}