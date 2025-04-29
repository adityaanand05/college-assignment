// Write a C program to compute the area and circumference of a circle for a given radius, r. Here radius,
// r have to be taken form the user
#include <stdio.h>

int main()
{
    int r;
    float pi, area, circumference;
    printf("Enter your radius'r': ");
    scanf("%d", &r);
    pi = 3.14;
    area = pi * r * r;
    circumference = 2 * pi * r;
    printf("Area of circle is %.2f and circumference is %.2f", area, circumference);
    return 0;
}