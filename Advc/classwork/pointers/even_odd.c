//Write a C program to read an integer and check whether it is even or odd using a pointer.
#include<stdio.h>
void even_odd(int *p)
{
   if(*p%2==0)
   {
    printf("%d is a EVEN",*p);
   }else{
    printf("%d is a ODD",*p);
   }
}
int main()
{
    int a;
    printf("enter the num:");
    scanf("%d",&a);
    even_odd(&a);
    return 0;
}