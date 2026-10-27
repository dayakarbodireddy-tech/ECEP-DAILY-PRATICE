#include<stdio.h>
int sum_digits(int n);
int main()
{
    int n;
    printf("enter the num:  ");
    scanf("%d",&n);
    int ret=sum_digits(n);
    printf("%d",ret);
    return 0;
}
int sum_digits(int n)
{
    static int sum=0;
    if(n==0)
    {
        return 0;
    }
    sum_digits(n/10);
    sum=sum+n%10;
    return sum;
    
}