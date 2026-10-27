//Write a C program to read two integers and swap their values using pointers.
#include<stdio.h>
void swap(int *p,int *p2)
{
    //swapping
   int temp;
   temp=*p;
   *p=*p2;
   *p2=temp;
   printf("a is %d\n",*p);
   printf("b is %d",*p2);
}
int main()
{
    int a,b;
    printf("enter the a and b:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    return 0;
}