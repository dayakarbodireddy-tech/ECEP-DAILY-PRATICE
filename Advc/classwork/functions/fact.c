#include<stdio.h>
int fact(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int result=fact(5);
    printf("factorial is = %d",result);
    return 0;
}