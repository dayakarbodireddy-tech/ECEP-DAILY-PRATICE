//Write a C program to declare an integer variable, store its address in an integer pointer, and print the value using the pointer.
#include<stdio.h>
void integer(int *p)
{
   printf("value stored is %d",*p);
}
int main()
{
   int a;
   printf("enter the value:");
   scanf("%d",&a);
   integer(&a);
   return 0;
}