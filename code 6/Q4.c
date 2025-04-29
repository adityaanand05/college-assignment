// Write C programs to evaluate the following expressions:
// Here x and y may be an integer / float quantity have to be taken from the keyboard.
// (a) 4x2 + 2x + 10
// #include <stdio.h>

int main()
{
    int x, a, b, c, result;
    printf("Solve your eqn by this eqn calculator(Your eqn can be in the form ax2 + bx + c)\n");
    printf("\nenter a : ");
    scanf("%d", &a);
    printf("\nenter b : ");
    scanf("%d", &b);
    printf("\nenter c : ");
    scanf("%d", &c);
    printf("\nenter x : ");
    scanf("%d", &x);

    result = a * (x * x) + b * x + c;

    printf("result is %d", result);
    return 0;
}

// (b) 5x3 + 4x2y2 + 4y3 + 30
#include <stdio.h>

int main()
{
    int x , a , b , c,  y , result;
    printf("Solve your eqn by this eqn calculator(Your eqn can be in the form ax2 + bx + c)\n");
    printf("\nenter a : ");
    scanf("%d", &a);
    printf("\nenter b : ");
    scanf("%d", &b);
    printf("\nenter c : ");
    scanf("%d", &c);
    printf("\nenter x : ");
    scanf("%d", &x);
    printf("\nenter y : ");
    scanf("%d", &y);

    result = a * (x * x * x) + b * (y*y*x*x) + b*(y*y*y)+c;

    printf("result is %d", result);
    return 0;
}