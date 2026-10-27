//Write a C program to change the value of a character variable from 'A' to 'Z' using a pointer.
#include<stdio.h>
void character(char *p)
{
   printf("before value is %c\n",*p);
   *p='z';
   printf("after value is %c",*p);
}
int main()
{
    char x;
    printf("enter the character:");
    scanf("%c",&x);
    character(&x);
    return 0;
}