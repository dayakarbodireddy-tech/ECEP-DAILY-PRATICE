#include<stdio.h>
int print_num(int n);
int main()
{
    int n;
    printf("enter the num:");
    scanf("%d",&n);
    int ret=print_num(n);
    printf("%d ",ret);
    return 0;
}
int print_num(int n)
{
    static int sum=0;
    if(n==0)
    {
        return 0;
    }else{
        sum=sum+n;
        print_num(n-1);
    }
    return sum;
}