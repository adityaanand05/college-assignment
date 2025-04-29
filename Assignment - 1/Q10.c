// Write a program that prints the next character from the ASCII table for the corresponding character
// taken from the keyboard. As for example if the character taken from the keyboard is ‘B’ the program will
// print the immediate next character ‘C’. Also, print the corresponding ASCII value.

#include<stdio.h>
 
int main(){
   char a;

   printf("enter a  char value  :");
   scanf("%c", &a);

   printf("the next ASCII character is %c\n", a+1);
   printf("the corresponding ASCII value  is %d", a+1);

   return 0;
}