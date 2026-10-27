#include<stdio.h>
void fibo(int n);
int main()
{
    int n;
    printf("enter the num:");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
void fibo(int n)
{
    static int a=0,b=1;
    if(a<=n)
    {
        printf("%d ",a);
        int next;
        next=a-b;
        a=b;
        b=next;
        fibo(n);
    }
}