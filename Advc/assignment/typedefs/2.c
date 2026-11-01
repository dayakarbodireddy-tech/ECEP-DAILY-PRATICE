#include<stdio.h>
typedef int *int_ptr;
#define int_ptr int *
int main()
{
    int_ptr ptr1,ptr2;
    int num1=10,num2=20;
    printf("%d %d\n",num1,num2);
}