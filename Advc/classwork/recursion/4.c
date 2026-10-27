#include<stdio.h>
int factorial(int);
int main()
{
    int x;
    printf("enter the num: ");
    scanf("%d",&x);
    int ret=factorial(x);
    printf("%d ",ret);
    return 0;
}
int factorial(int x)
{
    if(x==1)
    {
        return 1;

    }else{
        return x *factorial(x-1);
    }
}