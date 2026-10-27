#include<stdio.h>
int main()
{
    int x;
    printf("enter the value:");
    scanf("%d",&x);
    int *p;
    p=&x;
    printf("value is %d\n",*p);
    printf("address is %p",p);
    return 0;
}